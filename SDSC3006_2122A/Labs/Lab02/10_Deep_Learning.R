## Installation Steps
# keras package interfaces with the tensorflow deep-learning software developed at Google
tryCatch(remove.packages(c("keras", "tensorflow", "reticulate")), 
         error=function(e) "Some or all packages not previously installed, that's ok!")
install.packages("keras", repos='https://cloud.r-project.org')
write('RETICULATE_AUTOCONFIGURE=FALSE', file="~/.Renviron", append=TRUE)
write(sprintf('RETICULATE_MINICONDA_PATH=%s', 
              normalizePath("~/islr-miniconda", winslash="/", mustWork=FALSE)),
      file="~/.Renviron", append=TRUE)
source(system.file("helpers", "install.R", package="ISLR2"))
Sys.setenv(RETICULATE_AUTOCONFIGURE='FALSE',
           RETICULATE_MINICONDA_PATH=normalizePath("~/islr-miniconda", 
                                                   winslash="/", mustWork=FALSE))
install_miniconda()
install_tensorflow()
print_py_config()
## A Single Layer Network on the Hitters Data
library(ISLR2)
Gitters <- na.omit(Hitters)
n <- nrow(Gitters)
# Split data to 2/3 training set and 1/3 test set
set.seed(13)
ntest <- trunc(n/3)
testid <- sample(1:n, ntest)
x <- scale(model.matrix(Salary~.-1, data=Gitters))
#x <- model.matrix(Salary~.-1, data=Gitters) %>% scale()
y <- Gitters$Salary
# Set up a network model structures
library(keras)
modnn <- keras_model_sequential() %>%
  layer_dense(units=50, activation="relu", input_shape=ncol(x)) %>%
  layer_dropout(rate=0.4) %>%
  layer_dense(units=1)
# Control the fitting algorithm
modnn %>% compile(loss="mse",
                  optimizer=optimizer_rmsprop(),
                  metrics=list("mean_absolute_error"))
# Fit the neural network
# An epoch amounts to the number of SGD steps required to process n observations
# An epoch is n/batch_size SGD steps
history <- modnn %>% fit(#x[-testid,], y[-testid], epochs=1500, batch_size=32,
                         x[-testid,], y[-testid], epochs=15, batch_size=32,
                         validation_data = list(x[testid,], y[testid]))
plot(history) # install ggplot2
# Predict from the final model
npred <- predict(modnn, x[testid,])
mean(abs(y[testid] - npred))
## A Multilayer Network on the MNIST Digit Data
# MNIST Digit Data in dataset_mnist() function in keras library
mnist <- dataset_mnist()
x_train <- mnist$train$x
g_train <- mnist$train$y
x_test <- mnist$test$x
g_test <- mnist$test$y
dim(x_train)
dim(x_test)
# "one-hot" encode the class label
x_train <- array_reshape(x_train, c(nrow(x_train), 784))
x_test <- array_reshape(x_test, c(nrow(x_test), 784))
y_train <- to_categorical(g_train, 10)
y_test <- to_categorical(g_test, 10)
# Rescale to the unit interval, eight-bit26 grayscale values between 0 and 255
x_train <- x_train / 255
x_test <- x_test / 255
# Network model structures
modelnn <- keras_model_sequential()
modelnn %>% 
  layer_dense(units=256, activation="relu", input_shape=c(784)) %>%
  layer_dropout(rate=0.4) %>%
  layer_dense(units=128, activation="relu") %>%
  layer_dropout(rate=0.3) %>%
  layer_dense(units=10, activation="softmax")
summary(modelnn)
# Specify the fitting algorithm
modelnn %>% compile(loss="categorical_crossentropy",
                    optimizer=optimizer_rmsprop(), 
                    metrics=c("accuracy"))
# Fit the neural network
system.time(history <- modelnn %>%
              fit(x_train, y_train, epochs=30, batch_size=128, 
                  validation_split=0.2))
plot(history, smooth=FALSE)
# Prediction accuracy
accuracy <- function(pred, truth)
  mean(drop(as.numeric(pred)) == drop(truth))
modelnn %>% predict(x_test) %>% k_argmax() %>% accuracy(g_test)
## Convolutional Neural Networks
# cifar100 data form dataset_cifar100() function in keras library
cifar100 <- dataset_cifar100()
names(cifar100)
x_train <- cifar100$train$x
g_train <- cifar100$train$y
x_test <- cifar100$test$x
g_test <- cifar100$test$y
dim(x_train)
range(x_train[1,,,1])
# Standardize & one-hot encode
x_train <- x_train / 255
x_test <- x_test / 255
y_train <- to_categorical(g_train, 100)
dim(y_train)
# Check training images
library(jpeg)
par(mar=c(0, 0, 0, 0), mfrow=c(5, 5))
index <- sample(seq(50000), 25)
for (i in index) plot(as.raster(x_train[i,,,]))
# Specify CNN structure
model <- keras_model_sequential() %>% 
  layer_conv_2d(filters=32, kernel_size=c(3, 3), 
                padding="same", activation="relu", input_shape=c(32, 32, 3)) %>%
  layer_max_pooling_2d(pool_size=c(2, 2)) %>%
  layer_conv_2d(filters=64, kernel_size=c(3, 3), 
                padding="same", activation="relu") %>%
  layer_max_pooling_2d(pool_size=c(2, 2)) %>%
  layer_conv_2d(filters=128, kernel_size=c(3, 3),
                padding="same", activation="relu") %>%
  layer_max_pooling_2d(pool_size=c(2, 2)) %>%
  layer_conv_2d(filters=256, kernel_size=c(3, 3),
                padding="same", activation="relu") %>%
  layer_max_pooling_2d(pool_size=c(2, 2)) %>%
  layer_flatten() %>%
  layer_dropout(rate=0.5) %>%
  layer_dense(units=512, activation="relu") %>%
  layer_dense(units=100, activation="softmax")
summary(model)
# Specify the fitting algorithm and fit the model
model %>% compile(loss="categorical_crossentropy",
                  optimizer=optimizer_rmsprop(), 
                  metrics=c("accuracy"))
history <- model %>% fit(x_train, y_train, epochs=30, batch_size=128, validation_split=0.2)
model %>% predict(x_test) %>% k_argmax() %>% accuracy(g_test)
## Recurrent Neural Networks
# IMDb movie-review data form dataset_imdb() function in keras library
max_features <- 10000
imdb <- dataset_imdb(num_words=max_features)
c(c(x_train, y_train), c(x_test, y_test)) %<-% imdb
x_train[[1]][1:12]
# Calculate length
wc <- sapply(x_train, length)
median(wc)
sum(wc<=500) / length(wc)
# Restrict the document lengths to the last L=500 words
maxlen <- 500
x_train <- pad_sequences(x_train, maxlen=maxlen)
x_test <- pad_sequences(x_test, maxlen=maxlen)
dim(x_train)
dim(x_test)
x_train[1, 490:500]
# RNN structures
model <- keras_model_sequential() %>%
  layer_embedding(input_dim=10000, output_dim=32) %>%
  layer_lstm(units=32) %>%
  layer_dense(units=1, activation="sigmoid")
# Fit RNN
model %>% compile(optimizer="rmsprop",
                  loss="binary_crossentropy", metrics=c("acc"))
history <- model %>% fit(x_train, y_train, epochs=10,
                         batch_size=128, validation_data=list(x_test, y_test))
plot(history)
predy <- predict(model, x_test) > 0.5
mean(abs(y_test == as.numeric(predy)))

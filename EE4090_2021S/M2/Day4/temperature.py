from sense_hat import SenseHat
import time

sense = SenseHat()
sense.clear()


def get_temp():  # function of get temperature
    temp = sense.get_temperature()
    print("The temperature is: ", temp)


while True:
    get_temp()
    time.sleep(1)

from sense_hat import SenseHat
import time


sense = SenseHat()
sense.clear()


def get_temp():  # function of get temperature
    temp = sense.get_temperature()
    print("The temperature is: ", temp)


def get_humi():  # function of get humidity
    humidity = sense.get_humidity()
    print("The humidity is: ", humidity)


def get_press():  # function of get pressure
    pressure = sense.get_pressure()
    print("The pressure is: ", pressure)


while True:
    get_temp()
    get_humi()
    get_press()
    time.sleep(5)

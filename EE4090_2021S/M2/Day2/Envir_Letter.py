from sense_hat import SenseHat
from time import sleep


sense = SenseHat()
sense.set_rotation(180)
sense.show_letter("A")
sleep(1)
sense.show_message("Hello world")

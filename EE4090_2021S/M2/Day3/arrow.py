# from sense_hat import SenseHat
import time
import random

# sense = SenseHat()
# sense.set_rotation(180)
# sense.clear()

msg = "Welcome to the Random Arrow Game"
g = (0, 255, 0)
e = (0, 0, 0)
w = (255, 255, 255)
angle_list = [0, 90, 180, 270]
lst_angle = -1
cur_angle = -2

arrow = [e, e, e, g, g, e, e, e, e, e, g, g, g, g, e, e, e, g, e, g, g, e, g, e, g, e, e, g, g, e, e, g,
         e, e, e, g, g, e, e, e, e, e, e, g, g, e, e, e, e, e, e, g, g, e, e, e, e, e, e, g, g, e, e, e]


# def game_start():
#     sense.show_message(msg, text_colour = w, back_colour = e, scroll_speed = 0.05)

# game_start()
# sense.set_pixels(arrow)

cur_angle = random.choice(angle_list)

for i in range(5):
    cur_angle = random.choice(angle_list)
    while cur_angle == lst_angle:
        cur_angle = random.choice(angle_list)
    print(cur_angle)
    lst_angle = cur_angle

from sense_hat import SenseHat
import time


sense = SenseHat()
sense.set_rotation(180)
sense.clear()


while True:
    for event in sense.stick.get_events():
        # Check if the joystick was pressed
        if event.action == "pressed":
            sense.clear()

            # Check the direction
            if event.direction == "up":
                sense.show_letter("D")  # Up arrow
            elif event.direction == "down":
                sense.show_letter("U")  # Down arrow
            elif event.direction == "left":
                sense.show_letter("R")  # Left arrow
            elif event.direction == "right":
                sense.show_letter("L")  # Right arrow
            elif event.direction == "middle":
                sense.show_letter("M")  # Enter key

            # Wait 1 second and clear the LED matrix
            # time.sleep(0.001)

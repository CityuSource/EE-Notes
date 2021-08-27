import sys
import time
import MySQLdb

try:
    from sense_hat import SenseHat
except ImportError:
    from sense_emu import SenseHat

sense = SenseHat()


def get_temp():
    temp = sense.get_temperature()
    print("The temperature is: ", temp)
    return temp


def get_humi():
    humidity = sense.get_humidity()
    print("The humidity is: ", humidity)
    return humidity


def get_press():
    pressure = sense.get_pressure()
    print("The pressure is: ", pressure)
    return pressure


def main(argv):
    # db = MySQLdb.connect("192.168.1.106", "dsp", "raspberry", "mydb")
    db = MySQLdb.connect("localhost", "root", "raspberry", "mydb")
    cursor = db.cursor()

    while True:
        # sql = "INSERT INTO trainingdb2 (ID, rec_temp, rec_humi, rec_press) VALUES (%s, %s, %s, %s)"
        sql = "INSERT INTO trainingdb1 (ID, rec_temp, rec_humi, rec_press) VALUES (%s, %s, %s, %s)"
        # val = (1, get_temp(), get_humi(), get_press())
        val = ("56781234", get_temp(), get_humi(), get_press())

        try:
            cursor.execute(sql, val)
            db.commit()
            time.sleep(5)
        except:
            db.rollback()
            print("error")
            db.close()
            quit()


if __name__ == "__main__":
    main(sys.argv[1:])

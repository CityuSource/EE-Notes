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


def main(argv):
    db = MySQLdb.connect("localhost", "root", "raspberry", "mydb")
    cursor = db.cursor()

    while True:
        sql = "INSERT INTO training (rec_temp) VALUES (%s)" % (get_temp())
        try:
            cursor.execute(sql)
            db.commit()
        except:
            db.rollback()
            print("error")
            break

        time.sleep(2)

    db.close()


if __name__ == "__main__":
    main(sys.argv[1:])

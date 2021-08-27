from sense_hat import SenseHat
import time
from time import sleep
from MySQLdb import _mysql
import MySQLdb

db = MySQLdb.connect("localhost", "root", "raspberry", "mydb")
cursor = db.cursor()  # declare cursor

sense = SenseHat()
sense.clear()


def get_temp():  # function of get temperature
    temp = sense.get_temperature()
    print("The temperature is: ", temp)
    return temp


while True:
    temp = get_temp()
    sql = "INSERT INTO training (rec_temp) VALUES (%s)" % (temp)

    try:
        cursor.execute(sql)
        db.commit()
        print("success")

    except:
        db.rollback()
        print("error")

    sleep(1)
db.close()

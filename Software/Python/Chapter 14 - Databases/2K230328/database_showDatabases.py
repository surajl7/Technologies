# Databases:
#
# Ex: to Print all the available databases

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("show databases")

for x in mycursor:
    print(x)
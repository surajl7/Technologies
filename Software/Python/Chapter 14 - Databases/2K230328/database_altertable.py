# Database:
#
# Ex: Altering the tables

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("use pythonTest")
mycursor.execute("alter table cust rename to cust1")    # to rename the table name


# Database
#
# Ex: Order by clause

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("USE PYTHONTEST")

mycursor.execute("SELECT * FROM CUST2 ORDER BY name DESC")

myresult = mycursor.fetchall()

for x in myresult:
    print(x)

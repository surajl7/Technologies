# Datebase
#
# Ex: Update records in table

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root", database="PYTHONTEST")

mycursor = mydb.cursor()

mycursor.execute("UPDATE CUST3 SET name='aaa' WHERE name='abc'")

mydb.commit()

print(mycursor.rowcount, "Records affected")

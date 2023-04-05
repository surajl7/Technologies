# Database:
#
# Ex: Selecting records from a table

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("USE PYTHONTEST")

mycursor.execute("SHOW COLUMNS FROM CUST2")
for x in mycursor:
    print(x)

mycursor.execute("SELECT * FROM CUST3")

print("\nFetching only one record: ", end='\n')
myresult = mycursor.fetchone()
for x in myresult:
    print(x)

print("\nFetching first 7 records: ", end='\n')
myresult = mycursor.fetchmany(7)
for x in myresult:
    print(x)

print("\nFetching all the record: ", end='\n')
myresult = mycursor.fetchall()
for x in myresult:
    print(x)

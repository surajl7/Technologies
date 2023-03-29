# Databases:
#
# Ex: Inserting data into table

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("USE PYTHONTEST")  # Selecting the database

print("\nInserting data into table:", end="\n")

# METHOD1: -->
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(1, 'abc', 'address1')")

# METHOD2: -->
sql = "INSERT INTO CUST3(name, address) VALUES(%s, %s)"
val = ("John", "NEW YORK")

try:
    mycursor.execute(sql, val)
    mydb.commit()  # committing or saving the data into a table
    print(mycursor.rowcount, "record inserted.")
except:
    mydb.rollback()

print("\nAll the data in a table:", end="\n")
mycursor.execute("SELECT * FROM CUST3")
myresult = mycursor.fetchall()
for x in myresult:
    print(x)

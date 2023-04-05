# Database:
#
# Ex: Different table operations.

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

print("\nShow databases: ", end="\n")
mycursor.execute("SHOW DATABASES")
for x in mycursor:
    print(x)

mycursor.execute("USE PYTHONTEST")

mycursor.execute("CREATE TABLE CUST3(id int auto_increment primary key, name varchar(20), address varchar(30))")

print("\nTables in given data base: ", end="\n")
mycursor.execute("SHOW TABLES")
for x in mycursor:
    print(x)



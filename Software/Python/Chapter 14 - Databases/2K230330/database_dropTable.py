# Database:
#
# Ex: To Drop a table

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root", database="PYTHONTEST")

mycursor = mydb.cursor()

show_tables = "SHOW TABLES"
print_records = "SELECT * FROM CUST2"
drop_table = "DROP TABLE CUST2"
drop_if_exists = "DROP TABLE IF EXISTS CUST"

print("Print all the tables:", end="\n")
mycursor.execute(show_tables)
myresult = mycursor.fetchall()
for i in myresult:
    print(i)

print("Print all the records: ", end="\n")
mycursor.execute(print_records)
myresult = mycursor.fetchall()
for i in myresult:
    print(i)

print("Dropping the table: ", end="\n")
mycursor.execute(drop_table)

print("Dropping the table if exists: ", end="\n")
mycursor.execute(drop_if_exists)

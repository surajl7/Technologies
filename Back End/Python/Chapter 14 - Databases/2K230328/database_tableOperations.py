# Database:
#
# Ex: Different table operations.

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("show databases")
for x in mycursor:
    print(x)

mycursor.execute("use pythontest")

mycursor.execute("show tables")
for x in mycursor:
    print(x)

custnum = int(input("Enter number of customers: "))

i = 0

while i in range(custnum):
    mycursor.execute("create table cust"
                     "("
                     "id int auto-increment primary key,"
                     "name varchar(20),"
                     "address varchar2(30)"
                     ")")

mycursor.execute("select * from cust")
for x in mycursor:
    print(x)





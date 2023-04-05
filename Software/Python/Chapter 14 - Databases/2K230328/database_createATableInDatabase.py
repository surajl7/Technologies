# Databases:
#
# Ex:  Create a table in particulate database

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("use pythontest")  # choose the database you wish to create a table in
mycursor.execute("create table cust(id int, name varchar(20))")  # query to create a table with column details





# Databases:
#
# Ex: Inserting Multiple records into a table

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

mycursor.execute("USE PYTHONTEST")  # selecting the database for query execution

print("\nchecking the structure of table:", end="\n")
mycursor.execute("SHOW COLUMNS FROM CUST2")
for x in mycursor:
    print(x)

print("\nInserting multiple records in a table: ", end="\n")

# METHOD1: -->
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(1, 'abc', 'address1')")
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(2, 'xyz', 'address2')")
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(3, 'pqr', 'address3')")
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(4, 'oil', 'address4')")
# mycursor.execute("INSERT INTO CUST(id, name, address) VALUES(5, 'soil', 'address5')")

# METHOD2: -->

sql = "INSERT INTO CUST2(name, address) VALUES(%s, %s)"     # id is a primary key auto-incremental

val = [("abc", "address1"),
       ("xyz", "address2"),
       ("pqr", "address3"),
       ("iol", "address4"),
       ("lol", "address5")]

try:
    mycursor.executemany(sql, val)      # To execute the multiple records we use "executemany"
    mydb.commit()
except:
    mydb.rollback()
finally:
    print(mycursor.rowcount, "records inserted")

print("\nDisplaying all the data in a table:", end="\n")
mycursor.execute("SELECT * FROM CUST2")
myresult = mycursor.fetchall()

for x in myresult:
    print(x)

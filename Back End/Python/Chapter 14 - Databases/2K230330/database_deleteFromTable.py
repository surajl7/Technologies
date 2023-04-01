# Database:
#
# Ex: Delete from table

import mysql.connector

# Establishing connection  with mysql database:
pymsdc = mysql.connector.connect(host="localhost", user="root", passwd="root", database="PYTHONTEST")
mycursor = pymsdc.cursor()

# Writing SQL Queries
# use_table_sql = "USE PYTHONTEST"
print_records = "SELECT * FROM CUST3"
# update_records = "UPDATE CUST3 SET name='xyz' WHERE name = 'aaaa'"
delete_records = "DELETE FROM CUST3 WHERE name='xyz'"

# Executing query for selecting database
# mycursor.execute(use_table_sql)

# To print all the records from table
print("\nShow all the records from table: ", end="\n\n")
mycursor.execute(print_records)
myresult = mycursor.fetchall()

for i in myresult:
    print(i)

# Deleting particular records from table
mycursor1 = pymsdc.cursor()
mycursor1.execute(delete_records)
pymsdc.commit()  # committing\saving the changes

print("\nAfter deletion of some records: ", end="\n\n")
try:
    mycursor2 = pymsdc.cursor()
    mycursor2.execute(print_records)
    myresult = mycursor2.fetchall()

    for i in myresult:
        print(i)

except:
    pymsdc.rollback()  # rolling back or undoing changes if something went wrong
finally:
    # print("xxxxxxxxxxxxxx")
    print(mycursor1.rowcount, "Number of rows affected", end="\n")  # to display number of rows affected

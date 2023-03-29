# Database:
#
# Ex: Using where clause:

import mysql.connector

mydb = mysql.connector.connect(host="localhost", user="root", passwd="root")

mycursor = mydb.cursor()

try:
    mycursor.execute("USE PYTHONTEST")

    sql = "SELECT * FROM CUST2 WHERE name='lol'"

    mycursor.execute(sql)

    myresult = mycursor.fetchall()
    for x in myresult:
        print(x)

except:
    print("\nException occur, something went wrong", end="\n")
finally:
    print(mycursor.rowcount, "rows affected", end="\n")

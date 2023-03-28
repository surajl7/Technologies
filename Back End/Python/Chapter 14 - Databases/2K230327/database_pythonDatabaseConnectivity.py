# Database:
#
# Python database connectivity:


# Note: Execute the script only with import mysql.connector.
# to check if the mysql-connect library is installed successfully.
import mysql.connector

# Create a connection:
# NOTE:  to check if the database is connected correctly.
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="root"
)

# Create database:

mycursor = mydb.cursor()

mycursor.execute("Create database pythonTest")
import sqlite3
connection = sqlite3.connect("Login.db")
crsr = connection.cursor()
sql_command = """CREATE TABLE lgn (
    Username VARCHAR(20),
    Password VARCHAR(20)
);"""
crsr.execute(sql_command)
connection.commit()
connection.close()
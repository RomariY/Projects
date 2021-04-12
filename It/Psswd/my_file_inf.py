import sqlite3
connection = sqlite3.connect("Passwords.db")
crsr = connection.cursor()
sql_command = """CREATE TABLE emp (    
Platform VARCHAR(20),
Username VARCHAR(20),  
Passwords VARCHAR(30)
);"""
crsr.execute(sql_command)
connection.commit()
connection.close()
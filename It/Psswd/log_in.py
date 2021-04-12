import sqlite3
connection = sqlite3.connect("Log_in.db")
crsr = connection.cursor()
sql_command = """CREATE TABLE log_in (
    Username VARCHAR(20),
    Password VARCHAR(20)
);"""
crsr.execute(sql_command)
connection.commit()
connection.close()
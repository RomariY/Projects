import sqlite3
i = 0
while i<4:
    #log in
    i+=1
    connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Log_in.db")
    crsr = connection.cursor()
    crsr.execute( " SELECT * FROM log_in ")
    crs = crsr.fetchall()
    log_in = input("Login: ")
    passwd = input("Password: ")
    if log_in == crs[0][0] and passwd == crs[0][1]:
        name = input("\nWhat is your your name?\n")
        print("\nHello,"+ name + "\nI'm a password manager" )
        print("What you wanna do with your passwd list?\n")
        print("-----------------\n")
        print("1.Password list \n2.Add passwords\n3.Delete your password \n4.Find the password \n ")
        print("-----------------")

        while 1<2:
            print("To stop it print 5")
            option = int(input("\nType the option: "))
            
            if option == 1:
                connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Passwords.db")
                crsr = connection.cursor()
                crsr.execute("SELECT * FROM emp")
                for row in crsr:
                    print(row)
                crsr.close()
            elif option == 2:
                platform = input("Platform: ")
                login = input("Login: ")
                password = input("Passwords: ")
                connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Passwords.db")
                crsr = connection.cursor()
                sql_command = """INSERT INTO emp (Platform, Username, Passwords) VALUES(?, ?, ?)"""
                crsr.execute(sql_command,[(platform), (login), (password)])
                connection.commit()
                connection.close()
            elif option == 3:
                platform = input("Platform: ")
                login = input("Login: ")
                password = input("Passwords: ")
                connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Passwords.db")
                crsr = connection.cursor()
                crsr.execute("SELECT * FROM emp")
                crsr.execute("DELETE FROM emp WHERE Platform = ? AND Username = ? AND Passwords = ?",(platform, login, password))
                connection.commit()
                connection.close()
            elif option == 4:
                platform = input("Platform: ")
                connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Passwords.db")
                crsr = connection.cursor()
                sql_command = """SELECT * FROM emp WHERE Platform = ?"""
                crsr.execute(sql_command,(platform,))
                for row in crsr:
                    print(row)
                crsr.close()
            else:
                break


        
    else:
        print("Incorect login or password\n")
    

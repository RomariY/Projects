import os
while 2>1:
    dirs = os.listdir("/home/roman/Documents/It/Filefilter/input")
    for files in dirs:
            if files[-5:] == ".docx":
                curent_path = "/home/roman/Documents/It/Filefilter/input/" + files
                new_path = "/home/roman/Documents/It/Filefilter/docxfiles/" + files
                os.rename(curent_path, new_path)
            elif files[-4:] == ".txt":
                curent_path = "/home/roman/Documents/It/Filefilter/input/" + files
                new_path = "/home/roman/Documents/It/Filefilter/txtfiles/" + files
                os.rename(curent_path, new_path)

            elif files[-3:] == ".py":
                curent_path = "/home/roman/Documents/It/Filefilter/input/" + files
                new_path = "/home/roman/Documents/It/Filefilter/pyfiles/" + files
                os.rename(curent_path,new_path)
            else: 
                pass
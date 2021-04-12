from PyQt5 import QtCore, QtGui, QtWidgets
import sqlite3

class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(671, 465)
        self.lineEdit_2 = QtWidgets.QLineEdit(Dialog)
        self.lineEdit_2.setGeometry(QtCore.QRect(380, 170, 161, 31))
        self.lineEdit_2.setText("")
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.lineEdit = QtWidgets.QLineEdit(Dialog)
        self.lineEdit.setGeometry(QtCore.QRect(380, 230, 161, 31))
        self.lineEdit.setText("")
        self.lineEdit.setEchoMode(QtWidgets.QLineEdit.Password)
        self.lineEdit.setObjectName("lineEdit")
        self.textBrowser_2 = QtWidgets.QTextBrowser(Dialog)
        self.textBrowser_2.setGeometry(QtCore.QRect(190, 230, 141, 31))
        self.textBrowser_2.setObjectName("textBrowser_2")
        self.label = QtWidgets.QLabel(Dialog)
        self.label.setGeometry(QtCore.QRect(200, 80, 291, 51))
        font = QtGui.QFont()
        font.setPointSize(33)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.textBrowser = QtWidgets.QTextBrowser(Dialog)
        self.textBrowser.setGeometry(QtCore.QRect(190, 170, 141, 31))
        self.textBrowser.setObjectName("textBrowser")
        self.pushButton = QtWidgets.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(440, 320, 90, 28))
        self.pushButton.setObjectName("pushButton")
        self.pushButton_2 = QtWidgets.QPushButton(Dialog)
        self.pushButton_2.setGeometry(QtCore.QRect(340, 320, 90, 28))
        self.pushButton_2.setObjectName("pushButton_2")

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.textBrowser_2.setHtml(_translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>"))
        self.label.setText(_translate("Dialog", "Login Form"))
        self.textBrowser.setHtml(_translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Ubuntu\'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Login</span></p></body></html>"))
        self.pushButton.setText(_translate("Dialog", "Login"))
        self.pushButton.clicked.connect(self.authenticate)
        self.pushButton_2.setText(_translate("Dialog", "Sign up"))

    def authenticate(self):
        connection = sqlite3.connect("/home/roman/Documents/It/Psswd/Log_in.db")
        crsr = connection.cursor()
        crsr.execute( " SELECT * FROM log_in ")
        crs = crsr.fetchall()
        log_in = self.lineEdit_2.text()
        passwd = self.lineEdit.text()
        if log_in == crs[0][0] and passwd == crs[0][1]:
            self.pushButto 
            name = input("\nWhat is your your name?\n")
            print("\nHello,"+ name + "\nI'm a password manager" )
            print("What you wanna do with your passwd list?\n")
            print("-----------------\n")
            print("1.Password list \n2.Add passwords\n3.Delete your password \n4.Find the password \n ")
            print("-----------------")
        else:
            #QMessageBox.critical(self,"8","wed",QMessageBox.Ok)
            QtWidgets.QMessageBox.information(self.mainwindow, 'Message', 'Data Has Been Parsed!', QtWidgets.QMessageBox.Ok)
            return
if __name__ == "__main__":
    import sys 
    app = QtWidgets.QApplication(sys.argv)
    Dialog = QtWidgets.QDialog()
    ui = Ui_Dialog()
    ui.setupUi(Dialog)
    Dialog.show()
    sys.exit(app.exec_())

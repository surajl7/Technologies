# GUI - Graphical User Interface
#
# Tkinter Widgets
# Tkinter provides various controls, such as buttons, labels and text boxes used in a GUI application.
# These controls are commonly called widgets.
#
# Button:
#     The Button widget is used to add buttons in a Python application. These buttons can display text or
#     images that convey the purpose of the buttons. You can attach a function or a method to a button which is called
#     automatically when you click the button.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Button ( master, option=value, ... )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.


from tkinter import *
from tkinter import messagebox

top = Tk()


# top.geometry("100x100")


def helloCallBack():
    messagebox.showinfo("Hello Python", "Hello World")


B = Button(top, text="Hello", command=helloCallBack)
# B.place(x=35, y=50)

B.pack()
top.mainloop()

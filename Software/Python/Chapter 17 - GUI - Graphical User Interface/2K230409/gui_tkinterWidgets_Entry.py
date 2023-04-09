# GUI - Graphical User Interface
#
# Tkinter Widgets
#
# Entry:
# The Entry widget is used to accept single-line text strings from a user.
#     • If you want to display multiple lines of text that can be edited, then you should use the Text widget.
#     • If you want to display one or more lines of text that cannot be modified by the user,
#       then you should use the Label widget.
#
# Syntax:
# Here is the simple syntax to create this widget −
# w = Entry( master, option, ... )
#
# Parameters:
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

from tkinter import *

top = Tk()

L1 = Label(top, text="User Name")
L1.pack(side=LEFT)
E1 = Entry(top, bd=5)
E1.pack(side=RIGHT)

top.mainloop()

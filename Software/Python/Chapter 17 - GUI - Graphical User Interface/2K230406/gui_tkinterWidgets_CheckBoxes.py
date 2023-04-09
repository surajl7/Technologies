# GUI - Graphical User Interface
#
# Tkinter Widgets
#
# CheckBoxes:
#     The Checkbutton widget is used to display a number of options to a user as toggle buttons.
#     The user can then select one or more options by clicking the button corresponding to each option.
#     You can also display images in place of text.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Checkbutton ( master, option, ... )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

from tkinter import *
from tkinter import messagebox
import tkinter

top = tkinter.Tk()

CheckVar1 = IntVar()
CheckVar2 = IntVar()

# C1 = Checkbutton(top, text="Music", variable=CheckVar1, onvalue=1, offvalue=0, height=5, width=20)

C1 = Checkbutton(top, text="Music", variable=CheckVar1, \
                 onvalue=1, offvalue=0, height=5, \
                 width=20)

C2 = Checkbutton(top, text="Video", variable=CheckVar2, onvalue=1, offvalue=0, height=5, width=20)

C1.pack()
C2.pack()
top.mainloop()

# GUI - Graphical User Interface
#
# Tkinter Widgets
#
# Label
#     This widget implements a display box where you can place text or images.
#     The text displayed by this widget can be updated at any time you want.
#     It is also possible to underline part of the text (like to identify a keyboard shortcut) and
#     span the text across multiple lines.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Label ( master, option, ... )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

from tkinter import *

root = Tk()
var = StringVar()
label = Label(root, textvariable=var, relief=RAISED)

var.set("Hey! How are you doing?")
label.pack()
root.mainloop()

# GUI - Graphical User Interface
#
# Tkinter Widgets

# Radio Button
#     This widget implements a multiple-choice button, which is a way to offer many possible selections to the user
#     and lets user choose only one of them.
#     In order to implement this functionality, each group of radiobuttons must be associated to the same variable
#     and each one of the buttons must symbolize a single value. You can use the Tab key to switch
#     from one radionbutton to another.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Radiobutton ( master, option, ...  )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

from tkinter import *


def sel():
    selection = "You selected the option" + str(var.get())
    label.config(text=selection)


root = Tk()
var = IntVar()

R1 = Radiobutton(root, text="Option 1", variable=var, value=1, command=sel)
R1.pack(anchor=W)

R2 = Radiobutton(root, text="Option 2", variable=var, value=2, command=sel)
R2.pack(anchor=W)

R2 = Radiobutton(root, text="Option 3", variable=var, value=3, command=sel)
R2.pack(anchor=W)

label = Label(root)
label.pack()
root.mainloop()




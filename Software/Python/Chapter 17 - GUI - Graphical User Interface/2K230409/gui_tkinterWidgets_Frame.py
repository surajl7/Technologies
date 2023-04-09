# GUI - Graphical User Interface
#
# Tkinter Widgets
#
# Frame
#     The Frame widget is very important for the process of grouping and organizing other
#     widgets in a somehow friendly way. It works like a container, which is responsible for arranging
#     the position of other widgets.
#     It uses rectangular areas in the screen to organize the layout and to provide padding of these widgets.
#     A frame can also be used as a foundation class to implement complex widgets.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Frame ( master, option, ... )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

from tkinter import *

root = Tk()
frame = Frame(root)
frame.pack()

bottomframe = Frame(root)
bottomframe.pack(side=BOTTOM)

redbutton = Button(frame, text="Red", fg="red")
redbutton.pack(side=LEFT)

greenbutton = Button(frame, text="Brown", fg="brown")
greenbutton.pack(side=LEFT)

bluebutton = Button(frame, text="Blue", fg="blue")
bluebutton.pack(side=LEFT)

blackbutton = Button(bottomframe, text="Black", fg="black", bg="red")
blackbutton.pack(side=BOTTOM)

root.mainloop()

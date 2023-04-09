# GUI - Graphical User Interface
#
# Tkinter Widgets
#
#
# Canvas
#     The Canvas is a rectangular area intended for drawing pictures or other complex layouts.
#     You can place graphics, text, widgets or frames on a Canvas.
#
# Syntax
#     Here is the simple syntax to create this widget −
#     w = Canvas ( master, option=value, ... )
#
# Parameters
#     • master − This represents the parent window.
#     • options − Here is the list of most commonly used options for this widget.
#       These options can be used as key-value pairs separated by commas.

import tkinter

top = tkinter.Tk()

C = tkinter.Canvas(top, bg="blue", height=250, width=300)

# coord = 10, 50, 240, 210
coord1 = 10, 10, 150, 150
coord2 = 280, 10, 150, 150
coord3 = 10, 10, 150, 150
coord4 = 280, 10, 150, 150

arc1 = C.create_arc(coord1, start=0, extent=180, fill="red")
arc2 = C.create_arc(coord2, start=0, extent=180, fill="red")
arc3 = C.create_arc(coord3, start=0, extent=270, fill="red")
arc4 = C.create_arc(coord4, start=0, extent=-90, fill="red")

C.pack()
top.mainloop()

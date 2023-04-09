# GUI - Graphical User Interface
#
# Tkinter Widgets
#
# Messagebox

from future.moves import tkinter

from tkinter import messagebox

top = tkinter.Tk()


def helloCallBack():
    messagebox.showinfo("Hello Python", "Hello world")


B = tkinter.Button(top, text="Hello", command=helloCallBack)

B.pack()
top.mainloop()

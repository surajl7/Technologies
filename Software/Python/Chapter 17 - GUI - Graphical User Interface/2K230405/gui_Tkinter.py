# GUI - Graphical User Interface
#
# GUI Programming (Tkinter)
#
# Python provides various options for developing graphical user interfaces (GUIs). Most important are listed below.
#     • Tkinter − Tkinter is the Python interface to the Tk GUI toolkit shipped with Python.
#     • wxPython − This is an open-source Python interface for wxWindows http://wxpython.org.
#     • JPython − JPython is a Python port for Java which gives Python scripts seamless access to Java class libraries
#       on the local machine http://www.jython.org.
# There are many other interfaces available, which you can find them on the net.
import tkinter

# Tkinter Programming
# Tkinter is the standard GUI library for Python. Python when combined with Tkinter provides a fast
# and easy way to create GUI applications. Tkinter provides a powerful object-oriented interface to the Tk GUI toolkit.
# Creating a GUI application using Tkinter is an easy task. All you need to do is perform the following steps −
#     • Import the Tkinter module.
#     • Create the GUI application main window.
#     • Add one or more of the above-mentioned widgets to the GUI application.
#     • Enter the main event loop to take action against each event triggered by the user.


import tkinter

top = tkinter.Tk()
# Code to add widgets will go here...
top.mainloop()

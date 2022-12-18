# Array:

# Type Code

#  TYPE CODE          C.Type          Python Type     MinSizeInByte
# ------------------------------------------------------------------
#     'b'             Signed Char     int             1
#     'B'             Unsigned Char   int             1
#     'u'             Py_Unicode      Unicode Char    2
#     'h'             Signed Short    int             2
#     'H'             Unsigned Short  int             2
#     'i'             Signed int      int             2
#     'I'             Unsigned int    int             2
#     'l'             Signed long     int             4
#     'L'             Unsigned long   int             4
#     'f'             float           float           4
#     'd'             double          float           8

# Character Array:

from array import *

vals = array('u',['s','u','r','a','j'])

#To find the type of var vals
print("\nType of variable vals: ",type(vals), end = "\n")

#Print var vals
print("\nDisplay vals: ",vals,"\n", end = '\n')

for i in range (len(vals)):
    print("arr[",i,"]: ",vals[i], sep = '', end = '\n')

print("", end = "\n")
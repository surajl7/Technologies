=NOTE
Arrays:
    -   An array is a list of having scalars of any datatype.
    -   Array is created with the symbol -> @ (or) qw
    -   Elements can be accessed by index starting from 0 (or) by range operator (..)
    -   Array Size can be known by 2 ways:
        1.  scalar @<Array Name>
        2.  $#Array + 1

Functions to Modify Array:
    push()
        Appends an element at the end of array.
        Syntax: push(@<ArrayName>,<element>)
    
    unshift()
        Appends an element at the starting of Array.
        Syntax: unshift(@<ArrayName>,<element>)

    pop()
        Removes element at the end of array.
        Syntax: pop(@<ArrayName>)

    shift()
        Removes element at the starting of array
        Syntax: shift(@<ArrayName>)
=cut


#!/usr/bin/perl

#Declaring an Array
@skills = ("Perl", 5, "Python", 2, "Java", 4);
print "\n@skills\n\n";

#Accessing the elements of Array
print "First element: $skills[0]\n";
print "Last element: $skills[-1]\n";
print "Last but one element: $skills[-2]\n";
print "Elements from 2 to 4 index: @skills[2..4]\n";
print "Elements from 2 to last index: @skills[2..$#skills]\n";
print "Last 3 elements of an array: @skills[$#skills-2..$#skills]\n";

#Declaring a numbered array with range operator
@experiences = (1..10);
print "\n\nNumbered array: ";
print "@experiences\n";

#Array Size
print "Array Size First way: ", scalar @experiences, "\n";
print "Array Size Second way: ", $#experiences + 1, "\n";

# @array = (1, 2, 3, 4, 5);

# # Method 1: Using scalar function
# $size = scalar(@array);
# print "Array size (Method 1): $size\n";

# # Method 2: Using expression $#array + 1
# $size = $#array + 1;
# print "Array size (Method 2): $size\n";


#Function to add or delete elements in an array
print "\nInsterting element at the end\n";
push(@experiences, "ADD");
print "@experiences\n";

print "\nInserting element at the beginning\n";
unshift(@experiences, "BEGIN");
print "@experiences\n";

print "\nRemoving element at the end\n";
$popped = pop(@experiences);
print "@experiences\n";
print "Popped string: ", "$popped\n";

print "\nRemove an elemen for the begining\n";
$popped = shift(@experiences);
print "@experiences\n";
print "Popped string: $popped\n";


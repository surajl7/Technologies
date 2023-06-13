=NOTE
There are 3 datatypes:
    1.  Scalars -> $
    2.  Arrays -> @
    3.  Hashes -> %

TIP to remember: H.A.S.
=cut

#!/usr/bin/perl

#Scaler
$string = "perl";

#Arrays
@skillNames = ("Perl", "Python", 5, 3);

#Hashes
%skillsExp = ("Perl" => 5, 
            Python => 2);

print $string, "\n", @skillNames, "\n", %skillsExp, "\n";
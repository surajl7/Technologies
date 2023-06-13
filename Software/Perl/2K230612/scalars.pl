=NOTE
Scalars:
    -   Scalar is a variable which can hold an integer, a string, a float, etc
    -   No speific type mentined like integer, string (or) float
    -   Numeric Scaler, String Scalar, float Scalar, etc
    -   Declaring a scalar:
        -   Symbol - $
        -   $scalarNum = "Tutorialspoint"

    -   Arithmatic Operations (+,-,)
    -   Concatenation Operator
        -> dot (or) comma is used for concatenating strings.
    -   Repetition operator
        -> x is used for repeating the scalar
        -> Ex: $scalarNum x 5
    -   v Strings
        -> Scalar declaration using ASCII numbers
=cut

#!/usr/bin/perl

#Numeric Scalar
$numScalar = 100;

#String Scalar
$strScalar = "Perl";

#vString
$vString = v85.78.73.88;

print $numScalar."-".$strScalar."-".$vString."\n";

print "=" x 10, "\n";

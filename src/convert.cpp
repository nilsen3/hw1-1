
#include "eecs230.h"
/*
 * convert: converts from inches to cm

Example interactions:

    Enter length in inches:
    > 12
    12 in = 30.48 cm

    Enter length in inches:
    > three
    error: You must enter a number

*/


constexpr double cm_per_inch = 2.54;

int main() {
    cout << "Enter length in inches:\n" ;
    double length;
    cin>>length;
    if(!cin){
        simple_error("number must be entered!");
    }
    cout<<length<<'' int =  '' << (length*2.54) << "cm";
}
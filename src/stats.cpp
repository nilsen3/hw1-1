#include "eecs230.h"

/*
stats: computes the min, max, and avg of three integers

Example interactions:

    Enter three integers:
    > 5 10 20
    min: 5
    max: 20
    avg: 11.6667

    Enter three integers:
    > 2 2 200
    min: 2
    max: 200
    avg: 68

    Enter three integers:
    > 3.5 9 10
    error: Could not read numbers
*/

int main() {
    cout<<"Enter three integers:\n";
    int inte1;
    int inte2;
    int inte3;
    cin>>inte1>>inte2>>inte3;
    if (! cin){
        simple_error("Could not read the numbers");
    }
    double avg;
    avg=(inte1+inte2+inte3)/3.0;
    int max=inte1;
    int min=inte1;
    if (inte2>max){
        max=inte2;
    }
    if (inte3>max) {
        max = inte3;
    }
    if (inte2<min) {
        min = inte2;
    }
    if (inte3<min) {
        min = inte3;
    }
    cout<<"min:  "<<min<<"\n";
    cout<<"max:  "<<max<<"\n";
    cout<<"avg:  "<<avg;
}


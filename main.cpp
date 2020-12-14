//
//  main.cpp
//  Quadratic Equation Solver
//
//  Created by Michael Mengistu on 6/25/17.
//  Copyright © 2017 Michael Mengistu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a;
    double b;
    double c;
    double x1 = 0;
    double x2= 0;
    double imag = 0;
    
    
    
    // quadratic Equation
    cout << "enter a, b, c:";
    cin >> a >> b >> c;
    
    // for real solutions
    if ( ((b * b) - (4 * a * c) >= 0) && (b > 0 | b < 0)) {
        x1 = (- b + sqrt((b * b) - (4 * a * c))) / (2 * a );
        x2 = (- b - sqrt((b * b) - (4 * a * c))) / (2 * a) ;
        cout << a << "x^2 + " << b << "x + " << c << endl;
        cout << "x = " << x1 << endl;
        cout << "x = " << x2 << endl;
    }
    // for imaginary solutions
    else if ( (b * b) - (4 * a * c) < 0 ) {
        imag = sqrt(-((b * b) - (4 * a * c))) / (2 * a);
        x1 = - b / (2 * a);
        cout << a << "x^2 + " << b << "x + " << c << endl;
        cout << "x = " << x1 << " + " << imag << "i" <<endl;
        cout << "x = " << x1 << " - " << imag << "i" <<endl;    }
 
    // Liner Equation
    else if (a == 0 && (b > 0 | b < 0) ){
        x1 = -(b / c);
        cout << b << "x + " << c << endl;
        cout << "x = " << x1 << endl;
    }
    else if (a == 0 && b == 0){
            cout << "Unable to determine root(s)"<< endl;
    }
    
    return 0;
}

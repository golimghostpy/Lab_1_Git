#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float rectPerimetr(float a, float b){
    return 2 * (a + b);
}

float rectSquare(float a, float b){
    return a * b;
}

float diagonalLength(float a, float b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main(){
int figure;
    cout << "Type 1 to choose circle and 2 to choose rectangle: ";
    cin >> figure;
    switch(figure){
case 1:{
break;
}
case 2:{
            float length, width;
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter width of rectangle: ";
            cin >> width;
            if (length > 0 && width > 0){
                cout << "------------------------------------" << endl;
                cout << "Results: " << endl;
                cout << fixed << setprecision(2) << "Perimeter: " << rectPerimetr(length, width) << endl << "Square: " << rectSquare(length, width) << endl << "Length of diagonal: " << diagonalLength(length, width) << endl;
            }
            else{
                cout << "Incorrect input" << endl;
            }
            break;
        }
default:{
            cout << "I don't know this choice" << endl;
            break;
        }
    }
    return 0;
}

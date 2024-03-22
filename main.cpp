#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float circleLength(float r){
    return 2 * M_PI * r;
}

float circleSquare(float r){
    return M_PI * r * r;
}

float sectorSquare(float r, float degree){
    return circleSquare(r) / 360 * degree;
}

float rectPerimetr(float a, float b){
    return 2 * (a + b);
}

float rectSquare(float a, float b){
    return a * b;
}

float diagonalLength(float a, float b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main()
{
    int figure;
    cout << "Type 1 to choose circle and 2 to choose rectangle: ";
    cin >> figure;
    switch(figure){
        case 1:{
            float radius, degree;
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Enter degree of sector(0 - 360): ";
            cin >> degree;
            if (radius > 0 && degree >= 0 && degree <= 360){
                cout << "------------------------------------" << endl;
                cout << "Results: " << endl;
                cout << fixed << setprecision(2) << "Length: " << circleLength(radius) << endl << "Square: " << circleSquare(radius) << endl << "Sector square: " << sectorSquare(radius, degree) << endl;
            }
            else{
                cout << "Incorrect input" << endl;
            }
            break;
        }
        case 2:{
            break;
        }
        default:{
            cout << "I don't know this choice" << endl;
            break;
        }
    }
    return 0;
}

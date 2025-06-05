//Write a C++ program that reads coefficients of quadratic equations and finds its roots
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    system("cls");
    float a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << " and " << root1 << endl;
    } 
    else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}

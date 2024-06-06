#include <iostream>
using namespace std;
typedef double (*FUNC)(double); // the type name "FUNC" takes a double as input and returns a double

double integrate (FUNC f, double a, double b) {// a and b are points
    double x = a, sum = 0, width = 0.0001;
    while (x < b) {
        sum += f(x) * width;
        x += width;
    }
    return sum;
}

double line(double x) {
    return x;
}
double square(double x) {
    return x * x;
}
double cube(double x) {
    return x * x * x;
}

int main() {
    cout << "The integral of f(x) = x between 1 and 5 is: " << integrate(line, 1, 5) << endl;
    cout << "The integral of f(x) = x^2 between 1 and 5 is: " << integrate(square, 1, 5) << endl;
    cout << "The integral of f(x) = x^3 between 1 and 5 is: " << integrate(cube, 1, 5) << endl;

    return 0;

}
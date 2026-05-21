#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char** argv) {
    double a = 1, b = -3, c = 2;
    
    if (argc == 4) {
        a = std::stod(argv[1]);
        b = std::stod(argv[2]);
        c = std::stod(argv[3]);
    } else {
        std::cout << "Using default values: a=1, b=-3, c=2" << std::endl;
    }
    
    double d = b * b - 4 * a * c;
    
    if (d < 0) {
        std::cout << "No real roots" << std::endl;
        return 1;
    }
    
    double x1 = (-b + std::sqrt(d)) / (2 * a);
    double x2 = (-b - std::sqrt(d)) / (2 * a);
    
    std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    return 0;
}

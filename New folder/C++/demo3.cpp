#include <cstdio>  // For printf and scanf

class Complex {
private:
    double real;
    double imaginary;

public:
    // Parameterless constructor
    Complex() : real(0.0), imaginary(0.0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Function to accept complex number input
    void Accept() {
        printf("Enter real part: ");
        scanf("%lf", &real);
        printf("Enter imaginary part: ");
        scanf("%lf", &imaginary);
    }

    // Function to print the complex number
    void Print() const {
        if (imaginary >= 0) {
            printf("%.2lf + %.2lfj\n", real, imaginary);
        } else {
            printf("%.2lf - %.2lfj\n", real, -imaginary);
        }
    }
};

int main() {
    Complex c1; // Create an object using the parameterless constructor

    // Accept complex number from user
    c1.Accept();

    // Print the complex number
    printf("The complex number is: ");
    c1.Print();
    return 0;
}

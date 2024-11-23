#include <iostream>
#include <string>
using namespace std;

struct Complex
{
    double real;
    double imag;

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}


    Complex operator+(const Complex& other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }


    Complex operator-(const Complex& other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }


    Complex operator*(const Complex& other) const
    {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }


    Complex operator/(const Complex& other) const
    {
        double denom = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denom,
            (imag * other.real - real * other.imag) / denom);
    }


    void print() const
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
//=================================
struct сar
{
    int length;
    int clearance;
    int engine_volume;
    int engine_force;
    int wheel_radius;
    string color;
    string type_box;


    void init(int len, int clear, int vol, int force, int rad, string col, string type)
    {
        length = len;
        clearance = clear;
        engine_volume = vol;
        engine_force = force;
        wheel_radius = rad;
        color = col;
        type_box = type;
    }

    void show()
    {
        cout << "len: " << length << endl;
        cout << "clear: " << clearance << endl;
        cout << "volume: " << engine_volume << endl;
        cout << "force " << engine_force << endl;
        cout << "radius: " << wheel_radius << endl;
        cout << "color: " << color << endl;
        cout << "type: " << type_box << endl;
    }

    int findCarByColor(const сar cars[], int size, const string& searchColor) {
        for (int i = 0; i < size; ++i) {
            if (cars[i].color == searchColor) {
                return i;
            }
        }
        return 0;
    }

    int findCarBylenght(const сar cars[], int size, const int& searchlenght) {
        for (int i = 0; i < size; ++i) {
            if (cars[i].length == searchlenght) {
                return i;
            }
        }
        return 0;
    }

    int findCarByclearance(const сar cars[], int size, const int& searchclearance) {
        for (int i = 0; i < size; ++i) {
            if (cars[i].clearance == searchclearance) {
                return i;
            }
        }
        return 0;
    }
    //.......etc
};
int main() {


}

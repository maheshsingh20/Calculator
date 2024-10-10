#include <cmath>
#include <corecrt_math_defines.h>
int modulus(int a, int b) {
    return a % b;
}

float percentage(int a, int b) {
    return (static_cast<float>(a) / b) * 100;
}

int quotient(int a, int b) {
    return a / b;
}

int square(int a) {
    return a * a;
}
float square_root(int a) {
    return sqrt(a);
}

int cube(int a) {
    return a * a * a;
}

float area_of_rectangle(float length, float width) {
    return length * width;
}

float area_of_circle(float radius) {
    return M_PI * radius * radius;
}

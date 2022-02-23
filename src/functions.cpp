#include "funcrions.h"

#include <cstdlib>
#include <ctime>
#include <cmath>

double drand(double min, double max) {
    return (double)rand() / RAND_MAX * (max - min) + min;
}

double dround(double val, int n) {
    double coef = pow(10, n);
    return round(val * coef) / coef;
}

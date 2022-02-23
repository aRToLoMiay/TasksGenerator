#include "funcrions.h"

#include <qdebug.h>

void genTasks(int n);
void getMultTasks(int n);

int main() {
    int n = 25;
    genTasks(n);
    //getMultTasks(n);
    return 0;
}

void genTasks(int n) {
    srand(static_cast<unsigned int>(time(0)));

    double* res = new double[n];
    
    double d = 1000;
    for (int i = 0; i < n; i++) {
        //int k = rand() * 3 / RAND_MAX + 1;
        int k = 3;
        double a = dround(drand(-d, d), k);
        double b = dround(drand(-d, d), k);
        int op = rand() * 2 / RAND_MAX + 1;

        if (op == 1) {
            res[i] = a + b;
            qDebug() << "1. $$" << a << " + " << b << "$$";
        }
        else {
            res[i] = a - b;
            qDebug() << "1. $$" << a << " - " << b << "$$";
        }
    }
    qDebug() << "=====";
    for (int i = 0; i < n; i++) {
        qDebug() << "1. " << res[i];
    }
}

void getMultTasks(int n) {
    srand(static_cast<unsigned int>(time(0)));

    double* res = new double[n];

    double d = 10;
    for (int i = 0; i < n; i++) {
        //int k = rand() * 3 / RAND_MAX + 1;
        int k = 1;
        double a = dround(drand(-d, d), k);
        double b = dround(drand(-d, d), k);
        //int op = rand() * 2 / RAND_MAX + 1;
        int op = 1;

        if (op == 1) {
            res[i] = a * b;
            qDebug() << "1. $$" << a << " \\cdot " << b << "$$";
        }
        else {
            res[i] = a;
            a = a * b;
            qDebug() << "1. $$" << a << " / " << b << "$$";
        }
    }
    qDebug() << "=====";
    for (int i = 0; i < n; i++) {
        qDebug() << "1. " << res[i];
    }
}

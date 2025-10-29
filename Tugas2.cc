#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

// Fungsi jarak
double distance(double x1, double y1, double x2, double y2) {
    double hasil;
    hasil = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return hasil;
}

// Fungsi radius
double radius(double x1, double y1, double x2, double y2) {
    double r;
    r = distance(x1, y1, x2, y2);
    return r;
}

// Fungsi keliling
double circumference(double r) {
    double keliling;
    keliling = 2 * PI * r;
    return keliling;
}

// Fungsi luas
double area(double r) {
    double luas;
    luas = PI * pow(r, 2);
    return luas;
}

int main() {
    double x1, y1, x2, y2; // Semua variabel double

    cout << "Masukkankoordinat pusat lingkaran:(x1 y1) (tanpa koma) ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2) (tanpa koma): ";
    cin >> x2 >> y2;

    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "\nHasil perhitungan:\n";
    cout << "Radius        : " << r << endl;
    cout << "Diameter      : " << d << endl;
    cout << "Keliling      : " << c << endl;
    cout << "Luas          : " << a << endl;

    return 0;
}

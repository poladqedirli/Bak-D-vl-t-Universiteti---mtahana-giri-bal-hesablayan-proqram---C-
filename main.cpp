#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Getting the daily grades (Gundelik qiymetler)
    cout << "Gundelik qiymetlerinizin sayini daxil edin:" << endl;
    int n;
    cin >> n;

    double gundelikqiymetler[n];
    double cem_g = 0;
    cout << "Gundelik qiymetlerinizi daxil edin:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> gundelikqiymetler[i];
    }

    for (int i = 0; i < n; i++) {
        cem_g = cem_g + gundelikqiymetler[i];
    }
    cem_g = cem_g / n;

    // Getting the kollekvium grades (Kollekvium qiymetler)
    cout << "Kollekvium qiymetlerinizin sayini daxil edin:" << endl;
    int m;
    cin >> m;

    double cem_k = 0;
    double kollekqiymetler[m];
    cout << "Kollekvium qiymetlerinizi daxil edin:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> kollekqiymetler[i];
    }

    for (int i = 0; i < m; i++) {
        cem_k = cem_k + kollekqiymetler[i];
    }
    cem_k = cem_k / m;

    // Calculating semester grade (Semestr bal)
    double semester_score = cem_g * 0.4 + cem_k * 0.6;
    semester_score = semester_score * 3;

    // Getting the Devamiyyet and Serbest İş grades
    cout << "Devamiyyet balini daxil edin:" << endl;
    int d;
    cin >> d;

    cout << "Serbest is balini daxil edin:" << endl;
    int s;
    cin >> s;

    // Adding the scores and rounding the result
    semester_score = semester_score + d + s;
    semester_score = round(semester_score);

    // Final output
    cout << "Sizin giris balinis=" << semester_score << endl;

    return 0;
}

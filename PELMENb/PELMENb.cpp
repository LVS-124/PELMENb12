#include <iostream>
using namespace std;

int main()
{
    float Qp = 0, Qt = 0, Qf = 0, qp = 0, qf = 0, qt = 0, M = 0, t = 0, af = 0, np = 0;
    cout << "Введите исходные данные:" << endl;
    cout << "qp = ";
    cin >> qp;
    cout << "qf = ";
    cin >> qf;
    cout << "qt = ";
    cin >> qt;
    cout << "M = ";
    cin >> M;
    cout << "t = ";
    cin >> t;
    cout << "af = ";
    cin >> af;
    np = Qp / qp;
    Qp = M / 2 * t;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a = (3.12 * 2.6) - (0.7 * 2.1) + (0.6 * 3 + 0.3) * 2.6;
    float b = (1.7 * 2.5) + (1.02 * 1.2) + (0.34 * 1.2);
    float c = ((1.7 - 0.34) * 2.6) + (1.7 * 2.4) - (1.2 * 0.34);
    cout << "Площадь 60*60 - " << a << "\n" << "Площадь 60*120 - " << b << "\n" << "Площадь 20*160 - " << c << endl;
    return 0;
}

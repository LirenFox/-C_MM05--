#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double edge, area;
    cin >> edge;
    cout<< fixed << setprecision(1)<< round(edge*edge*10)/10.0 << endl;//四捨五入至小數點第一位
    return 0;
}

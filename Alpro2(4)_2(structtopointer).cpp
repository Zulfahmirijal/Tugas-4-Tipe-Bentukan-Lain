#include<iostream>
using namespace std;
 
struct Jarak
{
    int meter;
    float kilometer;
};
 
int main()
{
    Jarak *ptr, d;
 
    ptr = &d;
    
    cout << "Meter: ";
    cin >> (*ptr).meter;
    cout << "Kilometer: ";
    cin >> (*ptr).kilometer;
 
    cout << "OUTPUT" << endl;
    cout << "Jarak = " << (*ptr).meter << " meter " << (*ptr).kilometer << " kilometer";
 
    return 0;
}

#include<iostream>
using namespace std;
 
int main()
{
    enum hari{SENIN,SELASA,RABU,KAMIS,JUMAT,SABTU,MINGGU};
    enum hari sekarang;
    sekarang = KAMIS;
    cout << "Hari Kamis adalah hari ke- " << sekarang+1;
}

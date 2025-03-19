#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string axlat;
    cout<<"Bizda mavjud qayta ishlanadigan chiqindilar: Shisha, plastik, qog'oz, alyuminiy banka!"<<endl;
    cout<<"Iltmos chiqindini skanerlang!"<<endl;
    cout<<"Chiqindini kiriting>>";
    getline(cin,axlat);
     transform(axlat.begin(), axlat.end(), axlat.begin(), ::tolower);
    if(axlat=="shisha")
    {
        cout<<"Siz mos chiqindi kiritdingiz! Marhamat ceshbek oling!"<<endl;
    }
    else if(axlat=="plastik")
    {
        cout<<"Siz mos chiqindi kiritdingiz! Marhamat ceshbek oling!"<<endl;
    }
     else if(axlat=="qog'oz")
    {
        cout<<"Siz mos chiqindi kiritdingiz! Marhamat ceshbek oling!"<<endl;
    }
     else if(axlat=="Alyuminiy banka")
    {
        cout<<"Siz mos chiqindi kiritdingiz! Marhamat ceshbek oling!"<<endl;
    }
    else 
    cout<<"Bu chiqindi qayta ishlanmaydi! Usti ochiq qutiga chiqindingizni tashlang!";
    return 0;
}
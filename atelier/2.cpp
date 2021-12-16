#include <iostream>
#include <string>
using namespace std;
void date( string &str)
{
    if (str.length() != 12)
        cout << "date n'est pas valide";
    else 
    {        if ( str.substr(0,2) == "01")
            cout << str.substr(1,1) << "er ";
        else
            cout << str.substr(1,1) << " ";
        if(str.substr(2,2) == "01")
            cout << "Janvier" << " ";
        if(str.substr(2,2) == "02")
            cout << "Fevrier" << " ";
        if(str.substr(2,2) == "03")
            cout << "Mars" << " ";
        if(str.substr(2,2) == "04")
        cout << "Avril" << " ";
        if(str.substr(2,2) == "05")
            cout << "Mai" << " ";
        if(str.substr(2,2) == "06")
            cout << "Juin" << " ";
        if(str.substr(2,2) == "07")
            cout << "Juillet" << " ";
        if(str.substr(2,2) == "08")
            cout << "Aout" << " ";
        if(str.substr(2,2) == "09")
            cout << "Septembre" << " ";
        if(str.substr(2,2) == "10")
            cout << "Octobre" << " ";
        if(str.substr(2,2) == "11")
            cout << "Novembre" << " ";
        if(str.substr(2,2) == "12")
        cout << "Decembre" << " ";
        cout << str.substr(4,4) << " ";
        cout << str.substr(8,2) << "H";
        cout << str.substr(10,2) << endl;

    }
}
int main()
{
    string str;
    cout << "Entrer la Date: ";
    cin>>str;
    date(str);
} 
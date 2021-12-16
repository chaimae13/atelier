#include <iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include<string>
int main()
{
    list<string> liste;
    liste.push_back("chaimae,bousaid,20ans");
    liste.push_back("aya,bousaid,16ans");
   liste.sort();
    cout<<"la liste triee:"<<endl;
    liste.sort();
    list <string> :: iterator itr;
    for(itr=liste.begin() ; itr != liste.end() ; ++itr)
    {
        cout << *itr << endl;
    }
    return 0;
} 

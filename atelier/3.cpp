#include <iostream>
#include <list>
using namespace std;
int main(){
      int x,y,z,k,h;
    cout<<"entrer les valeur :"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    cin>>k;
    cin>>h;
 list<int>T={x,y,z,k,h};
 T.sort();//fonction du trie
 list<int>::iterator it;
 cout<<"liste triee:"<<endl;//affichage
 for(it=T.begin();it!=T.end();it++)
    cout<<*it<<endl;
    }
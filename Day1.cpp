#include<iostream>
using namespace std;

int main()
{
   int p,q,r,s ;
   cout<<"Enter 4 integers: " ;
   cin>>p>>q>>r>>s ;

   if (p==q && r==s)
   cout<<"It is a rectangle"<<endl ;
   else if (p==s && r==q)
   cout<<"It is a rectangle"<<endl ;
   else if (p==r && s==q)
   cout<<"It is a rectangle"<<endl ;
   else
   cout<<"It is not a rectangle"<<endl ;

   
return 0;
}
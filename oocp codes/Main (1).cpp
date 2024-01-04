#include<iostream>
using namespace std;
int main()
{
float sum(float a,int b=10,int c=15,int d=20);
int a=2,b=3,c=4,d=5;

cout<<"\nsum="<<sum(0);
cout<<"\nsum="<<sum(a,b,c,d);
cout<<"\nsum="<<sum(a,b,c);
cout<<"\nsum="<<sum(a,b);
cout<<"\nsum="<<sum(a);
cout<<"\nsum="<<sum(b,c,d);

}
float sum(float i, int j, int k, int l)
{
return(i+j+k+l);
}
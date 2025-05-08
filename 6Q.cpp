#include<iostream> 
#include<cmath>

using namespace std; 
int main(){
double a,b,c;
   cout<<"enter the coefficient a b c";
   cin>>a>>b>>c;
   double dis=(b*b-4*a*c);
   if (dis>0){
   cout<<"real and distinct"<<endl;}
else  if (dis==0){
   cout<<"real and equal"<<endl;}
 else {
   cout<<"complex"<<endl;}
return 0;

}
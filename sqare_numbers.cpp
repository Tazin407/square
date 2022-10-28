#include<iostream>
#include<math.h>
using namespace std;

int main(){
int num1,num2, sq;

cout<<"Enter the lowest number"<<endl;
cin>>num1;
cout<<"Enter the highest number "<<endl;
cin>>num2;
for (int i = num1; i <=num2; i++)
{
      sq=sqrt(i);
      if (sq*sq==i)
      {
        cout<<i<<" "<<endl;
        
      }
      
}


return 0;
}

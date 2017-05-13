#include<iostream.h>
#include<conio.h>
int main()
{

 char a;
 int s;
 cout<<"Enter chracter a-z=";
 s=1;
 do
  {
    cin>>a;
    if(a=='m')
    {
     cout<<"\nCorrect";
     s=6;
    }
    else
    cout<<"\nTry agian=";
   }
   while(s<=5);
return 0;

}
#include<iostream>
using namespace std;
int main(){
int num,c=0;
do{
    cout<<"Enter any  number other than "<<c<<endl;
    cin>>num;
    c++;
    if(num==c-1)
        break;
}while(1);
/*if(num==5)
    cout<<"Hey! you weren't supposed to enter 5!";
if(c==10)
        cout<<"Wow, you're more patient then I am, you win.";*/
return 0;
}

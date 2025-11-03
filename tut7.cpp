//Write a program that takes an integer (1–7) as input and displays the corresponding day of the week.

          //Lab 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter n between 1-7 :\n";
    cin>>n;
    switch(n){
        case 1:
        cout<<"1=Monday\n";
        break;
        case 2:
        cout<<"2=Tuesday\n";
        break;
        case 3:
        cout<<"3=Wednesday\n";
        break;
        case 4:
        cout<<"4=Thursday\n";
        break;
        case 5:
        cout<<"5=Friday\n";
        break;
        case 6:
        cout<<"6=Saturday\n";
        break;
        case 7:
        cout<<"7=Sunday\n";
        break;
        default :
        cout<<"Invalid choice";
        break;
    }
    return 0;
}
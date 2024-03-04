#include<iostream>
using namespace std;
int main(){
    //THIS IS MY TASK 2 OF INTERNSHIP WITH CODSOFT ........A PROJECT FOR CALCULATOR .
    int n1,n2,choice;
    cout<<"enter number 1: ";
    cin>>n1;
    cout<<"enter number 2: ";
    cin>>n2;
    cout<<"choose::: \n1)'+'\n2)'-'\n3)'*'\n4)'/'\n5)'%'"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"The Sum of "<<n1<<" and "<<n2<<" is "<<n1+n2;
            break;
        
        case 2:
            cout<<"The difference of "<<n1<<" and "<<n2<<" is "<<n1-n2;
            break;
        
        case 3:
            cout<<"The Product of "<<n1<<" and "<<n2<<" is "<<n1*n2;
            break;
        
        case 4:
            cout<<"The quotient of "<<n1<<" and "<<n2<<" is "<<n1/n2;
            break;
        
        case 5:
            cout<<"The Remainder of "<<n1<<" and "<<n2<<" is "<<n1%n2;
            break;
        
        default:
            cout<<"!!!!  You   entered  invalid  operations  !!!!";
            break;
        
    }
    
}

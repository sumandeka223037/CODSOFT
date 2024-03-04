#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // THIS IS THE CODE FOR NUMBER GUESSING GAME BY SUMAN....


         srand(time(0));              //this basically starts generating random numbers each time we run the code
         int num=10;
         int getRand=rand() % num ;        //this is used to generate random numbers within a certain range
         int Guess=0;
         int Chances=0;
         while(Guess!=getRand){
              cout<<"Enter Your Guess = "<<endl;
              cin>>Guess;
            if(Guess==getRand){
                cout<<"!!! B R A V O !!! YOU GUESSED IT RIGHT..."<<endl;
                break;
            }
            else if(Guess<getRand){
                cout<<"!----LOWER THAN EXPECTED----!"<<endl;
                Chances++;
            }
            else{
                cout<<"!--HIGHER THAN EXPECTED--!"<<endl;
                Chances++;

            }
         }
  
    return 0; 
}
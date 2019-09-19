//
//  main.cpp
//  ATM Withdrawal
//
//  Created by Agni Earasi on 9/19/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#include <iostream>
using namespace std;
int myFunction();
void billCounter(int amount);

int main(int argc, const char * argv[]) {
    
    myFunction();
    
    return 0;
}
// Checks to see if requirements are met
int myFunction(){
    
    string option = "Y";
    int amount = 0;
    string error = "no";
// Where the user input is taken to see if they want to withdraw more
    while(option == "Y")
    {
// Input validity check
        do
        {
            cout<<"Enter an amount"<<endl;
            cin>>amount;
            if (amount <1) {
                cout<<"Please enter a number larger than 1."<<endl;
            }
            else if(amount >300){
                cout<<"You may not withdraw more than 300."<<endl;
            }
            else{
                billCounter(amount);
            }
        }
        while(amount >300 || amount<1);
        cout<<"Would you like to go again(Y or N)?"<<endl;
        cin>>option;
    }
    
    return 0;
}
// This is where the # of bills are counted
void billCounter(int amount){
    int one, five, ten, twenty, fifty;
        fifty= amount/50;
        amount = amount % 50;
        twenty= amount/20;
        amount = amount % 20;
        ten= amount/10;
        amount = amount % 10;
        five= amount/5;
        amount = amount % 5;
        one= amount/1;
        amount = amount % 1;
        if(fifty != 0){
            cout<<"You have "<<fifty<< " fifties"<<endl;
        }
        if(twenty != 0){
            cout<<"You have "<<twenty<<" twenties"<<endl;
        }
        if(ten != 0){
            cout<<"You have "<<ten<<" tens"<<endl;
        }
        if(five != 0){
            cout<<"You have "<<five<<" fives"<<endl;
        }
        if(one != 0){
            cout<<"You have "<<one<<" ones"<<endl;
        }
        
}







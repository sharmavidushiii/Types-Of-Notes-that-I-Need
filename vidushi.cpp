
#include<iostream>

using namespace std;
int main(){
    int amount;
    cout<<"Enter Your Money: "<<endl;
    cin>>amount;
    cout<<"Types Of Notes That I Need: "<<endl;
    while(amount>0){
        int noteType;
        if(amount>=1000){
            noteType = 1000;
        } else if(amount>=500){
            noteType = 500;
        }
        else if (amount>=100){
            noteType=100;
        }
        else if (amount>=50){
            noteType = 50;
        }
        else if(amount>=10){
            noteType = 10;
        }
        else (amount>=5){
            noteType = 5;
        } else {
            noteType = 1;
        }
        switch (noteType){
            case 1000: cout << "I need" << amount/1000 << "Thousand notes" << endl;
            amount %= 1000;
            break;
            case 500: cout << "I need" << amount/500 << "Five Hundred notes" << endl;
            amount %= 500;
            break;
            case 100: cout << "I need" << amount/100 << "Hundred notes" << endl;
            amount %= 100;
            break;
            case 50: cout << "I need" << amount/50 << "fifty notes" << endl;
            amount %= 50;
            break;
            case 10: cout << "I need" << amount/10 << "Ten notes" << endl;
            amount %= 10;
            break;
            case 5: cout << "I need" << amount/5 << "Five notes" << endl;
            amount %= 5;
            break;
            case 1: cout << "I need" << amount/1 << "one coins" << endl;
            amount %= 1;
            break;
        }
    }
    return 0;
}
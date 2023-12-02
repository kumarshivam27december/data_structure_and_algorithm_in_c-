#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <string.h>
#include <cstring>
#include <stack>
#include <math.h>
#include <bits/stdc++.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main(){


    HANDLE console_color; 
    
    console_color = GetStdHandle( STD_OUTPUT_HANDLE); 


SetConsoleTextAttribute(console_color, 1); 


    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;


 SetConsoleTextAttribute(console_color, 2); 
    cout<<"---------------------------"<<endl;
    cout<<"WELCOME TO A WONDERFUL GAME"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"WHO WANTS TO BE MILLIONARE "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"---------------------------"<<endl;

 SetConsoleTextAttribute(console_color, 3); 
    cout<<" You need to know the rule "<<endl;
    cout<<"First Rule :"<<endl;
    cout<<"You must follow all the rule strictly"<<endl;
    cout<<"Second rule:"<<endl;
    cout<<"You have to give answer in limited time"<<"\n";
    cout<<"Third rule: "<<endl;
    cout<<"Any choosing of another options will bbe treated as malpractice and you will be exiting the game\n ";

    cout<<"You will be given 7 questions and you have to answer it"<<"\n";
    cout<<"1qn->$1000\n2qn->$5000\n3qn->$20,000\n4qn->$50,000\n5qn->$100,000\n6qn->$500,000\n7qn->1,000,000\n";
    cout<<endl;
    cout<<"You have option to leave the game in the middle on question 3rd,5th and 6th"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"---------------------------"<<endl;
    

 SetConsoleTextAttribute(console_color, 4); 


    cout<<"You will be given assistance or lifeline"<<"\n";
    cout<<"1-> 50:50 (Two of the options will be eliminated)"<<endl; 
    cout<<"2->phone your friend(you can ask your friend answer)"<<endl;
    cout<<"3->replace the question(Another question will be provided)"<<endl;
    cout<<"4->Exit the game with 3/4 of amount(75 % of the amount)"<<endl;


 SetConsoleTextAttribute(console_color, 5); 
    cout<<"---------------------------"<<endl;
    cout<<"---------------------------"<<endl;

    cout<<"LETS BEGIN THE GAME"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
 SetConsoleTextAttribute(console_color, 6); 
    cout<<"Do you want start the game \nif yes press Y or any other key to exit\n";
    char start;cin>>start;
    if(start=='Y' || start=='y'){
         SetConsoleTextAttribute(console_color, 7); 
         cout<<"Starting the game\n";
         cout<<"LEVEL 1\n";
         int level = 1;
         int initial_amount = 0;
         cout<<"Question no-1"<<endl; 
         cout<<"who was the founder of c language ?\n";
         cout<<"A)Dennis Ritchie\n";
         cout<<"B)Bill gates\n";
         cout<<"C)Guido van Rossum\n";
         cout<<"D)Sam Altman\n";
         cout<<"choose your answer (A,B,C,D)\n";
         cout<<"IF YOU WANT HELP PRESS H\n";

         char qn1;cin>>qn1;

         
         if(qn1 == 'A' || qn1 == 'a'){
            cout<<"You are correct\n";
            initial_amount = 1000;
            cout<<"You have won "<<initial_amount<<endl;
         }else if(qn1 == 'H' || qn1 == 'h'){
            cout<<"So you need help\n";
            cout<<"Alright! \n";
            cout<<"Choose\n1-> for 50:50\n2-> for phone your friend\n3->for question swap\n";
            int lifeline ;cin>>lifeline;
            switch (lifeline)
            {
            case 1:
               cout<<"The incorrect options are \nBill gates\nSam Altman\n";
               break;

            case 2:
               cout<<"The answer a/c to your friend is \nA)Dennis Ritchie\n";
               break;
            case 3:
               cout<<"replacing the question\n";
               cout<<"who was the founder of window operating system ?\n";
               cout<<"A)Dennis Ritchie\n";
               cout<<"B)Bill gates\n";
               cout<<"C)Guido van Rossum\n";
               cout<<"D)Sam Altman\n";
               cout<<"choose your answer (A,B,C,D)\n";

               char k;cin>>k;
               if(k=='B' || k=='b'){
                  cout<<"Correct you can go head"<<endl;
                  initial_amount = 1000;
                  cout<<"You have won "<<initial_amount<<endl;

               }else{
                  cout<<"Oooo ! you are wrong !"<<endl;
                  cout<<"Your total amount is $0"<<endl;
                  cout<<"Exiting the game"<<endl;
                  return 0;
               }
               break;
            
            default:
               cout<<"You have choosen the wrong option\n";
               cout<<"Any such things could be appear to us as malpractise\n";
               cout<<"Exiting the game\n";
               return 0;
               break;
            }
         }
        //code here

    }else{
         SetConsoleTextAttribute(console_color, 8); 
        cout<<"Thanks for you response\nExiting the game\n";
        return 1;
    }

    return 0;
}
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
    cout<<"Any choosing of another options will be treated as malpractice and you will be exiting the game\n ";

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
            cout<<"LEVEL 2"<<endl;
            cout<<"Congrats once again\n";

            cout<<"So, here we go with round 2\n";
            cout<<"What is the curreny of china?\n";
            cout<<"A)Yen\n";
            cout<<"B)Chinese dollar\n";
            cout<<"C)Ruble\n";
            cout<<"D)Yuan\n";
            cout<<"choose your answer (A,B,C,D)\n";
            cout<<"IF YOU WANT HELP PRESS H\n";
            char f;cin>>f;
            if(f=='D'||f=='d'){

               cout<<"You are correct\n";
               initial_amount = 5000;
               cout<<"You have won "<<initial_amount<<endl;
               cout<<"LEVEL 3"<<endl;
               cout<<"Congrats once again\n";

               cout<<"So, here we go with round 3\n";
               cout<<"In whose era of election lal bahdur shashtri was killed?\n";
               cout<<"A)sonia gandhi\n";
               cout<<"B)rajiv gandhi\n";
               cout<<"C)rahul gandhi\n";
               cout<<"D)indira gandhi\n";
               cout<<"choose your answer (A,B,C,D)\n";
               cout<<"IF YOU WANT HELP PRESS H\n";

               //code here
            }else if(f=='H'||f=='h'){
                  //applying switch case here 
                   cout<<"So you need help\n";
                   cout<<"Alright! \n";
                   cout<<"Choose\n1-> for 50:50\n2-> for phone your friend\n3->for question swap\n";
                   int lifeline ;cin>>lifeline;
                  switch (lifeline)
                  {
                     case 1:
                     cout<<"The incorrect options are \nRubles \nchinese dollar\n";
                     break;

                  case 2:
                     cout<<"The answer a/c to your friend is \nD)Yuan\n";
                     break;
                  case 3:
                     cout<<"replacing the question\n";
                     cout<<"which fish does not lay eggs?\n";
                     cout<<"A)gold fish\n";
                     cout<<"B)dolphin\n";
                     cout<<"C)shark\n";
                     cout<<"D)tuna fish\n";
                     cout<<"choose your answer (A,B,C,D)\n";

                     char k;cin>>k;
                     if(k=='B' || k=='b'){
                        cout<<"Correct you can go head"<<endl;
                        initial_amount = 5000;
                        cout<<"You have won "<<initial_amount<<endl;


                        cout<<"LEVEL 3"<<endl;
                        cout<<"Congrats once again"<<endl;
                        //continue here



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


            }else{
                  cout<<"Oooo ! you are wrong !"<<endl;
                  cout<<"The correct option was D Yuan is the currency of china\n";
                  cout<<"Your total amount is $0"<<endl;
                  cout<<"Thanks for the game \nMeet you in the next game\n";
                  cout<<"Exiting the game"<<endl;
                  return 0;

            }
            

            
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


                  cout<<"LEVEL 2"<<endl;
                  cout<<"Congrats once again"<<endl;
                  //continue here
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




/*

Certainly! Here are 20 multiple-choice questions (MCQs) with four options each, covering technology, history, geography, biology, and India, along with the correct answers:

Technology:
Question 1:
What does "HTML" stand for in web development?
A. HyperText Markup Language
B. High-Level Text Manipulation
C. Hyperlink and Text Management Language
D. Human Touch Manipulation Language
Answer: A

Question 2:
Which programming language is used for creating dynamic web pages?
A. Java
B. Python
C. JavaScript
D. C++
Answer: C

History:
Question 3:
Who was the famous queen of ancient Egypt known for her beauty and intelligence?
A. Cleopatra
B. Nefertiti
C. Hatshepsut
D. Isis
Answer: A

Question 4:
Which war is often referred to as the "War of Independence" in the United States?
A. World War I
B. American Civil War
C. American Revolutionary War
D. Vietnam War
Answer: C

Geography:
Question 5:
Which continent is known as the "Land Down Under"?
A. Africa
B. Europe
C. Australia
D. South America
Answer: C

Question 6:
What is the capital city of Japan?
A. Beijing
B. Seoul
C. Tokyo
D. Bangkok
Answer: C

Biology:
Question 7:
Which organelle is responsible for producing energy in a cell?
A. Nucleus
B. Ribosome
C. Mitochondrion
D. Endoplasmic Reticulum
Answer: C

Question 8:
What is the largest organ in the human body?
A. Liver
B. Heart
C. Skin
D. Brain
Answer: C

India:
Question 9:
Who is known as the "Iron Man of India"?
A. Jawaharlal Nehru
B. Sardar Vallabhbhai Patel
C. Subhas Chandra Bose
D. Mahatma Gandhi
Answer: B

Question 10:
Which river is considered the holiest in Hinduism?
A. Ganges
B. Yamuna
C. Brahmaputra
D. Godavari
Answer: A

Technology:
Question 11:
What does VPN stand for in the context of computer networks?
A. Virtual Private Network
B. Very Personal Network
C. Visual Processing Node
D. Voice and Phone Network
Answer: A

Question 12:
Which of the following is an example of a social media platform?
A. Microsoft Excel
B. Instagram
C. Adobe Photoshop
D. Google Chrome
Answer: B

History:
Question 13:
Who was the famous playwright known for works like "Romeo and Juliet" and "Hamlet"?
A. William Wordsworth
B. William Shakespeare
C. Jane Austen
D. Charles Dickens
Answer: B

Question 14:
In which century did the Industrial Revolution begin?
A. 17th
B. 18th
C. 19th
D. 20th
Answer: B

Geography:
Question 15:
Which ocean is the largest by surface area?
A. Atlantic Ocean
B. Indian Ocean
C. Southern Ocean
D. Pacific Ocean
Answer: D

Question 16:
Which mountain range separates Europe from Asia?
A. Rocky Mountains
B. Himalayas
C. Ural Mountains
D. Alps
Answer: C

Biology:
Question 17:
What is the primary function of the respiratory system?
A. Circulating blood
B. Producing hormones
C. Breathing and gas exchange
D. Digesting food
Answer: C

Question 18:
Which gas do plants primarily absorb during photosynthesis?
A. Oxygen
B. Carbon Dioxide
C. Nitrogen
D. Hydrogen
Answer: B

India:
Question 19:
Who was the first Prime Minister of India?
A. Jawaharlal Nehru
B. Indira Gandhi
C. Rajiv Gandhi
D. Narendra Modi
Answer: A

Question 20:
Which festival is celebrated with the flying of kites in India?
A. Holi
B. Diwali
C. Makar Sankranti
D. Navratri
Answer: C

*/
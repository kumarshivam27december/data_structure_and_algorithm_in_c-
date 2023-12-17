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

   int ff = 0;
   int pyf = 0;
   int rq=0;

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
         //level1

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
         SetConsoleTextAttribute(console_color, 10); 

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

               SetConsoleTextAttribute(console_color, 5); 

               cout<<"You are correct\n";
               cout<<"You have won $5000 "<<endl;
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
               char an;cin>>an;
               if( an =='D'||an=='d'){
                   SetConsoleTextAttribute(console_color, 12); 

                  cout<<"You are correct \n You have won $20,000\n";
                  cout<<"If you want to continue this game press 'Y' or 'y'\n else select any other key to exit the game\n";
                  char m;cin>>m;
                  if(m=='Y'||m=='y'){
                     //continue the game
                     SetConsoleTextAttribute(console_color, 2);
                     cout<<"Welcome to the LEVEL 4"<<endl;
                     cout<<"What is the largest organ in the human body?\nA. Liver\nB. Heart\nC. Skin\nD. Brain\n";
                     char ans1 ;cin>>ans1;
                     if(ans1=='c'||ans1=='C'){
                        SetConsoleTextAttribute(console_color, 13); 

                        cout<<"You are correct \n";
                        cout<<"You have won $50,000\n";
                        cout<<"Do you want to continue press 'Y' or 'y' else any key to exit\n";
                        char exit1;cin>>exit1;
                        if(exit1=='Y' || exit1=='y'){
                           //continue the next level 
                           SetConsoleTextAttribute(console_color, 14); 

                           cout<<"So , you wanted to continue this game\n";
                           cout<<"if, so then continue this \n";
                           cout<<"Level  5\n";
                           cout<<"Here is the next question \n";
                           cout<<"Which programming language is used for creating dynamic web pages?\nA. Java\nB. Python\nC. JavaScript\nD. C++\n";
                           char ans2;cin>>ans2;
                           if(ans2=='c' ||ans2=='C'){
                              SetConsoleTextAttribute(console_color, 6); 

                              cout<<"Hurray! you are correct\n ";
                              cout<<"You have won $100,000\n";
                              cout<<"You are playing really well \nif you want to continue the game press y or Y else press any other key to exit the game\n";
                              char exit2;cin>>exit2;
                              if(exit2=='Y'||exit2=='y'){
                                 
                                 cout<<"You have to continue the game\n";
                                 cout<<"Level 6\n";
                                 SetConsoleTextAttribute(console_color, 2);
                                 cout<<"Here is the next question \n";
                                 cout<<"Who is known as the 'Iron Man of India?\nA. Jawaharlal Nehru\nB. Sardar Vallabhbhai Patel\nC. Subhas Chandra Bose\nD. Mahatma Gandhi\n";
                                 char ans3;cin>>ans3;
                                 if (ans3=='B' ||ans3=='b')
                                 {
                                    cout<<"You are correct\n";
                                    cout<<"Congrats you have won $500,000\n";
                                    cout<<"You are doing preety well \n";
                                    cout<<"Press Y or y to continue or any other key to exit\n";
                                    char exit3;
                                    cin>>exit3;
                                    if(exit3=='Y'||exit3=='y'){
                                       cout<<"So , you are ready for the last level\n ";
                                       cout<<"Again if  you loose this qn you will loose all the money that you have won till her\n";
                                       cout<<"Are you sure  to take the risk\n";
                                       cout<<"Press p or P if you are ready\n";
                                       cout<<"else press any other key to exit the game\n";
                                       char exit4;cin>>exit4;
                                       if(exit4=='P' ||exit4=='p'){
                                          cout<<"As you are sure about the game\n";
                                          cout<<"LEVEL 7\n";
                                          cout<<"So here is the question\n";
                                          cout<<"Which organelle is responsible for producing energy in a cell?\nA. Nucleus\nB. Ribosome\nC. Mitochondrion\nD. Endoplasmic Reticulum";
                                          cout<<"\nThis is really a tough one\n";
                                          cout<<"press H for help\n";

                                          char ans4;cin>>ans4;
                                          if(ans4=='c' ||ans4=='C'){
                                              cout<<"Wooooooooooo ! you are correct\n";
                                              cout<<"Thats is an absolutely correct answer\n";
                                              cout<<"And you have won a million dollar\n";
                                              cout<<"Congrats you have nailed it\n";
                                              cout<<"Thanks for joining see you again\n";
                                              cout<<"Exiting the game";
                                              return 0;
                                          }else if(ans4=='H' ||ans4=='h'){

                                             //lifeline qn


                                          }else{
                                                cout<<"you are wrong";
                                                cout<<"Well played";
                                                cout<<"better luck next time";
                                                cout<<"Exiting the game";
                                                return 0;                                        
                                          }
                                       }
                                    }
                                 }
                                 

                                 //continue the game

                              }else{
                                          SetConsoleTextAttribute(console_color, 15);
                                          cout<<"So you wanted to quiet the game \nso the total amount you won is $100,000\n";
                                          cout<<"Hope you enjoyed the game\n";
                                          cout<<"Thanks for all of your love and support\n";
                                          return 0;
                              }
                           }


                        }else{
                           SetConsoleTextAttribute(console_color, 15);
                           cout<<"So you wanted to quiet the game \nso the total amount you won is $50,000\n";
                           cout<<"Hope you enjoyed the game\n";
                           cout<<"Thanks for all of your love and support\n";
                           return 0;
                        }
                     }

                  }else{
                     SetConsoleTextAttribute(console_color, 16);
                     cout<<"So you wanted to quiet the game \nso the total amount you won is $20,000\n";
                     cout<<"Hope you enjoyed the game\n";
                     cout<<"Thanks for all of your love and support\n";
                     return 0;
                  }
               }

               //code here
            }else if(f=='H'||f=='h'){
                  //applying switch case here 
                  SetConsoleTextAttribute(console_color, 17);
                   cout<<"So you need help\n";
                   cout<<"Alright! \n";
                   cout<<"Choose\n1-> for 50:50\n2-> for phone your friend\n3->for question swap\n";
                   int lifeline ;cin>>lifeline;
                  switch (lifeline)
                  {
                     case 1:
                     cout<<"The incorrect options are \nRubles \nchinese dollar\n";
                     ff++;
                     break;

                  case 2:
                     cout<<"The answer a/c to your friend is \nD)Yuan\n";
                     pyf++;
                     break;
                  case 3:
                     cout<<"replacing the question\n";
                     SetConsoleTextAttribute(console_color, 18);
                     rq++;
                     cout<<"which fish does not lay eggs?\n";
                     cout<<"A)gold fish\n";
                     cout<<"B)dolphin\n";
                     cout<<"C)shark\n";
                     cout<<"D)tuna fish\n";
                     cout<<"choose your answer (A,B,C,D)\n";

                     char k;cin>>k;
                     if(k=='B' || k=='b'){
                        SetConsoleTextAttribute(console_color, 5);
                        cout<<"Correct you can go head"<<endl;
                        initial_amount = 5000;
                        cout<<"You have won "<<initial_amount<<endl;


                        cout<<"LEVEL 3"<<endl;
                        cout<<"Congrats once again"<<endl;
                        cout<<"So the next question is\n";
                        cout<<"Who was the famous queen of ancient Egypt known for her beauty and intelligence?\nA. Cleopatra\nB. Nefertiti\nC. Hatshepsut\nD. Isis\n";
                        char ans;cin>>ans;
                        if(ans=='A'||ans =='a'){
                           SetConsoleTextAttribute(console_color, 6);
                           cout<<"You are correct\n";
                           initial_amount = 1000;
                           cout<<"You have won "<<initial_amount<<endl;
                           cout<<"LEVEL 2"<<endl;
                           cout<<"Congrats once again\n";
                        }
                        //continue here
                        //add questions answer




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
                  SetConsoleTextAttribute(console_color, 4);
                  cout<<"Oooo ! you are wrong !"<<endl;
                  cout<<"The correct option was D Yuan is the currency of china\n";
                  cout<<"Your total amount is $0"<<endl;
                  cout<<"Thanks for the game \nMeet you in the next game\n";
                  cout<<"Exiting the game"<<endl;
                  return 0;

            }
            

            
         }else if(qn1 == 'H' || qn1 == 'h'){
            SetConsoleTextAttribute(console_color, 3);
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
               cout<<"Do you want to go with friend";
               cout<<"If yes press A or a else choose your option";
               char ansh1 ;cin>>ansh1;
               if (ansh1=='A' ||ansh1=='a')
               {
                  cout<<"You are correct\nYou have won";
               }
               
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
                 

                  cout<<"So, here we go with round 2\n";
                  cout<<"What is the curreny of china?\n";
                  cout<<"A)Yen\n";
                  cout<<"B)Chinese dollar\n";
                  cout<<"C)Ruble\n";
                  cout<<"D)Yuan\n";
                  cout<<"choose your answer (A,B,C,D)\n";
                  cout<<"IF YOU WANT HELP PRESS H\n";

                  char ans12;cin>>ans12;
                  if(ans12=='d'||ans12=='D'){
                     cout<<"Hurray! you are correct";
                     initial_amount = 5000;
                     cout<<"You have won $ "<<initial_amount<<endl;
                     cout<<"LEVEL 3"<<endl;
                     cout<<"So the next question worth $20,000\n play with caution";
                     cout<<"So here is the next question\n";
                     cout<<"Which river is considered the holiest in Hinduism?\nA. Ganges\nB. Yamuna\nC. Brahmaputra \nD. Godavari ";
                     char anslevel3 ;cin>>anslevel3;
                     cout<<"I don't think you will require help for this questions";
                     if (anslevel3=='A' || anslevel3=='a')
                     {
                        cout<<"Yes  you are correct\n the correct option is a";
                        cout<<"You have won $20,000";
                        cout<<"press Y or y to continue the games else any other key to exit the game\n";
                     }
                     






                  }else if(ans12=='h' ||ans12=='H'){
                     cout<<"You need help Alright then";
                     cout<<"Choose\n1-> for 50:50\n2-> for phone your friend\n3->for question swap\n";
                     char option5 ;cin>>option5;
                     if (ff>=1)
                     {
                        cout<<"cannot use this lifeline you have already used it"<<endl;

                     }else if(pyf>=1){
                        cout<<"You cannot phone your friend as you have already used it"<<endl;
                     }else if(rq>=1){
                        cout<<"You cannot use this option as you have already used it"<<endl;
                     }

                     else if(ff==0){
                        if (option5=='1')
                        {
                        cout<<"You have choosen 50-50 options so incorrect options are";
                        cout<<"Chinese dollar and Ruble";
                        //continue code
                        cout<<"Now choose an option";
                        char option6;cin>>option6;
                        if (option6=='d' ||option6=='D')
                        {
                           cout<<"yupp you are correct";
                           cout<<"You have won $ 5000";

                           cout<<"Do you want to continue";
                           cout<<"press y or Y to continue or any other key to exit";
                           char exit5;
                           cin>>exit5;
                           if (exit5=='Y' ||exit5=='y')
                           {
                              cout<<"So,as you have wished \n continuing the game\n";
                              //continue code

                           }
                           
                        }
                        
                        }
                        
                       
                     }else if(pyf==0){

                        if(option5=='2'){
                        cout<<"According to your friend the correct options is option D";
                        //continue code 
                        }
                     }else{
                        cout<<"You have not choosen any correct code option";
                     }
                     

                     
                     

                  }else{
                     cout<<"You are wrong";
                     cout<<"The correct answer is "<<ans12<<"i.e Yuan"<<endl;
                     cout<<"See you sooner";
                     cout<<"goodbye";
                  }


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
         SetConsoleTextAttribute(console_color, 2); 
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
Answer: C


India:
Question 9:

Answer: B

Question 10:


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
#include <bits/stdc++.h>
using namespace std;
int getdays(string a,string b){
    string mon1 = "";
    string yea1 = "";
    string mon2 = "";
    string yea2 = "";   
    for(int i = 0;i<2;i++){
            mon1+=a[i];
    }
    int month1 = stoi(mon1);
    for(int i = 0;i<2;i++){
            mon2+=b[i];
    }
    int month2 = stoi(mon2);
    cout<<endl;
}
int main(){
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string str1 = "02-2002";
    string str2 = "11-2013";
    cout<<"total no of days between "<<str1<<" "<<str2<<" is "<<getdays(str1,str2)<<endl;
    getdays(str1,str2);
    return 0;
}
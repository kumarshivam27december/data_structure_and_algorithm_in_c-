#include <bits/stdc++.h>
using namespace std;
bool isanagram(string s,string t){
    if(s.size()!=t.size()) return false;

    int arr[26] = {0};
    for(int i = 0;i<s.size();i++){
        
    }
}
int main(){
    string s = "anagram";
    string t = "graaamn";
    if(isanagram(s,t)){
        cout<<"It is anagram";
    }else{
        cout<<"It is not anagram";
    }
    return 0;
}
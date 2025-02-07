#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void replace_vowel(string word,int size){
    for(int i = 0; i < size ;i++){
       if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
    word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
{
            word[i]='*';
        }
       
    }
    cout<<endl<<word;
}
      
int main(){
    string word;
    string reverse_word;
    cout<<"enter string: ";
    cin>>word;
    int length=word.size();
    reverse_word=word;
    reverse(reverse_word.begin(),reverse_word.end());
    if(word==reverse_word) cout<<"palindrome";
    else cout<<"not palindrome";
    //not done frequency ques
    replace_vowel(word,word.size());
}
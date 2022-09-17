#include<iostream>

using namespace std;

int reverse(string word){           // Function defining.
    char temp;                      // for storing the first index for temporary
    string befr_reverse=word;
    for (int i = 0; i < word.size()/2; i++)
    {
        temp=word[i];
        word[i]=word[word.size()-i-1];          // As we assign the 1st letter to the temp, no we can easily assing the last index to the first one.
        word[word.size()-i-1]=temp;
    }
    
    

    if(befr_reverse==word){
        cout<< "The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not palindrome";
    }
}

int main(){
    string word;
    cout<<"Enter words :";
    getline(cin,word);

    reverse(word);
}
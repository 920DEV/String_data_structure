#include<iostream>

using namespace std;

int count_words(string words){
    int count =0;
    for (int  i = 0; i < words.size(); i++)
    {
        if (words[i]==' ' && words[i-1]!= ' ')      // this will count all the spaces , through this we get to know the no of words 
        {
            count++;
        }
        
    }
    cout<<"The number of words present in the array is : "<<count+1;
    

}
int main(){
    string word;
    cout<<"Enter any word: ";
    getline(cin,word);
    count_words(word);
}
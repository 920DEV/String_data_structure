#include<iostream>

using namespace std;

int compare(string words, string words2){
int i,j;
for ( i = 0,j=0; i<words.size(),j<words2.size(); i++,j++)
{
    if (words[i]!=words2[j])
    {
         if (words[i]>words[2])
        {
            cout<<words[i]<<" is greater than "<< words[j]<<endl; 
        }
        else{
            cout<<words[j]<<" is greater than "<< words[i] <<endl;
        }
    }
    else{
        if (words[i]==words[j])
        {
            cout<<"Both the strings are equal"<<endl;
        }
       
        
        
    }
    
}


     
}

int main(){
    string w1,w2;
    cout<< "Enter any two words: "<<endl;
    getline(cin,w1);
    getline(cin,w2);

    compare(w1,w2);

}
#include<iostream>

using namespace std;
  // for checking the dulicates the list should be sorted. 
  int duplicate_strings(string words){
    int count=0;
    char last_duplicate;
    for (int i = 0; i < words.size(); i++)
    {
        if(words[i]==words[i+1] && words[i] !=last_duplicate){
            last_duplicate=words[i];
          count++;
        }
    }
    return count;
    
  }
  int main(){
    string wrd;
    cout<<"Enter words:";
    getline(cin,wrd);

    cout<< duplicate_strings(wrd);

  // this is the only thing so please be usre of it another wis d
  }
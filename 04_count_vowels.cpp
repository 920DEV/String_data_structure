#include<iostream>

using namespace std;

int count_vow_const(string sntnc){
    int vowels=0;
    int consonants=0;
    for (int i = 0; i < sntnc.size(); i++)
    {
        if (sntnc[i]=='a'|| sntnc[i]=='e'|| sntnc[i]=='i'|| sntnc[i]=='o'|| sntnc[i]=='u'|| sntnc[i]=='A'||sntnc[i]=='E'|| sntnc[i]=='I' || sntnc[i]=='O' || sntnc[i]=='U')
        {
        vowels++;
        }
        else if (sntnc[i]>=65 && sntnc[i]<=90 || sntnc[i]>=97&&sntnc[i]<=122)
        {
            consonants++;
        }
        
    }
    cout<<"The no of vowels present in the list are:"<< vowels<<"\tand the number of constant present in the list are:"<<consonants<<endl;

}
int main(){
    string word;
    cout<<"Enter any word: ";
    getline(cin,word);
    count_vow_const(word);
}
#include <stdio.h>
#include <stdlib.h>

void letter_freq(const char word[], int freq[]){
    for(int i=0;word[i]!='\0';i++){
        int z=0;
        for(int j=65;j<90;j++){
            int n =j+32;
            if(word[i]==(char)j){
                freq[z]+=1;
            }
            else if(word[i]==(char)n){
                freq[z]+=1;
            }
            z++;
        }
    }
    for(int i=0;i<26;i++){
        printf("The count of '%c' and '%c' is %d\n",i+65 ,i+97, freq[i]);
    }
}
int main(){
    char myWord[]={"Programming"};
    int freq[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    letter_freq(myWord, freq);
    return 0;
}

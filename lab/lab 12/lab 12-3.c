//Write C Program to Count the Number of Vowels, Consonants and so on
#include <stdio.h>
int main(){
    char str1[20];
    char strv[20] = {'a','e','i','o','u','A','E','I','U'};
    printf("write something :");
    gets(str1);
    int d=0,vow=0,cons=0,space=0,i,j,k;
    for(i=0; str1[i] != '\0'; i++){
        if(str1[i] >= 48 && str1[i] <= 57){
            d++;
        }   
    }
    for(j=0; str1[j] != '\0'; j++){
        for(k=0; k<9; k++){
                    if(str1[j] == strv[k]){
                        vow++;
                        break;
                    }
        }
    }
    for(k=0; str1[k] != '\0'; k++){
        if(str1[k] == ' '){
            space++;
        }
    }   
    for(i=0; str1[i] != '\0'; i++)
    {
        if((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z'))
        {
            int flag = 1;
            for(j=0; j<9; j++)
            {
                if(str1[i] == strv[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==1)
            {
                cons++;
            }
        }
    }
    printf("\nVowels : %d" ,vow);
    printf("\nConsonants : %d" ,cons);
    printf("\nDigits : %d" ,d);
    printf("\nWhite space : %d" ,space);

    return 0;
}


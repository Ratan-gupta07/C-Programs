#include<stdio.h>
void namaste(); //function
void bonjour();

int main(){
    printf("Enter I for India and f for french  :");     //function call
    char ch;
    scanf("%ch",&ch);
    if(ch == 'i'){
        namaste();
        }
    else {
        bonjour();
    }
    return 0;
}

void namaste(){                 //function defination
    printf("Namaste");
}
 void bonjour(){
    printf("bonjour");
 }

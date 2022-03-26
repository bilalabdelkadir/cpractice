#include <stdio.h>

int calcAge(int birthyear){
    int age = 2022 - birthyear;
    return age;
}
void name(char fname[], char lname[]){
    printf("hello %s %s it is nice to meet you\n",fname,lname);
}

int main(){
    char fname[14];
    char lname[14];
    int birthyear;
    printf("what is your First Name?\n");
    scanf("%s",&fname);
    printf("what is your Last Name?\n");
    scanf("%s",&lname);
    printf("what is your birthyear?\n");
    scanf("%d",&birthyear);
    name(fname,lname);

    int age = calcAge(birthyear);
    printf("you are %d years old.\n",age);
    return 0;
}

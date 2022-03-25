#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

/*
    printf("i like c\n");
    printf("more than c++\n");
    return 0;
    
//    printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
//    printf("\"I like pizaa\" - Abrham Lincon");

printf("I am %d years old \nand %dcm tall\nwih a grade of %c\nand with gpa of %f\nand my name is %s .",age,height,grade,gpa,name);

int age = 22;
float gpa = 3.656828020237393944;
double gba1 = 3.656828020237393944;
int height = 168;
char grade = 'c';
char name[] = "bilal";
bool e = true; 
char f = 34;

printf("%0.15f\n",gpa);
printf("%0.15lf\n",gba1);
printf("%d\n", e);
printf("%c\n",f);
printf("%d\n",f);


float item1 = 20.994448;
float item2 = 88.76;
float item3 = 120.8;

printf("Item1:%-8.2f\n",item1);
printf("Item2:%-8.2f\n",item2);
printf("Item2:%8.2f\n",item2);
 

char name[25];
int age;

printf("what is your name?\n");
// scanf("%s",&name);
fgets(name,25,stdin);
printf("how old are you?\n");
scanf("%d",&age);
printf("your name is %s and ",name);
printf("you are %d years old ",age);

char fname[25];
char lname[25];
int age;

printf("what is you Name?\n");
scanf("%s",&fname);
printf("what is you Last Name?\n");
scanf("%s",&lname);
printf("How old are you?\n");
scanf("%d",&age);

if(age >= 18 && age <=79){
  printf("Dear %s %s You can Apply for Credit Card because your age is %d.",fname,lname,age);
}else if(age < 18 && age > 1){
 printf("Dear %s %s You can't Apply for Credit Card becuase your age is %d.",fname,lname,age);
}else if(age > 80){
    printf("Dear %s %s You can't Apply for Credit Card becuase your are over the age limit.",fname,lname,age);
}else{
    printf("please Enter a valid age\n");
}

*/
char fname[25];
char lname[25];
int age;
int score;
char grade;

printf("what is you Name?\n");
scanf("%s",&fname);
printf("what is you Last Name?\n");
scanf("%s",&lname);
printf("How old are you?\n");
scanf("%d",&age);
printf("What is your score from 100?\n");
scanf("%d",&score);

if (score >= 88 && score <= 100)
{
    grade = 'A';
}else if (score >= 74 && score < 88)
{
   grade = 'B';
}else if (score >= 62 && score< 74)
{
   grade = 'C';
}else if (score >= 52 && score< 62)
{
   grade = 'D';
}else if (score >= 0 && score< 52)
{
   grade = 'F';
}else{
    grade = 'N';
}

switch (grade)
{
case 'A':
    printf("dear %s %s you grade is %c kepp it up.\n",fname,lname,grade);
    break;
case 'B':
    printf("dear %s %s you grade is %c this is good try to make it A.\n",fname,lname,grade);
    break;
case 'C':
    printf("dear %s %s you grade is %c study harder  becasue your grade need to be better.\n",fname,lname,grade);
    break;
case 'D':
    printf("dear %s %s you grade is %c you have to focus more and study harder.\n",fname,lname,grade);
    break;
case 'F':
    printf("dear %s %s you grade is %c you have to retake the course.\n",fname,lname,grade);
    break;
default:
    break;
    //  printf("please enter valid score");
}

   return 0;
}
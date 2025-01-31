#include <stdio.h>
int main()


// {

//     int x;
//     printf("Enter the year: ");
//     scanf("%d",&x);
//     if (x%4==0 & x%100 !=0  ||x%400==0 ){
//         printf("this is a leap year");
//     }
//     else{
//         printf("this is not leap year ");
//     }

//     return 0;
// }

//Q. WACP FOR CALCULATING SIMPLE INTREAST ?

// {
//     int a;
//     int b;
//     int c;
//     printf("Enter your amount: ");
//     scanf("%d",&a);
//     printf("Enter your intrest: ");
//     scanf("%d",&b);
//     printf("Enter your duration: ");
//     scanf("%d",&c);
//     int simple_intrest = ((a*b*c)/100);
//     printf("%d",simple_intrest);
//     return 0;
// }

// Q. WAP FOR FINDING AREA OF RECTANGEL, CIRCLE , TRIANGLE.

// {
//     int a;
    
//     printf("Press 1 for Circle");
//     printf("Press 2 for Rectangle");
//     printf("Press 3 for triangle");
//     scanf("%d",&a);
//     if(a==1){
//         float radius;
//         printf("Enter radius :");
//         scanf("%d",&radius);
//         float formula = 3.14*(radius*radius);
//         printf("%f",formula);
//         }
//     else if(a==2){
//         int length;
//         int breathe;
//         printf("Enter length :");
//         scanf("%d",&length);
//         printf("Enter breath :");
//         scanf("%d",&breathe);
//         float formula = length*breathe;
//         printf("%f",formula);
//     }
//     else if(a==3){
//         int base;
//         int height;
//         printf("Enter base :");
//         scanf("%d",&base);
//         printf("Enter heigth :");
//         scanf("%d",&height);
//         float formula = ((height*base)/2);
//         printf("%f",formula);
//     }
// }

//wrtie code for verify age for voting??

// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     if (age<18){
//         printf("you cant vote");

//     }
//     else{
//         printf("you can vote");
//     }
//     return 0;
// }

//Q. write a program for even or odd number??
//{
//     int x ;
//     scanf("%d",&x);
//     if (x%2==0){
//         printf("Even number");
//     }
//     else{
//         printf("Odd number");
//     }
//     return 0;
// }

// Q.WRITE A C PROGRAM FOR CHECK WEATHER A NUMBER IS UPPER CASE OR LOWERCASE

// {
//     char a ;
//     printf("Enter your string");
//     scanf("%c",&a);
//     if(islower(a)){
//         char b = toupper(a);
//         printf("%c",b);
//     }
//     else if(isupper(a)){
//         char c = tolower(a);
//         printf("%c",c);
//     }
// }


//Q. WRITE A PROGRAM VERIFY AGE FOR VOTING BY USING TERNARY OPERATOR?

// {
//     int age;
//     printf("Enter age");
//     scanf("%d",&age);
//     age<18? printf("you can vote"):printf("you can not vite");
// }

//Q. USE SWITCH CASES FOR ANY CONDITION?
// {
//     int day ;
//     printf("Enter your day between(1-7)");
//     scanf("%d",&day);
//     switch (day)
//     {
//         case 1: printf("sunday");
//             break;
//         case 2: printf("Monday");
//             break;
//         case 3: printf("Tuesday");
//             break;
//         case 6: printf("Wednesday");
//             break;
//         case 4: printf("Thursday");
//             break;
//         case 5: printf("Friday");
//             break;
//         case 7: printf("Saturday");
//             break;
//         default:printf("Not a valid age");
//     }
// }



//Q. WRITE A PROGRAM TO CHECK WEATHER A STUDENT IS PASS OR FAIL?    

// {
//     int x;
//     printf("Enter total marks");
//     scanf("%d",&x);
//     switch (x);

//     {
//         if (x>90){
//             printf("pass");
//         }
//         else{
//             printf("fail");
//         }
   
//     } 
// }


//Q. WRITE A PROGRAM TO FIND UPPER CASE OR LOWER CASE


// {
//     char value;
//     printf("Enter the value: ");
//     scanf("%c",&value);
//     if (value>='A'&&value<='Z'){
//         printf("UpperCase");
//     }
//     else if(value>='a'&& value<='z'){
//         printf("LowerCase");
 
//     }
// }

//Q. WRITE A PROGRAM TO FIND A NUMBER IS A NATURAL NUMBER OR NOT?
// {
//     int x;
//     printf("Enter NUMBER: ");
//     scanf("%d",&x);
//     if (x>0){
//         printf("it is a natural number");
//     }else{
//         printf("Not a natural number");
//     }


// }


//******************************************************************************* */
                        
                // "*        *****   *****   ******    *****  ",
                // "*       *     * *     * *     *  *       ",
                // "*       *     * *     * ******    *****  ",
                // "*       *     * *     * *              * ",
                // "*******  *****   *****  *         *****  "


//******************************************************************************* */

//******************************************************************************** */


//Q WRITE A PROGRAM TO PRINT NUMBER TILL 100?
// Increment Operator
// i++ (post increment operator)
// ++i (pre-increment operator)
// {
//     for(int i=1; i<100; i++){
//         printf("%d \n",i );
//     }
// }

//Q. WHAT WE CAN TAKE ITERATOR IN ANY FORMAT?

// {
//     for (char a='a'; a<='z'; a++){
//         printf("%c \n",a);
//     }
// }

//Q PRINT EVERY CHARACTER ON THE KEYBOARD

// {
//     for (char a; a<='z'; a++){
//         printf("%c \n",a);
//     }
// }


// Q. USE WHILE LOOP FOR PRINTING THE NUMBER TILL 10

// {
//     int n;
//     int i =1;
//     printf("Enter the value: ");
//     scanf("%d",&n);
//     while (i<=n){
//         printf("%d \n",i);
//         i++;
//     }
    
// }

//Q. WRITE A PROGRAM TO PRINT THE SUM OF NATURAL NUMBERS

// {
//     int n;
//     int sum=0;
//     printf("Enter the value: ");
//     scanf("%d",&n);
//     for (int i = 1,j=n; i<=n && j<=n; i++,j--){
//         sum+=i;
//         printf("%d \n",j);
//     }
//     printf("%d",sum);
// }

//Q PRINT A TABLE OF A NUMBER INPUT BY A USER?
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     for (int i=1 ; i<=10; i++){
//         printf("%d \n",i*x);
//     }
// }

//Q KEEP TAKING INPUTS FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7?
// {
//     int x ;
//     do
//     {
//         printf("Enter your number: ");
//         scanf("%d \n",&x);
//         printf("%d \n",x);
//         if(x%7==0){
//             break;
//         }
//     } while (1);
//         printf("Thank you");
    
// }


// {
//     for (int i=0; i<10; i++){
//         if(i==3){
//             continue;
//         }
//         else{
//             printf("%d \n",i);
//         }
        
    
//     }
//     return 0;
// }

//Q WAP TO PRINT ODDS NUMBERS TILL THE GIVEN VALUE??

// {
//     int a;
//     printf("Enter your number");
//     scanf("%d",&a);
//     for(int i=1; i<a; i++){
//         if(i%2==0){
//             continue;
//         }
//         else{
//             printf("%d\n",i);
//         }
//     }
// }


// WRP TO PRINT A FACTORIAL OF A GIVEN NUMBER/?

// {
//     int a;
//     int sum=1;
//     printf("Enter your number");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         sum *=i;
//     }
//     printf("YOUR FINAL FACTORIAL IS %d",sum);
//     return 0;
// }

// Q. WRP TO PRINT REVERSE TABLE OF GIVEN NUMBER?

// {

//     int a;
    
//     printf("Enter your number");
//     scanf("%d",&a);
//     for(int i=10; i>0; i--){
//         printf("%d \n",(a*i));
//     }
   
//     return 0;

// }


// Q. WAP TO PRINT SUM OF ALL NUMBERS?
// {

//     int a;
//     int sum=0;
//     printf("Enter your number");
//     scanf("%d",&a);
//     for(int i=0; i<=a; i++){
//         sum+=i;
//     }
//     printf("%d",sum);
//    return 0;

// }

// Q. WAP FOR PALINDROME OF A NUMBER??


// #include <stdio.h>

// int main() {
//     int a;
//     int reverse=0;
//     printf("Enter the value: ");
//     scanf("%d",&a);
//     while(a!=0){
//         int v = a%10;
//         reverse=reverse*10+v;
//         a=a/10;
//     }
//     printf("%d",reverse);
//     return 0;
// }

//Q. WRITE A PROGRAM TO PRINT FIBONACHI SEQUENCE??
#include <stdio.h>

int main() {
  int a ;
  int b=0;
  int i =1;
  printf("Enter the value: ");
  scanf("%d",&a);
  while(i<a){
      int m = b+i;
      printf("%d\n",m);
      b=i;
      i=m;
  }
    return 0;
}
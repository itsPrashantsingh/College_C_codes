// #include <stdio.h>
// int main() {
//   int a, b;
//   printf("Enter 1st No.\n");
//   scanf("%d", &a);
//   printf("Enter 2nd No.\n");
//   scanf("%d", &b);
//   a = a + b;
//   b = a - b;
//   a = a - b;
//   printf("Result: 1st No=%d, 2nd No=%d", a, b);

//   return 0;
// }

//-----------------------------------------------------------------
// #include <stdio.h>
// int main() {
//   float a, b, c, d, e, n, p;
//   printf("Enter Score of Hindi:\n");
//   scanf("%f", &a);

//   printf("Enter Score of English:\n");
//   scanf("%f", &b);

//   printf("Enter Score of Maths::\n");
//   scanf("%f", &c);

//   printf("Enter Score of Science:\n");
//   scanf("%f", &d);

//   printf("Enter Score of Computer:\n");
//   scanf("%f", &e);

//   printf("Enter Total Marks:\n");
//   scanf("%f", &n);
//   p = ((a + b + c + d + e) / n) *
//   100;https://www.google.com/search?channel=fs&client=ubuntu&q=replit

//   printf("Your Percentage: %.2f%%\nYou require: %.2f marks to pass.", p,
//          ((p < 40) * (n * (40 - p)) / 100) + 0);

//   return 0;
// }

//-----------------------------------------
/*#include <stdio.h>
int main() {
  int a, b, c, d, e, f;
  printf("Enter Total Amount:\n");
  scanf("%d", &a);
  b=a/2000;// no of 2000 notes
  c=a%2000;//remainder

  d=c/500;//no of 500 notes
  e=c%500;//remainder

  f=e/100;//no of 100 notes

  printf("No of 2000 notes: %d\nNo of 500 notes: %d\nNo of 100 notes: %d ", b,
d, f);

  return 0;
}*/

//-------------------------------------odd even
/*#include <stdio.h>
int main()
{
int a;
  scanf("%d", &a);

  (a&1)&&printf("Number is odd!");
  !(a&1)&&printf("Number is even!");
  return 0;
}*/
//-------------------------------------------

// #include <stdio.h>
// int main()
// {
// int a,b;
//   scanf("%d%d", &a,&b);
//   b=a^b;
//   a=b^a;
//   b=b^a;
//  printf("%d%d",a,b);

// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int a, b, c;
//   printf("Enter the numbers:");
//   scanf("%d%d%d", &a, &b, &c);
//   (a>b)?((a>c)?printf("%d is greatest!",a):printf("%d is
//   greatest!",c)):(b>c)?printf("%d is greatest!",b):printf("%d is
//   greatest!",c); return 0;
// }

// #include <stdio.h>
// int main()
// {
// int a, b, c;
//   printf("Enter the numbers:");
//   scanf("%d%d%d", &a, &b, &c);
//   (a<b)?((a<c)?printf("%d is lowest", a):printf("%d is lowest",
//   c)):(b<c)?printf("%d is lowest!", b):printf("%d is lowest!", c);
// return 0;
// }

/*#include <stdio.h>
int main() {
  int a;
  a = sizeof(a);

  printf("The size is: %d", a);

  return 0;
}*/

/*#include <stdio.h>
int main()
{
 int a;
  printf("Enter no to divide by 64.\n");
  scanf("%d",&a);
  printf("The result is: %d",a>>6);
}*/

/*#include <stdio.h>
int main()
{
 int a;
  printf("Enter no to multiply by 15.\n");
  scanf("%d",&a);
  printf("The result is: %d",(a<<4)-a);
}*/

// #include <stdio.h>
// int main()
// {
//  int a,b,c;
//   printf("Enter n.\n");
//   scanf("%d",&a);
//   b = a%10;
//   a = a/10;
//   c = a%10;
//   a = a/10;
//   printf("The result is: %d",(b*100)+(c*10)+a);
// }

/*#include <stdio.h>
int main()
{
 int a;
  printf("Enter no to multiply by 16.\n");
  scanf("%d",&a);
  printf("The result is: %d",a<<4);
}*/

// #include <stdio.h>
// int main()
// {
//  int a;
//   printf("Enter no to multiply by 65.\n");
//   scanf("%d",&a);
//   printf("The result is: %d",(a<<6)+a);
// }

// #include <stdio.h>
// int main()
// {
//  int a;
//   printf("Enter no to multiply by 31.\n");
//   scanf("%d",&a);
//   printf("The result is: %d",(a<<5)-a);
// }

// #include <stdio.h>
// int main()
// {
//  int a;
//   printf("Enter no to divide by 32.\n");
//   scanf("%d",&a);
//   printf("The result is: %d",(a>>5));
// }

//---------------------------MCQS----------
// #include <stdio.h>
// int main()
// {
// int x=0;
// if (x==0)
//  printf("hi");
// else
//  printf("howareu");
//  printf("helo");
//   }

// #include <stdio.h>
// void main()
// {
// double ch;
// printf("enteravaluebetween1to2:"); scanf("%lf",&ch);

// switch(ch)
// {
// case1: printf("1");
//   break;
// case2: printf("2");
//   break;
// }
// }

// #include<stdio.h>
// void main()
// {
// int ch;
//   printf("enteravaluebetween1to2:");         scanf("%d",&ch);
// switch (ch)
// {
//   case 1: printf("1\n");
//     break;
//     printf("Hi");
//   default: printf("2\n");

//  }
//   }

// #include <stdio.h>
// void main()
// {
// int ch;
//   printf("enteravaluebetween1to2:");      scanf("%d",&ch);
// switch(ch,ch+1)
// {
//   case 1: printf("1\n");
//     break;
//   case 2: printf("2");
//     break;
// }
// }

// #include <stdio.h>
// int main()
// {
// int x=0;
//   if(x++)
//  printf("true\n");
//   else if(x==1)
// printf("false\n");
// }

// #include <stdio.h>
// int main()
// {
// float f=1;
//   switch(f) {
//     case 1.0: printf("yes\n");
//       break;
//     default: printf("default\n");
// }
//   }

// #include <stdio.h>
// const int a=1,b=2;
// int main()

//  {
// int x=1;
//    switch(x) {
//      case a: printf("yes");
//      case b: printf("no\n");
//        break;
//               }
//    }

// #include <stdio.h>
// #define max(a) a
// int main()
// {
// int x=1;
//   switch(x)
//   {
//     case max(2): printf("yes\n");

//     case max(1): printf("no\n");
//       break;
//   }
// }

// #include <stdio.h>
// int main()
// {
// switch(printf("Do")) {
//   case 1: printf("First\n");
//     break;
//   case 2: printf("Second\n");
//     break;
// default: printf("Default\n");
//   break;
// }

//  }

// #include<stdio.h>
// void test(){
//   printf("Tested!");
// }

// int main(){
//   test();
//   return 0;
// }

// int main(){
// int i, j;
//   for (i=1;i<11; i++)
//     {
//       for (j=1; j<11; j++){
//         printf("%d * %d = %d\n", i, j, i*j);
//       }
//     }
//   return 0;
// }

// #include <stdio.h>

// int factorial(int num)
// {
//   if (num == 1 || num==0)
//   {
//     return 1;
//   }
//   else
//   {
//     return num*factorial(num-1);
//   }
// }
// int main()
// {
//   printf("%d", factorial(10));
// return 0;
// }

// #include <stdio.h>
// int fibo(int num)
// {
//   if (num==2 || num==1)
//   {
//     return num;
//   }

//   else
//   {
//     return fibo(num-1) + fibo(num-2);
//   }
// }

// int main()
// {
//   for (int i=1; i<10; i++)
//   {
//     printf("%d\n", fibo(i));
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
// int a=0, b=1, c;
//   for (int i=0; i<20; i++)
//   {
//     if (i<=1){c=i;}

//   else {c = a+b;
//     a=b;
//     b=c;}

//   printf("%d\n", c);
//     }

//   return 0;
// }

// # include <stdio.h>
// int main(){
//   char a;
//     scanf("%c", &a);
//   if (a>=65 && a<=90){a = a+32;}
//   if (a>=97 && a<=122){
//         if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'){printf("Vowel!");}
//         else{printf("Consonant!");}
//   }
//   else{printf("Not a alphabet!");}

//   return 0;
// }

// #include <stdio.h>
// int main(){
//   int a, b = 0, r, t;
//   scanf("%d", &a);
//   t = a;
//   while(a>0){
//     r = a%10;
//     b = r + (b*10);
//     a = a/10;
//   }
// if(t == b){printf("Yes");}
// else {printf("No\n");}
// return 0;
// }

// #include <stdio.h>
// int main(){
//   int n, a=0 , b=1, c;
//   scanf("%d", &n);
//   for (int i=0; i<n; i++){
//     if(i==0){printf("%d\n", i);}
//     else if (i==1){printf("%d\n", i);}
//     else{
//         c = a+b;
//         a = b;
//         b = c;
//         printf("%d\n", c);
//       }
//     }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int n, t=0, a=0;
//   scanf("%d", &n);
//   for(int i=1; i<=n; i++)
//     {
//     if(i%2 != 0)
//       {
//         t++;
//         a = a+i;
//       }
//     }
//   printf("%d", a/t);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a, b, c;
//   scanf("%d %d", &a, &b);
//   c=a;
//   for(int i=1; i<b; i++)
//     {
//       a = a+c;
//       }

//   printf("%d", a);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a, b, c;
//   scanf("%d %d", &a, &b);
//   for (int i=a; i<=b; i++){
//     if(i%4==0){
//       if(i%100==0){
//         if(i%400==0){printf("%d\n", i);c++;}
//       }
//       else{printf("%d\n", i);c++;}
//     }
//   }
// printf("Total: %d", c);
// return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int a, r, p=0, f = 0, t, tem;
//   scanf("%d", &a);
//   t = a; tem = a;
//   while(a>0)
//     {
//       a = a/10;
//       p++;
//     }
//   while(t>0)
//     {
//       r = t%10;
//       f =  (pow(r, p)) + f;
//       t = t/10;

//       }
//   if(tem==f){printf("Armstrong");}
//   else{printf("Not!");}
// return 0;
// }

// #include <stdio.h>
// int main(){
//   int a, t=0;
//   scanf("%d", &a);
//   for(int i=1; i<=a; i++){
//     if(a%i==0){t++;}
//     }
//   if(t==1){printf("1");}
//   else if(t==2){printf("Prime!");}
//   else{printf("Not Prime!");}
//  return 0;
//   }

// #include <stdio.h>
// int main(){
//   for(int i=0;i<4;i++){
//       for(int j=1; j<6; j++){
//         printf("%d ", j);
//       }
//       printf("\n\n");
//     }
//     return 0;
//   }

// #include <stdio.h>
// int main(){
//   for(int i=0;i<4;i++){
//       for(int j=1; j<6; j++){
//         (j==1)?printf("*  "):printf("* ");
//       }
//       printf("\n\n");
//     }
//     return 0;
//   }

// #include <stdio.h>
// int main()
// {
//   for(int i=1;i<=5; i++){
//     for(int j=1; j<=i; j++){
//       printf("%d ",j);
//       }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   for(int i=1; i<=4; i++){
//     for(int j=1; j<=i; j++){
//       printf("%d ",i);
//       }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   for(int i=1; i<=4; i++){
//     for(int j=1; j<=i; j++){
//       printf("* ");
//       }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   for(int i=65; i<69; i++){
//     for(int j=65; j<=i; j++){
//       printf("%c ",j);
//       }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int x,r,sum=0,m=1;
//   scanf("%d",&x);
//   while(x){
//     r=x%2;
//     sum=sum +(r*m);
//     m=m*10;
//     x=x/2;
//   }
//   printf("%d\n",sum);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
// int k,i=1 ;
//   k=i;
//   for ( i ; i<5;i++){

//   for (int j=1 ; j<=i; j++){

//       printf("%d ", k);
//     k++;
//     }
//   printf("\n");

//   }

//   return 0;
// }

// #include <stdio.h>
// int main(){
// for (int i=1; i<=3;i++){
//     for(int j=3; j>=i;j--){
//       printf(" ");
//     }
//   for (int k=1; k<=i; k++){

//     printf("* ");
//   }
// printf("\n");

// }

//   for(int i=4; i>=1; i--)
//  {
//    for(int j=1; j<=i; j++){

//   printf("* ");
//    }
//    printf("\n");

// for(int k=4; k>=i; k--){

// printf(" ");
//   }
//    }
// return 0;
//   }

// #include <stdio.h>
// int main(){
//   int n;
//   scanf("%d", &n);
//   for(int i=97; i<(97+n); i++){
//     for(int j=1; j<=n; j++){
//       printf("%c", i);
//     }
//   printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//   int n;
//   scanf("%d", &n);
//   for (int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//       if(j<=(n-i))printf("1");
//       else{printf("%d", i);}
//     }
//   printf("\n");
//   }
// }

// #include <stdio.h>
// int main(){
//   int n;
//   char ch='A';
//   scanf("%d", &n);
//   for (int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//       if(i==1||i==n||j==1||j==n)printf("*");
//       else {printf("%c", ch);ch++;}
//       if(ch>90){ch='A';}
//       }

//     printf("\n");
//   }
// }

// #include<stdio.h>
// int main()
// {
//    int n, r, c;
//    int a=1, b;

//    printf("Enter number of rows: ");
//    scanf("%d",&n);

//    for(r=1; r<=n; r++)
//    {
//      b=a+r-1;
//      for(c=1; c<=r; c++, a++)
//      {
//        if(r%2==1) printf("%5d",a);
//        else printf("%5d",b--);
//      }

//      printf("\n");
//    }

//    return 0;
// }

// #include <stdio.h>
// int main() {
//  int a, b, r;
//   scanf("%d %d", &a, &b);
//   if(a>b){a = a+b; b = a-b; a = a-b;}
//   while(1){
//   r = b%a;
//   if(r==0){printf("%d", a);break;}
//   a =r;
//   b=a;

//     }
//   return 0;
// }

// #include <stdio.h>
// int main() {
//  int n;
//   scanf("%d", &n);
//   for(int i=1; i<=n; i++){
//    for(int k=n; k>i; k--){
//      printf(" ");
//    }
//  for(int j=1; j<=i; j++){
//    if(j==1||i==j)
//    {printf("* ");}
//    else{printf("  ");}
//  }
//   printf("\n");
//    }

//   for (int i=1; i<=(n-1); i++){
//     for (int k=1; k<=i; k++){
//       printf(" ");
//     }
//     for(int j=(n-1); j>=i; j--){
//       if(j==(n-1)||i==j)
//       printf("* ");
//       else{printf("  ");}
//     }
//     printf("\n");
//     }
// return 0;
// }

// #include <stdio.h>
// int main() {
//  int n, a=1  ;
//   char ch ='A';
//   scanf("%d", &n);
//   for (int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//       if(i%2!=0)printf("%c", ch);
//       else printf("%d", a);
//     }
//   printf("\n");
//      if(i%2!=0)ch++;
//       else a++;
//     }
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   for (int i=1; i<=10; i++){
//     for(int j=1; j<=10; j++){
//       if(j<=(10-i))printf("-");
//       else printf("*");
//     }
//   printf("\n");
//     }
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   for (int i=10; i>=1; i--){
//     for(int j=1; j<=20; j++){
//       if(j<=i||j>20-i)printf("*");
//       else printf(" ");
//     }
//   printf("\n");
//     }
//   return 0;
//   }

// #include<stdio.h>
// int main() {
// int n;
//   scanf("%d", &n);

//   for(int i=1;i<=n; i++){
//   for(int j=1; j<=n; j++){
//     if(i==1||i==n){printf("* ");}
//     else{
//       if(i==j||j==((n+1)-i)||j==1||j==n){printf("* ");}
//       else{printf("  ");}
//     }
//   }
// printf("\n");
//   }
// return 0;
// }

// #include <stdio.h>
// int main(){
// for (int i=1; i<=14;i=i+2){
//     for(int j=14; j>i;j--){
//       printf(" ");
//     }
//   for (int k=1; k<=i; k++){

//     printf("* ");
//   }
// printf("\n");

// }
//   }

// #include <stdio.h>
// int main(){
// int a, sum=0, r, f=1;
// scanf("%d", &a);
// int tem = a;
// while(a>0){
//   r = a%10;
//   for(int i=1; i<=r; i++){
//     f*=i;
//   }
//   sum +=f;
//   a = a/10;
//   f=1;
//   }
// if(sum == tem) {printf("strong!");}
//   else{printf("not strong");}

//   return 0;
// }
// #include <stdio.h>
// int main(){
// int n;
//   scanf("%d", &n);
//   for (int i=1; i<=n; i++){
//       for(int j=n; j>1; j--){
//         printf(" ");
//       }
//     for(int k = 1; k<=i; k++){

//     }
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(){
// int n,k=0;
// scanf("%d", &n);
// int a[n];
//   for (int i=0; i<n; i++){
//       scanf("%d", &a[i]);
//       }
//   for(int i=0; i<n;i++){
//     if(a[i+1]==a[i])continue;
//     else{
//     for(int j=0; j<n; j++){

//       if(a[i]==a[j]){k++;}
//     }
//   printf("%d-%d\n\n", a[i], k);
//     k=0;
//       }
//     }
//   return 0;
// }

// #include <stdio.h>
// int main(){
// int abc[4][4]={1,2,3,4,
//                5,6,7,8,
//                9,1,2,3,
//                4,5,9,1,};

// for(int i=0;i<4;i++){
//   int k=3;
//   for(int j=0;j<4;j++){
//     if(i%2!=0){printf("%d ",abc[i][k]);k--;}
//     else{ printf("%d ",abc[i][j]);}
//     }
//   printf("\n");
//   }
//   return 0;
// }

//-----------------lower triangular matrix-------
// #include <stdio.h>
// int main(){
// int abc[4][4]={1,2,3,4,
//                5,6,7,8,
//                9,1,2,3,
//                4,5,9,1,};

// for(int i=0;i<4;i++){

//   for(int j=0;j<i;j++){
//     if(i==0){continue;}
//     else{
//       printf("%d ",abc[i][j]);}
//     }
//   printf("\n");
//   }
//   return 0;
// }

// ------------------------upper triangular--
// #include <stdio.h>
// int main(){
// int abc[4][4]={1,2,3,4,
//                5,6,7,8,
//                9,1,2,3,
//                4,5,9,1,};

// for(int i=0;i<4;i++){

//   for(int j=0;j<4;j++){
//     if(i==3){break;}
//     else if(j>i)
//     {
//       printf("%d ",abc[i][j]);}
//     }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int sum = 0;
//   int a[2][3] = {1, 2, 3,
//                 4, 5, 6};
//   int b[3][2] = {7, 8,
//                 9, 10,
//                 11, 12};
//   for (int i = 0; i < 2; i++) //i-->rows of 1st matrix
//   {
//     for (int j = 0; j < 2; j++) //j-->columns of 2nd matrix
//     {
//       for(int k=0;k<3;k++)//k-->rows of 1st matrix
//       {
//         sum += (a[i][k] * b[k][j]);
//       }
//     printf("%d ", sum);
//     sum = 0;
//     }
//   printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int r, p;
//   int a[3][3] = {1, 2, 3,
//                 4, 5, 6,
//                 7, 8, 9};
//   r = (a[0][0]*a[1][1]*a[2][2]) + (a[0][1]*a[1][2]*a[2][0]) +
//   (a[0][2]*a[1][0]*a[2][1]); p = (a[2][0]*a[1][1]*a[0][2]) +
//   (a[2][1]*a[1][2]*a[0][0]) + (a[2][2]*a[1][0]*a[0][1]); printf("%d", (r-p));
//   return 0;
// }

// #include <stdio.h>
// int main() {
//   int r=0;
//   int a[3][3] = {1, 2, 3,
//                 0, 0, 0,
//                 0, 2, 9};

//   for(int i=0;i<3; i++){
//     for(int j=0; j<3; j++){
//       if(a[i][j]==0){r++;}
//     }
//   }
//  if(r>(9/2)){printf("Sparse!");}
//   else{printf("Dense!");}
//   return 0;
// }

// #include <stdio.h>
// int main() {
  
//   int a[5] = {2, 0, 1, 0, 4};
//   int size=4;
//   for(int i=0; i<size; i++){
//     for(int j=(i+1); j<size; j++){
//       if(a[i]==a[j]){
//         for(int k=i; k<size; k++){
//           a[k]=a[k+1];
//       }
//       size--;
//         j--;
//       }
//     }
//   }
// for(int i=0; i<=size; i++){
//   printf("%d ", a[i]);
// }
//   return 0;
// }


// #include <stdio.h>
// int main() {
//   int a, b, t, r;
//   scanf("%d %d", &a, &b);
//   a = a^b;
//   while(a){
//     r=a%2;
//     if(r==1){t++;}
//     a=a/2;
//   }
//     printf("Hamming distance: %d", t);
//    return 0;
// }



//#include <stdio.h>
// int palindrome(int a){
//   int r, sum=0;
//   int f = a;
//   while(a){
//     r = a%10;
//     sum = r + (sum*10);
//     a = a/10;
//     }
//   if(f==sum){return 1;}
//   else{return 0;}
// }

// int prime(int a)
// {
  
//   while(a){
//     int t=0;
//       for(int i=1; i<=a; i++){
//         if(a%i==0){t++;}
//       }
//     if((t==2)&&(palindrome(a))){return a;break;}
//     a++;
//     }
// }

// int main(){ 
//   int n;
//   scanf("%d", &n);
//   printf("%d", prime(n));
//   return 0;
// }


// #include <stdio.h>
// void swap(int *p, int *q){
//   int c = *p;
//   *p = *q;
//   *q= c;
// }
// int main() {
//   int a, b, *P, *R;
//   scanf("%d%d", &a, &b);
//   swap(&a, &b);
//   printf("%d %d", a, b);
//   return 0;
// }

// #include <stdio.h>
// int sum(int *p, int *q){
//   int sum = *p+*q;
//   return sum;
// }
// int main() {
//   int a, b, *P, *R;
//   scanf("%d%d", &a, &b);
//   printf("%d", sum(&a, &b));
//   return 0;
// }

// #include <stdio.h>
// void scan(int *p, int *q){
//   scanf("%d %d", p,q);
// }
// int main() {
//   int a, b;
//   scan(&a, &b);
//   printf("%d%d", a,b);
//   return 0;
// }

// #include <stdio.h>
// void sum(int *a){
//   int sum=0;
//  for(int i=0; i<5; i++){
//    sum = sum+*(a+i);
//  }
//   printf("%d", sum);
//   }
// int main() {
//   int a[5]={1,2,3,4,5};
//   sum(a);
//   return 0;
// }



// #include <stdio.h>
// void sum(int *a){
//   int sum=0;
//  for(int i=0; i<2; i++){
//    sum = sum+a[i];
//  }
//   printf("%d", sum);
//   }

// int main() {
//   int a[2][2];
//   sum(*a);
//   return 0;
// }




// #include <stdio.h>
// int main() {
//   char s[50];
//   scanf("%[^\n]s", s);
//   int l=0;
//   for(int i=0; s[i]!='\0'; i++){
//     l++;
//   }
//   for(int i=0; i<(l/2); i++){
//     int c= s[i];
//     s[i]=s[l-1];
//     s[l-1]=c;
//     l--;
//   }
// puts(s);
//   return 0;
// }


#include <stdio.h>
#include <string.h>
int main() {
  char s[50];
  fgets(s, 50, stdin);
  int l=0;
  for(int i=0; s[i]!='\n'; i++){
    l++;
  }
  printf("%d", l);
  for(int i=(l-1); i>=0; i--){
    if(s[i]!=' '&&s[i-1]==' '){
      for(int j=l; j>=i; j--){
        printf("%c", s[j]);
      }
    l=i;
    }
    
  }

  return 0;
}
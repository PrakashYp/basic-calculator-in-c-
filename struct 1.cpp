#include<stdio.h>
void funcmul(int*,int*,int*);
void funcdiv(int*,int*,int*);
void funcadd(int*,int*,int*);
void funcsub(int*,int*,int*);
int main()
{
    int mul,sub,div,add;
     int n1,n2;
     char op;
     printf("Enter your  first Number :\n");
     scanf("%d",&n1);
      printf("Enter The Operator(*,-,+,/):\n");
     scanf(" %c",&op);
     printf("Enter your Second Number:\n");
     scanf("%d",&n2);


     if(op=='*'){
        funcmul(&n1,&n2,&mul);
        printf("Multiplication=%d",mul);
        return 0;
     }if(op=='/'){
       funcdiv(&n1,&n2,&div);
         printf("Division=%d",div);
         return 0;
     }if(op=='+'){
      funcadd(&n1,&n2,&add);
        printf("Addition=%d",add);
        return 0;
     }if(op=='-'){
      funcsub(&n1,&n2,&sub);
        printf("Subtraction=%d",sub);
        return 0;
     }else{
       printf("Invalid");
       return 0;
     }

}
void funcmul(int* n1,int* n2,int* mul){

      *mul=*n1 * *n2;
}
void funcadd(int* n1,int* n2,int* add){

      *add=*n1 + *n2;
}

void funcsub(int* n1,int* n2,int* sub){

      *sub=*n1 - *n2;
}

void funcdiv(int* n1,int* n2,int* div){

      *div=*n1 / *n2;
}





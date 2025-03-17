#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>


// BASIC OPERATION 
int sumofdigit(int num){
    int sum,digit;    sum=0;
    while(num !=0){        digit=num%10;
        sum=sum+digit;        num=num/10;
    }    return(sum);}

int reversenumber(int num){
int digit,reverse;reverse=0;
while(num !=0){digit=num%10;
reverse=reverse*10+digit;num=num/10;}
return(reverse);}

 bool ispalindromnumber( int num){ //max 999999999    
return(num==reversenumber(num));}

int numberDigit(int num){ //function to know numbre of digit in number    if(num<0){num=-num;}
        int digits;
    digits=0;    do{
     digits++;     num=num/10;
    }while(num!=0);
    return digits;}

bool isPrime(int num){
    bool isprime=false;    if(num==2){
    isprime=true;   return isprime;
   }
    if(num<=0 || 0==num%2){return isprime;}   
    int i=3;    while(i<num){
        if(num%i==0)        i=num+1;
        i=i+1;}        if(i==num+2){
            return isprime;        }
                else{
            isprime=true;            return isprime;
        }
}       
int gcd(int a,int b){
    int i,pgcd;    if(a<0){a=-a;}
    if(b<0){b=-b;}    if(a<=b){
        for(i=a;i>0;i--){            if(a%i==0 && b%i==0){
                pgcd =i;break;            }
        }
    }
    else{        for(i=b;i>0;i--){
            if(a%i==0 && b%i==0){                pgcd =i;break;
            }        }

    }    return pgcd;
}

int lcm(int a,int b){    int ppcm;
    if(a<0){a=-a;}    if(b<0){b=-b;}
    ppcm=a*b/gcd(a,b);    return ppcm;
}
int longfactorial(int a){ 
int i,fact;if(a<0){
    printf("MATH ERROR!!");    exit(EXIT_FAILURE);
}if(0==a || 1==a){
    fact=1;}else{
    fact=a*longfactorial(a-1);
}return fact;
}
unsigned long Permutation(int n,int k){
    if(n-k>n){       printf("MATH ERROR!!");
       exit(EXIT_FAILURE);
    }   
    unsigned long  A=longfactorial(n)/longfactorial(n-k);    return A;
}

unsigned long Bincoefficient(int n,int k){    unsigned long C=Permutation( n, k)/longfactorial(k);
}
bool iseven(int a){
 if(a%2==0){
 return true;}
 else {return false;}
}
// INTERMEDIATE OPERATION 
double power(int base,int exp);

 void primefactorization(int num){    int i,test;
    if(isPrime(num) ||num==0||num==1){        printf("%d=%d",num,num);
            }
      else{        printf("%d=",num);
        if(num<0){            printf("-1x");
            num=num*-1;        }
        do{            for(i=1;i<=num;i++){
                if(isPrime(i) && 0==num%i){                printf("%d",i);
                    num=num/i;break;                }
            }         if(1!=num){
            printf("x");         }
        }while(1!=num);
      } } 
 bool isArmstrong (int num){
    int m,i,sum,j;
    double k;
    bool Armstrong=false; 
    
    m=num; // m to save value of n
    
    i=0; // is the number of digits
    sum=0; // 
    if(num>0){
    i=numberDigit(num);
     m=num;
    
    for(j=0;j<=i;j++){
        k=power(m%10,i);
        sum=sum+k; // sum=sum+digit power number of digits
        m=m/10;
        
    }}
    if(num==sum){Armstrong=true;}
    return Armstrong; 
}


void fibonacciSeries(int* n){
    int num,n1=0,n2=1,i,F;
    num=*n;
    if(num==0 || num==1){*n=num;}
    else{

        for(i=2;i<=num;i++){
            F=n1+n2;   
            n1=n2;
            n2=F;
        }
        *n=F;
    }
}


int sumofDivisors(int num){ // divisors positive 
   if(num<0){
    num=-num;
   }
   int i,sum=num; 
        for(i=1;i<=num/2;i++){
            if(num%i==0){  //cheak if num is dvise by i 
                sum=sum+i;
            }
        }
        return sum; 
   
}



bool isPerfect(int num){
    int i,sum=0;
    bool isperfect =false;
    sum=sumofDivisors(num)-num;

    
    if(sum==num){isperfect=true;}
return isperfect;
}


bool isMagic(int num){
    int i,digits , save,sum;
    bool ismagic =false;
    if(num<0){return ismagic;}  // does not work whit negative (return false)
    while(num/10!=0){
        sum=0;
        save=num;
        digits=numberDigit(num);
        for(i=1;i<=digits;i++){
            sum=sum+save%10;
            save=save/10;
        }
        num=sum;

    }
    if(num==1){ismagic=true;}
return ismagic;
}


bool isAutomorphic(int num){
    
    int digits,nsquare,s;
    bool isautomophic=false;
    if(num<0){return isautomophic;}
    nsquare=num*num;
    digits=numberDigit(num);
    s=pow(10,digits);
    if(num==nsquare%s){
         isautomophic=true;
    }
    return isautomophic;

}

//ADVANCED OPERATION 


void  toBinary(int* num){
    int n,nb;
    n=*num;
    nb=0;
    do{
        nb=nb*10+n%2;
        n=n/2;
    }while(n!=0);
    *num=reversenumber(nb);

}


double sqrtApprox(int num){
    
    double oldgusse,newguesse;
    
    int i,m;
    if(num<0){
            printf("MATH ERROR!!");
            exit(EXIT_FAILURE);
    }
    i=1;
   
    if(num==1 || num==0){
        return num; 
    }
    else{
        oldgusse=num/2;
        
    do{
        newguesse=(oldgusse+num/oldgusse )/2;

        oldgusse=newguesse;

    }while(fabs(newguesse*newguesse-num)>0.000001);}
    return newguesse;
    


}


double power(int base,int exp){
    int i;    double base1,num=1.0;
    base1=base;    if(exp==0){
    return(1.0);}    if(exp<0){
    base1=1.0/base;    exp=-exp;}
    for(i=1;i<=exp;i++){    num=num*base1;}
    return(num);
    }
bool isHappy(int num){
    int i,h,s=0,j;    bool happy=false;
    h=num;    if(h<10){
        h=h*h;    }
    do{
        i=numberDigit(h);        s=0;
        for(j=1;j<=i;j++){            if(h>=10){
            s=s+(h%10)*(h%10);}            else{
                s=s+h*h;            }
            h=h/10;        }
        h=s;    
    }while(1!=h && 4!=h);
    if(1==h){        happy=true;
    }    return happy;}

bool isAbundant(int num){
    if(num<sumofDivisors(num)-num)    return(true);
    else return(false);}

bool isdeficient(int num){    if(num>sumofDivisors(num)-num)
    return(true);    else return(false);
}
int sumEvenFibonacci(int num){
int sum=0,i,test;for(i=0;i<=num;i++){
    test=i;    fibonacciSeries(&test);
    if(0==test%2){        sum=sum+test;
    }
   }
 return sum;
}

bool isHarshad(int num){    return(num%sumofdigit(num)==0);}
    
unsigned long catalanNumber(int n){    unsigned long c;
    if(n<0)         printf("MATH ERROR!!");
         exit(EXIT_FAILURE);   // if the number is negativ return 0    c=longfactorial(2*n)/(longfactorial(n+1)*longfactorial(n));
    return(c);}

void  pascalTriangle(int n){    int i,j;
    for(i=0;i<=n;i++){        for(j=0;j<=i;j++){
            printf("%lu ",Bincoefficient(i,j));        }
        printf("\n");    }
    }

unsigned long bellNumber(int n){  int B=0;
  if(n==0||n==1){
    return 1;  }
  else{    int i=0;
    for(i;i<n;i++){      B=B+Bincoefficient(n-1,i)*bellNumber(i);
    }  }
  return B;}

bool isKaprekar(int num){    int n,n1=0,n2;
    n=num*num;    if(numberDigit(n)%2==0){
        n2=numberDigit(n)/2;        n1=n/power(10,n2);
        n=n-n1*power(10,n2);        }
    return(num==n+n1);}


bool isSmith(int num ){
    bool issmith=false;    int i,m=num,s=0;
    if(isPrime(num)){        return issmith;
    }    for(i=1;i<=num;i++){
        if(isPrime(i) && 0==m%i){            s=s+sumofdigit(i);
            m=m/i;            i=i-1;
        }
    }    if(s==sumofdigit(num)){
        issmith=true;    }
    return issmith;

}
int sumofprime(int num){
   int i,s=0;   for(i=1;i<=num;i++){
    if(isPrime(i)){        s=s+i;
    }   }
   return s;
}

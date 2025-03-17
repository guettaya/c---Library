#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
//BASIC 

int stringLength(const char* str){
int i=0,length=0;
 while(str[i]!='\0'){
 length++;
 i++;}
return(length);}


void stringCopy(char* dest, const char* src){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;

    }
    dest[i]='\0';

}


void stringConcat(char* dest, const char* src){
int i=stringLength(dest),j=0;
 while(src[j]!='\0'){
  dest[i]=src[j];
  j++;
  i++;
  }dest[i] = '\0';}




int stringCompare(const char* str1, const char* str2){
  
int size=stringLength(str1);
int i;
for(i=0;i<=size;i++){
if(str1[i]!=str2[i]){
  return str1[i]-str2 [i];
}

}
    return 0;
}


bool isEmpty(char* str){
  if(str[0]=='\0'){return true;}
  else{return false;}
}


void reverseString(char* str){
 int i,save;
for(i=0;i<stringLength(str)/2;i++){
 save=str[i];
 str[i]=str[stringLength(str)-1-i];
 str[stringLength(str)-1-i]=save;}}


 void toUpperCase(char* str){
 int i;
 for(i=0;i<stringLength(str);i++){
  if(str[i]>='a' && str[i]<='z')
  str[i]=str[i]-32;}}


void toLowerCase(char* str){
  int i=0;
  while('\0'!=str[i]){
    if(str[i]>='A'&&str[i]<='Z')
    str[i]=str[i]+32;
    i++;

  }
} 

//INTERMEDIATE 


void Removechar(char*str,int index){ // index like arr[0,1,2,3]
    int a=stringLength(str);
    if(index>=0&&index<=a){
        if(index!=a){
     int i=index,t;
     for(i;i<a;i++){
     t=str[i];
     str[i]=str[i+1];
     str[i+1]=t;
     }}
     str[a]='\0';

    }

}

void removewhitespace(char* str){
 int i,j,length;
 char t;
 length=stringLength(str);
for(j=0;j<=length;j++){
if(str[j]==' ')
Removechar(str,j);
  
 }}


bool isPalindrome(char* str){
 int i=0;
    char str1[stringLength(str)];
    char temp[stringLength(str)];
stringCopy(str1,str);stringCopy(temp,str);
removewhitespace(temp);removewhitespace(str1);
reverseString(str1);
 while(temp[i]!='\0'){
 if(temp[i]!=str1[i])
 return(false);
 i++;}
 return(true);
 }


void countVowelsConsonants(char* str, int* vowels, int* consonants){
  int i=0;
  while(str[i]!='\0'){
    if((str[i]>='A'&& str[i]<='Z') ||(str[i]>='a'&& str[i]<='z') ){
      if(str[i]=='a' || str[i]=='e'|| str[i]=='o' || str[i]=='u' || str[i]=='i' || str[i]=='y'|| str[i]=='A'
       || str[i]=='E' ||str[i]=='O'|| str[i]=='U'|| str[i]=='I'|| str[i]=='Y'){
       *vowels=*vowels+1;
      }
      else{*consonants=*consonants+1;}
    }
    i++;

  }
}

int findSubstring(const char* str, const char* sub){
  int start=-1,a,b,i,j;
  a=stringLength(str);
  b=stringLength(sub);
  for(i=0;i<=a;i++){
    
      if(str[i]==sub[0]){
        start=i;
      } 
    if(-1!=start){
      int k=0;
     for(j=i;j<=a;j++){
      
      if(str[j]!=sub[k]){
        start=-1;
        break;

      }
      else{
        k++;
      }
      if(k==b){
        return start;
      }
     }
    }
  }
  return start;


}

bool isAnagram(char* str1, char* str2){
int a=stringLength(str1),b=stringLength(str2);
if(a!=b){
    return false;
}

char temp1[a],temp2[b];
stringCopy(temp1,str1);
stringCopy(temp2,str2);
toLowerCase(temp1);
toLowerCase(temp2);
int i,j,cheak=0;
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        if(temp1[i]==temp2[j]){
            temp2[j]='A';
            cheak++;break;
        }
    }
}
if(cheak==a){
    return true;
}else{return false;}}


void charFrequency(char* str){
 int length,i=0,j=0,count=0;
 length=stringLength(str);
 char str1[length];
 for(i=0;i<length;i++){
 str1[i]=str[i];}
 toUpperCase(str1);
 i=0;
 for(i=0;i<length-1;i++){
  count=0;
  j=0;
  while(str1[j]!='\0'){
   if(str1[i]==str1[j] && str1[i]!='a'){
    if(j!=i)
   str1[j]='a';
   count=count+1;}
   j++;
  }
  if(str1[i]!='a' && str1[i]!=' ' && str1[i]!='\0')
  printf("the charecter %c appeared %d times \n",str1[i],count);
 }
 
}


int countWords(char*str){
    int count=1,s=stringLength(str),i=0;
    for(i=0;i<=s;i++){
        if((str[i]==' '||str[i]=='\n'||str[i]=='\t')&&(str[i+1]!=' '&&str[i+1]!='\n'&&str[i+1]!='\t'))
        count++;
    }
    return count;

    

}


void removeDuplicates(char* str){
    int a=stringLength(str);
    int i,j;
    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            if(str[i]==str[j] && i!=j){
                Removechar(str,j);
                a-1;
            } 
        }
    }
}

//ADVANCED 


void compressString(char* str, char* result){
 int count,i,j=0;
 count=1;
 for(i=0;i<stringLength(str);i++){
  if(str[i]==str[i+1])
  count=count+1;
  else {
  j += sprintf(&result[j],"%d" ,count);
  result[j++]=str[i];
  count=1;}
 }
}


void longestWord(char* str, char* result){
    if(1==countWords(str))
    stringCopy(result,str);

    else{
        int a=stringLength(str),i=0,count,start=0,times=countWords(str)-1;
        while((str[i]!=' '&& str[i]!='\n'&& str[i]!='\t')){
            result[i]=str[i];i++;
        }
        while(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
        i++;}
        start=i;
        count=1;

        while(times!=0){
            count=1;
            int j=start;
            
            while((str[j]!=' '&&str[j]!='\n'&&str[j]!='\t'&&str[j]!='\0')){
                j++;count++;}
            
            if(count>stringLength(result)){
                for(i=0;i<=j;i++){
                    result[i]=str[start];
                    start++;
                    if((str[start]==' '||str[start]=='\n'||str[start]=='\t')){
             break;}
                }
                while((str[start]==' '||str[start]=='\n'||str[start]=='\t')){
             start++;}
            }
            else{
                start=start+count;
            }
            
            times--;  
        }
        result[i+1]='\0';
    
    }
}


void shiftstring(char* str ,int shift,char detect){
 int j,i;
 char reverseR,reverseL;
 if(detect=='r'){
 for(j=1;j<=shift;j++){
 reverseR=str[0];
 for(i=0;i<stringLength(str)+1;i++){
  str[i]=str[i+1];}
     str[stringLength(str)]=reverseR;}}
 if(detect=='l'){
 for(j=1;j<=shift;j++){
 reverseL=str[stringLength(str)-1];
 i=stringLength(str)-1;
 for(i=stringLength(str)-1;i>0;i--){
  str[i]=str[i-1];}
 
 str[0]=reverseL;}
}}


bool isRotation(char* str1, char* str2){
 int i;
 if(isAnagram(str1,str2)==true){
 for(i=0;i<=stringLength(str1);i++){
 shiftstring(str2,1,'r');
 if(strcmp(str1,str2)==0)
 return(true);}
 for(i=0;i<stringLength(str1);i++){
 shiftstring(str2,1,'l');
 if(strcmp(str1,str2)==0)
 return(true);}}}


int countChar(char* str, char ch){
    int count=0,i;
    for(i=0;i<=stringLength(str);i++){
        if(str[i]==ch)
        count++;
    }
    return count;

}


void findAndReplace(char* str, char* find, char* replace){
if(stringLength(find)>=stringLength(replace)){
    while(findSubstring(str,find)>-1){
        int s=findSubstring(str,find);
      
            int i=s,k=0;
            for(i;i<s+stringLength(replace);i++){
                str[i]=replace[k];k++;
        }
            for(i;i<s+stringLength(find);i++){
                Removechar(str,i);
            }
        }
    }
}


void longestPalindrome(char* str, char* result){
        int comp=0,i,j,s;
        char temp[stringLength(str)];
        if(isPalindrome(str)){
            stringCopy(result,str);
        }
        else{
            for(i=0;i<=stringLength(str);i++){
                
                for(s=stringLength(str);s>=i;s--){
                    int k=i;
                    for(j=0;j<=s;j++){
                        temp[j]=str[k];
                        k++;
                    }
                    temp[k]='\0';
                    
                    if(isPalindrome(temp)&&stringLength(temp)>comp){
                        stringCopy(result,temp);
                        comp=stringLength(temp);
                    }
                }
            }


        }
}


void swapstring(char* str,int a,int b){
 char chara;
 chara=str[a];
 str[a]=str[b];
 str[b]=chara;
}

 void printPermutations(char* str, int start, int end) {
  int i;
  if(start==end){
  printf("%s\t",str);
  return;}
    for (i=start; i<=end; i++) {
        swapstring(str, start, i);       
        printPermutations(str, start + 1, end); 
    swapstring(str, start, i);}}



 void splitString(char* str, char delimiter, char tokens[][100], int* tokenCount){
     int i,j,k;
     while(str[i]!='\0'){
      if(str[i]==delimiter){
      tokens[j][k]='\0';
       j++;
       printf("%d",j);
       k=0;}
       else{
       tokens[j][k]=str[i];
       k++;}
       i++;}
       tokens[j][k]='\0';
    *tokenCount=j;}

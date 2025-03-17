




































































#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<stdio.h>
// aray 
///1




void swap(int arr[],int a,int b,int size){ //  ??? ????
if(a>=size||b>=size){
      printf("ERROR");
    exit(EXIT_FAILURE);
}
    int s;
    s=arr[a];
    arr[a]=arr[b];
    arr[b]=s;

}
void Equality(int arr1[],int arr2[],int size){
	int i=0;
    for(i=0;i<size;i++){
         arr2[i]=arr1[i];
        
    }
}





void initializeArray(int arr[], int size, int value){
	int i;
	for(i=0;i<size;i++){
		arr[i]=value;
	}
}
void printArray(int arr[], int size){
	int i;
	printf("{ ");
	for(i=0;i<size-1;i++){
		printf("%d,",arr[i]);
	}
		printf("%d }",arr[size-1]);
}
int findMax(int arr[], int size){
	int i,max=-99999999;
	for(i=0;i<size;i++){
	if(arr[i]>max)
	max=arr[i];}
	return(max);
}
int findMin(int arr[], int size){
	int i,min=99999999;
	for(i=0;i<size;i++){
	if(arr[i]<min)
	min=arr[i];}
	return(min);
}
int sumArray(int arr[], int size){
	int i,sum;
	sum=0;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
}
return(sum);}
double averageArray(int arr[], int size){
	double average;
	average=(double)sumArray(arr,size)/size;
    return(average);
	}
	bool isSorted(int arr[], int size){
		int i;
		for(i=0;i<size-1;i++){
			if(arr[i]>arr[i+1])
				return(false);}
			
			return(true);}
			
			
// 2


void reverseArray(int arr[], int size){
				int i,stoke;
				for(i=0;i<size/2;i++){
			stoke=arr[i];
		    arr[i]=arr[size-1-i];
		    arr[size-1-i]=stoke;}}
void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount){
	int i;
	for(i=0;i<size;i++){
		if(arr[i]%2==0)
		*evenCount=*evenCount+1;
		else 
		*oddCount=*oddCount+1;}}
int secondLargest(int arr[], int size){
	int max,i;
	max=findMax(arr,size);
	for(i=0;i<size;i++){
		if(max==arr[i])
		arr[i]=-9999999;}
		return(findMax(arr,size));}
int Removeelement(int arr[], int size,int del){ // size must be precise ???? ???
int p=size,i;
    for(i=del;i<p;i++){
        arr[i]=arr[i+1];}
        return size-1;} // change the size
void elementFrequency(int arr[], int size){
	int Frequency,check=0,u,i,j;
	for(i=0;i<size;i++){
		Frequency=0;
		for(j=0;j<size;j++){
			if(arr[i]==arr[j]){
			Frequency=Frequency+1;}}
			if(Frequency>1){
			 for(u=0;u<i;u++){
			 	if(arr[u]==arr[i])
			 	check=check+1;}
			 	if(check==0)
			 	printf("the number %d occur %d times\n",arr[i],Frequency);}
			else
			printf("the number %d occur %d times\n",arr[i],Frequency);}}
int RemoveDuplicates(int arr[], int size){
int i; // size must be precise  ???? ??? 
for(i=0;i<size-1;i++){
int j=i,k=size-1;
while(j!=k){
    if(arr[j]==arr[k]){
size =Removeelement(arr,size,k); //remove element that duplicated
		}
    k--;
}
}
return size;
}
int binarySearch(int arr[], int size, int target){
    if(!isSorted(arr,size)){return -2;} // -2 means is not sorted
    int high=size-1,low=0,mid;
    mid=low+(high-low)/2;
    while(high>=low){
        if(target==arr[mid]){
            return mid;
        }
        else{
            if(target<arr[mid]){
                high=mid-1;
                mid=low+(high-low)/2;
            }
            else{
                low=mid+1;
                mid=low+(high-low)/2;
            }
        }
        
    }
    return -1; // -1 means the target does not existe 

 }







int linearSearch(int arr[], int size, int target){
	int i;
	for(i=0;i<size;i++){
		if(target==arr[i]){
			return(i);}}
			return(-1);}
			
void leftShift(int arr[], int size, int rotations){
	int i=1,j=0;
    for(i=1;i<=rotations%size;i++){       // remembre condition////
     for(j=0;j<size-1;j++){
        swap( arr,j,j+1,size);
     } 
    }
}			
void rightShift(int arr[], int size, int rotations){
	int i,j;
	for(i=1;i<=rotations;i++){
	for(j=size-1;j>0;j--){
	if(j-1!=-1)
    swap(arr,j,j-1,size);}
	}}
			
			
			
////  3


void bubbleSort(int arr[], int size){
    while(size!=0){
        int j;
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap( arr,j,j+1,size);
            }
        }
        size=size-1;
    }


}
int minenterval(int arr[],int b,int e){
    int i,min=99999999,min1;
	for(i=b;i<=e;i++){
	if(arr[i]<min){
	min=arr[i];
	min1=i;}}
	
	return(min1);
	
}
void selectionSort(int arr[], int size){
	int i;
    for(i=0;i<size;i++){
    swap(arr,minenterval(arr,i,size-1),i,size);}}
void cutarray(int arr[],int left ,int right){
	int mid,lef,righ,ar1,i,ar2;
	mid=left+(right-left)/2;
	ar1=mid-lef+1;
	ar2=righ-mid;
	int rig[ar2],le[ar1];
	for(i=0;i<ar1;i++){
		le[i]=arr[i];}
	for(i=0;i<ar2;i++){
		rig[i]=arr[i+mid];}
}
void insertionSort(int arr[], int size){  //!!!!
    int i=1;
   
    for(i;i<size;i++){
         int temp=arr[i],j=i-1;
         while(arr[j]>temp&&j>=0){
          arr[j+1]=arr[j];
          j--;
         }
         arr[j+1]=temp;

       
    }
}
void merge(int arr[],int size){
    int i,k=0,j=0;
    int m1=size/2,m2=size/2;i=m2;
    if(0!=size%2){
        m2=size/2+1 ; 
        i=m2-1; 
    }
    int arr1[m1];
    int arr2[m2];
    if(!isSorted(arr,size)){
        int r=0;
        Equality(arr,arr1,m1);
        for(i;i<size;i++){
            arr2[r]=arr[i];
            r++;
        }    
    if(!isSorted(arr1,m1)||!isSorted(arr2,m2)){
        if(!isSorted(arr1,m1))
        merge(arr1,m1);
        if(!isSorted(arr2,m2))
        merge(arr2,m2);
    }
     for(i=0;i<size;i++){
        if(j<m2&&k<m1){
            if(arr1[k]>arr2[j]){
                arr[i]=arr2[j];
                j++;
            }
            else {
                arr[i]=arr1[k];
                k++;
                
            }     
        }
        else {if(j>=m2){
            arr[i]=arr1[k];
            k++;
        }
        else {
            
            arr[i]=arr2[j];
            j++;
        }}     
    }}}
void quickSort(int arr[], int low, int high){
	int high1,pivot,low1;
	if(!isSorted(arr,high+1)){
	low1=low;
	pivot=arr[high/2];
	swap(arr,high/2,high,high+1);
	high1=high;
	while(low<=high){
		while(arr[low]<pivot  && low<=high1){
	     low=low+1;}
	     while(arr[high]>pivot  && high>=0){
	     high=high-1;}
		swap(arr,high,low,high1+1);}
		if(low>high){
		swap(arr,low,high1,high1+1);
		high--;
		low++;}
		if(low1<high)
		quickSort(arr,0,high);
		if(high1>low)
		quickSort(arr,low,high1);}}













//////   4


int findMissingNumber(int arr[], int size){
	int i,j,check=0;
	if(!isSorted(arr,size)){
	selectionSort(arr,size);}
	if(arr[size-1]>size || arr[0]<1)
	return(-1);               ///   eroor 
	for(j=1;j<=size;j++){
	check=0;
	for(i=0;i<size;i++){
	if(arr[i]==j){
	check=check+1;}}
	if(check==0){
	check=j;
	j=size;}}
	return(check);}

void findPairsWithSum(int arr[], int size, int sum){
    int solution=0,i,j;
    for(i=0;i<size-1;i++){  // size-1 because it have no other element so sum with
        for(j=i+1;j<size;j++){
            if(sum==arr[i]+arr[j]){
                if(0==solution){
                    printf("%d=",sum);
                }
                else{
                    printf(";");
                }
                printf("{%d,%d}",arr[i],arr[j]);
                solution=1;
            }
        }
    }
    if(0==solution){
        printf("THERE IS NO PAIR!!");
    }
}
void findSubArrayWithSum(int arr[], int size, int sum){
int check,i,j;
for(i=0;i<size-1;i++){
    check=arr[i];
    for(j=i+1;j<size;j++){
    check=check+arr[j];
    if(check==sum){
    printf("%d %d",arr[i],arr[j]);
    j=size;i=size;}
	if(i==size)
	printf("eroor");}}}	
void rearrangeAlternatePositiveNegative(int arr[], int size){
  int i,j=1,k=0,nump=0,numn=0,sign=-1;
  int po[size],ne[size];
  for(i=0;i<size;i++){
    if(arr[i]>=0){
      po[nump]=arr[i];nump++;
    }else{
      ne[numn]=arr[i];numn++;
    }
  }
  if(arr[0]<0){
    k++;j--;sign=1;
  }
  
  for(i=1;i<size;i++){
    if(k<numn&&j<nump){
      if(-1==sign){
        arr[i]=ne[k];k++;sign=-sign;
      }
      else{
        arr[i]=po[j];j++;sign=-sign;
      }
    }
    else{
  if(k>=numn){
    arr[i]=po[j];j++;
  }else if(j>=nump) {
    arr[i]=ne[k];k++;
  }
  }
  
  

}}	
int findMajorityElement(int arr[], int size){
int check=0,i,j;
    for(i=0;i<size;i++){
    	check=0;
	for(j=0;j<size;j++){
	if(arr[i]==arr[j]){
		check=check+1;}}
	if(check>size/2)
	return(arr[i]);}
	return(-1);}
int longestIncreasingSubsequence(int arr[], int size){
	int length[size],i,j;
	length[0]=1;
	for(i=1;i<size;i++){
	length[i]=1;
	for(j=0;j<i;j++){
		if(arr[j]<arr[i] && arr[j]>arr[j-1]){
		length[i]=1+length[i];}}}
return(findMax(length,size));}
void findDuplicates(int arr[], int size){
    int temp[size];
    Equality(arr,temp,size);
    bubbleSort(temp,size);
    printf("duplicate elements in the array are :{");
    int are=0,i;
    for(i=0;i<size;i++){
        if(0==i){
            if(temp[0]==temp[1]){
                printf("(%d)",temp[i]);
                are =1;
            }
        }
        else if(temp[i]==temp[i+1] && temp[i]!=temp[i-1]){
            printf("(%d)",temp[i]);
            are=1;
        }
    }
    if(0==are){
        printf("none");
    }
   printf("}");

}
void  findIntersection(int arr1[], int size1, int arr2[], int size2){
   int temp1[size1],temp2[size2];
   Equality(arr1,temp1,size1);
   Equality(arr2,temp2,size2);
  
   size1=RemoveDuplicates(temp1,size1);
   size2=RemoveDuplicates(temp2,size2);
   bubbleSort(temp1,size1);
   bubbleSort(temp2,size1);
   printf("THE INTERSACTION OF THE TWO ARRAYS IS :{");
   int ch=0,i,j;
  
   for(i=0;i<size1;i++){
    for(j=0;j<size2;j++){
        if(temp1[i]==temp2[j]){
            printf("%d,",temp1[i]);ch=1;
            break;
        }
    }
   }
   if(0==ch){
    printf("NONE");
   }
   else{
    printf("}");
   }
}
void findUnion(int arr1[], int size1, int arr2[], int size2){
int arr[size1+size2],i,size3,j=0;
for(i=0;i<size1;i++){
	arr[i]=arr1[i];
}
for(i=size1;i<size1+size2;i++){
	arr[i]=arr2[j];
	j++;
}
size3=RemoveDuplicates(arr,size1+size2);
for(i=0;i<size3;i++)
printf("%d",arr[i]);
}



			

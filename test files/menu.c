#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <math.h>
#include"string.h"
#include"number.h"
#include"array.h"
#include"matrix.h"
int main()
{
	int i,j;
    int lib,class,mod,num,a,b;
    do
    {
        printf("Welcome to the project menu, please select One of the choices above:\n 1- Number Operations Library .\n 2- Arrays Operations Library .\n 3- Matrices Operations Library .\n 4- Strings Operations Library .\n 5- Exit . \nPlease choose the number corresponding to your deed:\n ");
        scanf("%d",&lib);
        while(lib<1||lib>5)
        {
            printf("invalid choice,please select One of the Choices above:\n 1- Number Operations Library .\n 2- Arrays Operations Library .\n 3- Matrices Operations Library .\n 4- Strings Operations Library .\n 5- Exit .\nCHOICE:");
            scanf("%d",&lib);
        }
        switch(lib)
        {
            case 1:
                printf("please select One of the classes above:\n 1- Basic Number Operations .\n 2- Intermediate Number Operations .\n 3- Advanced Number Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>3)
                {
                    printf("invalid choice,please select One of the Choices above:\n 1- Basic Number Operations .\n 2- Intermediate Number Operations .\n 3- Advanced Number Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                    printf("please select One of the modules above:\n 1- Sum of Digits .\n 2- Reverse Number .\n 3- Palindrome .\n 4- Prime . \n 5- Greatest Common Divisor (GCD) .\n 6- Least Common Multiple (LCM) .\n 7- Factorial .\n 8- Even/Odd .\nMODULE:");
                    scanf("%d",&mod);
                    while(mod<1||mod>8)
                    {
                        printf("invalid choice, please select One of the modules above:\n 1- Sum of Digits .\n 2- Reverse Number .\n 3- Palindrome .\n 4- Prime . \n 5- Greatest Common Divisor (GCD) .\n 6- Least Common Multiple (LCM) .\n 7- Factorial .\n 8- Even/Odd .\nMODULE:");
                        scanf("%d",&mod);
                    }
                    switch(mod)
                    {
                        case 1:
                            printf("\n (sum of digits)\nenter your number:");
                            scanf("%d",&num);
                            printf("sum of digits=%d\n\n",sumofdigit(num));
                            break;
                        case 2:
                            printf("\n (reverse number)\nenter your number:");
                            scanf("%d",&num);
                            printf("reverse number=%d\n\n",reversenumber(num));
                            break;
                        case 3:
                            printf("\n (palindrome)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s palindrome\n\n",ispalindromnumber(num)? "is":"is not");
                            break;
                        case 4:
                            printf("\n (prime)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s prime\n\n",isPrime(num)? "is":"is not");
                            break;
                        case 5:
                            printf("\n Greatest Common Divisor (GCD) \nenter your number a:");
                            scanf("%d",&a);
                            printf("enter your number b:");
                            scanf("%d",&b);
                            printf("GCD=%d\n\n",gcd(a,b));
                            break;
                        case 6:
                            printf("\n Least Common Multiple (LCM) \nenter your number a:");
                            scanf("%d",&a);
                            printf("enter your number b:");
                            scanf("%d",&b);
                            printf("LCM=%d\n\n",lcm(a,b));
                            break;
                        case 7:
                            printf("\n (Factorial) \nenter your number:");
                            scanf("%d",&num);
                            printf("Factorial=%ld\n\n",longfactorial(num));
                            break;
                        case 8:
                            printf("\n (even|odd)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number is %s.\n\n",iseven(num)? "even":"odd");
                            break;
                    }
                    break;
                case 2:
                    printf("please select One of the modules above:\n 1- Prime Factorization  .\n 2- Armstrong Number .\n 3- Fibonacci Sequence .\n 4- Sum of Divisors . \n 5- Perfect Number .\n 6- Magic Number .\n 7- Automorphic Number .\nMODULE:");
                    scanf("%d",&mod);
                    while(mod<1||mod>7)
                    {
                        printf("invalid choice, please select One of the modules above:\n 1- Prime Factorization  .\n 2- Armstrong Number .\n 3- Fibonacci Sequence .\n 4- Sum of Divisors . \n 5- Perfect Number .\n 6- Magic Number .\n 7- Automorphic Number .\nMODULE:");
                        scanf("%d",&mod);
                    }
                    switch (mod)
                    {
                        case 1:
                            printf("\n (Prime Factorization)\nenter your number:");
                            scanf("%d",&num);
                            primefactorization(num);
                            break;
                        case 2:
                            printf("\n (Armstrong Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s an Armstrong Number.\n\n",isArmstrong(num)? "is":"is not");
                            break;
                        case 3:
                            printf("\n (Fibonacci Sequence)\nenter your number of terms(>2):");
                            scanf("%d",&num);
                            fibonacciSeries(&num);
                            break;
                        case 4:
                            printf("\n (Sum of Divisors)\nenter your number:");
                            scanf("%d",&num);
                            printf("Sum of Divisors=%d\n\n",sumofDivisors(num));
                            break;
                        case 5:
                            printf("\n (Perfect Numbe)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a perfect Number.\n\n",isPerfect(num)? "is":"is not");
                            break;
                        case 6:
                            printf("\n (Magic Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Magic Number.\n\n",isMagic(num)? "is":"is not");
                            break;
                        case 7:
                            printf("\n (Automorphic Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s an Automorphic Number.\n\n",isAutomorphic(num)? "is":"is not");
                            break;
                    }
                    break;
                case 3:
                    printf("please select One of the modules above:\n 1- Binary Conversion  .\n 2- Narcissistic Number .\n 3- Square Root Calculation .\n 4- Exponentiation . \n 5- Happy Number .\n 6- Abundant Number .\n 7- Deficient Number .\n 8- Sum of Fibonacci Even Numbers .\n 9- Harshad Number .\n 10- Catalan Number Calculation .\n 11-Pascal Triangle .\n 12- Bell Number .\n 13- Kaprekar Number .\n 14- Smith Number .\n 15- Sum of Prime Numbers .\nMODULE:");
                    scanf("%d",&mod);
                    while(mod<1||mod>15)
                    {
                        printf("invalid choice, please select One of the modules above:\n 1- Binary Conversion  .\n 2- Narcissistic Number .\n 3- Square Root Calculation .\n 4- Exponentiation . \n 5- Happy Number .\n 6- Abundant Number .\n 7- Deficient Number .\n 8- Sum of Fibonacci Even Numbers .\n 9- Harshad Number .\n 10- Catalan Number Calculation .\n 11-Pascal Triangle .\n 12- Bell Number .\n 13- Kaprekar Number .\n 14- Smith Number .\n 15- Sum of Prime Numbers .\nMODULE:");
                        scanf("%d",&mod);
                    }
                    switch (mod)
                    {
                        case 1:
                            printf("\n (Binary Conversion)\nenter your number:");
                            scanf("%d",&num);
                            toBinary(&num);
                            break;
                        case 2:
                            printf("\n (Narcissistic Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Narcissistic Number.\n\n",isArmstrong(num)? "is":"is not");
                            break;
                        case 3:
                            printf("\n (Square Root Calculation)\nenter your number:");
                            scanf("%d",&num);
                            printf("Square Root Approximation=%lf\n\n",sqrtApprox(num));
                            break;
                        case 4:
                            printf("\n (Exponentiation)\nenter your base:");
                            scanf("%d",&b);
                            printf("enter the exponent:");
                            scanf("%d",&a);
                            printf("Exponentiation: (%d^%d)=%lf\n\n",b,a,power(b,a));
                            break;
                        case 5:
                            printf("\n (Happy Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Happy Number.\n\n",isHappy(num)? "is":"is not");
                            break;
                        case 6:
                            printf("\n (Abundant Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s an Abundant Number.\n\n",isAbundant(num)? "is":"is not");
                            break;
                        case 7:
                            printf("\n (Deficient Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Deficient Number.\n\n",isdeficient(num)? "is":"is not");
                            break;
                        case 8:
                            printf("\n (Sum of Fibonacci Even Numbers)\nenter the number of nth term:");
                            scanf("%d",&num);
                            printf("Sum of Fibonacci Even Numbers=%d\n\n",sumEvenFibonacci(num));
                            break;
                        case 9:
                            printf("\n (Harshad Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Harchad Number.\n\n",isHarshad(num)? "is":"is not");
                            break;
                        case 10:
                            printf("\n (Catalan Number)\nenter the number of nth Catalan number:");
                            scanf("%d",&num);
                            printf("%dth Catalan Number=%lu\n\n",num,catalanNumber(num));
                            break;
                        case 11:
                            printf("\n (Pascal Triangle)\nenter the number of rows in the triangle:");
                            scanf("%d",&num);
                            pascalTriangle(num);
                            break;
                        case 12:
                            printf("\n (Bell Number)\nenter the number of the nth bell number:");
                            scanf("%d",&num);
                            printf("%dth Bell Number=%lu\n\n",num,bellNumber(num));
                            break;
                        case 13:
                            printf("\n (Kaprekar Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Kaprekar Number.\n\n",isKaprekar(num)? "is":"is not");
                            break;
                        case 14:
                            printf("\n (Smith Number)\nenter your number:");
                            scanf("%d",&num);
                            printf("the number %s a Smith Number.\n\n",isSmith(num)? "is":"is not");
                            break;
                        case 15:
                            printf("\n (Sum Of Prime Numbers)\nenter the number n:");
                            scanf("%d",&num);
                            printf("Sum Of Prime Numbers=%d\n\n",sumofprime(num));
                            break;
                    }
                    break;
                }
                break;
            case 2:
                printf("please select One of the classes above:\n 1- Basic Arrays Operations .\n 2- Intermediate Arrays Operations .\n 3- Sorting Algorithms .\n 4- Advanced Arrays Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>4)
                {
                    printf("invalid choice, please select One of the classes above:\n 1- Basic Arrays Operations .\n 2- Intermediate Arrays Operations .\n 3- Sorting Algorithms .\n 4- Advanced Arrays Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                        printf("please select One of the modules above:\n 1- Initialize Array  .\n 2- Print Array .\n 3- Find Maximum .\n 4- Find Minimum . \n 5- Calculate Sum .\n 6- Calculate Average .\n 7- Check if Sorted .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>7)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Initialize Array  .\n 2- Print Array .\n 3- Find Maximum .\n 4- Find Minimum . \n 5- Calculate Sum .\n 6- Calculate Average .\n 7- Check if Sorted .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int size,value;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("Enter the value to initialize the array with: ");
                                scanf("%d",&value);
                                initializeArray(arr,size,value);
                                printf("Initialized array: \n");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int size,value;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("Enter the value to initialize the array with: ");
                                scanf("%d",&value);
                                initializeArray(arr,size,value);
                                printf("Initialized array: \n");
                                printArray(arr,size);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                scanf("%d",&arr[i]);
                                }
                                printf("Maximum value is: %d\n",findMax(arr,size));
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Minimum value is: %d\n",findMin(arr,size));
                                break;
                            }
                            case 5:
                            {
                            	int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("the sum of the array is: %d\n",sumArray(arr,size));

                                break;
                            }
                            case 6:
                            {int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("the average of the array is: %d\n",averageArray(arr,size));
                                

                                break;
                            }
                            case 7:
                            {
                            	int arr[100],size;
							printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("the array is sorted? 1 for Yes 0 for No : %d\n",isSorted(arr,size));

                                break;
                            }
                        }
                        break;
                    case 2:
                        printf("please select One of the modules above:\n 1- Reverse Array  .\n 2- Count Even and Odd Numbers .\n 3- Find Second Largest .\n 4- Find Frequency of Elements . \n 5- Remove Duplicates .\n 6- Binary Search  .\n 7- Linear Search .\n 8- Left Shift Array .\n 9- Right Shift Array .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>9)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Reverse Array  .\n 2- Count Even and Odd Numbers .\n 3- Find Second Largest .\n 4- Find Frequency of Elements . \n 5- Remove Duplicates .\n 6- Binary Search  .\n 7- Linear Search .\n 8- Left Shift Array .\n 9- Right Shift Array .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                reverseArray(arr,size);
                                printf("Reversed array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size,evenCount,oddCount;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                countEvenOdd(arr,size,&evenCount,&oddCount);
                                printf("Even numbers: %d\n",evenCount);
                                printf("Odd numbers: %d\n",oddCount);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Second largest value is: %d\n",secondLargest(arr,size));
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                elementFrequency(arr,size);
                                break;
                            }
                            case 5:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                size=RemoveDuplicates(arr,size);
                                printf("Array after removing duplicates: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 6:
                            {int arr[100],size,target;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("write the target");
                                scanf("%d",&target);
								printf("the target is in the index %d",binarySearch(arr,size,target));

                                break;
                            }
                            case 7:
                            {
                                int arr[100],size,target;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("write the target");
                                scanf("%d",&target);
								printf("the target is in the index %d",linearSearch(arr,size,target));
                                break;
                            }
                            case 8:
                            {int arr[100],size,rotations;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("write the rotations");
                                scanf("%d",&rotations);
                                leftShift(arr,size, rotations);
                                for(i=0;i<size;i++)
                                {
                                    printf("%d",arr[i]);
                                }
                                break;
                            }
                            case 9:
                            {
                                int arr[100],size,rotations;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("write the rotations");
                                scanf("%d",&rotations);
                                rightShift(arr,size, rotations);
                                for(i=0;i<size;i++)
                                {
                                    printf("%d",arr[i]);
                                }
                                break;
                            }
                        }
                        break;
                    case 3:
                        printf("please select One of the modules above:\n 1- Bubble Sort  .\n 2- Selection Sort .\n 3- Insertion Sort .\n 4- Merge Sort . \n 5- Quick Sort .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>5)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Bubble Sort  .\n 2- Selection Sort .\n 3- Insertion Sort .\n 4- Merge Sort . \n 5- Quick Sort .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                bubbleSort(arr,size);
                                printf("Sorted array: ");
                                 
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                selectionSort(arr,size);
                                printf("Sorted array: ");
                                
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                insertionSort(arr,size);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                             
							   break;
                            }
                            case 4:
                            {
                            	int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                merge(arr,size);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");

                                break;
                            }
                            case 5:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                int i;
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                quickSort(arr,0,size-1);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                        }
                        break;
                    case 4:
                        printf("please select One of the modules above:\n 1- Find Missing Number .\n 2- Find Pairs with Given Sum .\n 3- Subarray with Given Sum .\n 4- Rearrange Positive and Negative Numbers  . \n 5- Find Majority Element .\n 6- Longest Increasing Subsequence .\n 7- Find Duplicates .\n 8- Find Intersection of Two Arrays .\n 9- Find Union of Two Arrays .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>9)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Find Missing Number .\n 2- Find Pairs with Given Sum .\n 3- Subarray with Given Sum .\n 4- Rearrange Positive and Negative Numbers  . \n 5- Find Majority Element .\n 6- Longest Increasing Subsequence .\n 7- Find Duplicates .\n 8- Find Intersection of Two Arrays .\n 9- Find Union of Two Arrays .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100], size;
                                printf("Enter array size (n-1): ");
                                scanf("%d", &size);
                                printf("Enter array elements (from 1 to n): ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d", &arr[i]);
                                }
                                printf("The missing number is: %d\n", findMissingNumber(arr, size));
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size,sum;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Enter the target sum: ");
                                scanf("%d",&sum);
                                findPairsWithSum(arr,size,sum);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size,sum;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Enter the target sum: ");
                                scanf("%d",&sum);
                                findSubArrayWithSum(arr,size,sum);
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                rearrangeAlternatePositiveNegative(arr,size);
                                printf("Rearranged array: ");
                                for( i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 5:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                int result=findMajorityElement(arr,size);
                                if(result==-1) printf("No majority element found\n");
                                else printf("Majority element is: %d\n",result);
                               break; 
                            }
                            case 6:
                            {
							int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("the longestIncreasingSubsequence is %d ",longestIncreasingSubsequence(arr,size));

                                break;
                            }
                            case 7:
                            {int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                             findDuplicates(arr,size);
                                break;
                            }
                            case 8:
                            {
                            	int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                int arr1[100],size1;
                                printf("Enter array size: ");
                                scanf("%d",&size1);
                                printf("Enter array elements: ");
                                for( i=0;i<size1;i++)
                                {
                                    scanf("%d",&arr1[i]);
                                }
                            	findIntersection(arr, size, arr1,size1);

                                break;
                            }
                            case 9:
                            {
							int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                int arr1[100],size1;
                                printf("Enter array2 size: ");
                                scanf("%d",&size1);
                                printf("Enter array2 elements: ");
                                for( i=0;i<size1;i++)
                                {
                                    scanf("%d",&arr1[i]);
                                }
							printf("THE Union OF THE TWO ARRAYS IS :{");
                               findUnion(arr, size, arr1,size1);
                               printf("}");
                                break;
                            }
                        }
                        break;
                }
                break;
            case 3:
                printf("please select One of the classes above:\n 1- Basic Matrix Functions .\n 2- Matrix Arithmetic .\n 3- Matrix Properties and Checks .\n 4- Matrix Operations .\n 5- Advanced Matrix Functions .\n 6- Special Matrix Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>6)
                {
                    printf("invalid choice, please select One of the classes above:\n 1- Basic Matrix Functions .\n 2- Matrix Arithmetic .\n 3- Matrix Properties and Checks .\n 4- Matrix Operations .\n 5- Advanced Matrix Functions .\n 6- Special Matrix Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                        printf("please select One of the modules above:\n 1- Initialize Matrix  .\n 2- Print Matrix .\n 3- Input Matrix .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>3)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Initialize Matrix  .\n 2- Print Matrix .\n 3- Input Matrix .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols];
                                initializeMatrix(rows,cols,matrix,value);
                                printf("Initialized Matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        printf("%d ",matrix[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                printf("Enter matrix elements:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for(j=0;j<cols;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                printf("The matrix is:\n");
                                printMatrix(rows,cols,matrix);
                                printf("\n");
                                break;
                            }
                            case 3:
                            { int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                printf("Enter matrix elements:\n");
                                inputMatrix(rows,cols,matrix);
                                printf("The matrix is:\n");
                                printMatrix(rows,cols,matrix);
                                printf("\n");

                                break;
                            } 
                        }
                        break;
                    case 2:
                        printf("please select One of the modules above:\n 1- Matrix Addition  .\n 2- Matrix Subtraction .\n 3- Matrix Multiplication .\n 4- Scalar Multiplication .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>4)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Matrix Addition  .\n 2- Matrix Subtraction .\n 3- Matrix Multiplication .\n 4- Scalar Multiplication .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                addMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after addition:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                subtractMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after subtraction:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 3:
                            {
                            	 int rows1,cols1,rows2,cols2;
                                printf("Enter number of rows1: ");
                                scanf("%d",&rows1);
                                printf("Enter number of columns1: ");
                                scanf("%d",&cols1);
                                 printf("Enter number of rows2: ");
                                scanf("%d",&rows2);
                                printf("Enter number of columns2: ");
                                scanf("%d",&cols2);
                                int mat1[rows1][cols1],mat2[rows2][cols2],result[rows1][cols2];
                                printf("Enter elements of the first matrix:\n");
                                inputMatrix(rows1,cols1,mat1);
                                printf("Enter elements of the second matrix:\n");
                                inputMatrix(rows2,cols2,mat2);
                                 multiplyMatrices( rows1,  cols1,  mat1,  rows2,  cols2,  mat2,  result);
                                printMatrix(rows1,cols2,result);
                                break;
                            }
                            case 4:
                            { int rows,cols,scalar;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols];
                                printf("Enter elements of the  matrix:\n");
                                  inputMatrix(rows,cols,mat1);
                                  printf("Enter the sclar");
                                  scanf("%d",&scalar);
                                scalarMultiplyMatrix( rows,  cols,  mat1,  scalar);
                                printMatrix(rows,cols,mat1);

                                break;
                            }
                        }
                        break;
                    case 3:
                        printf("please select One of the modules above:\n 1- Check if Square Matrix .\n 2- Check if Identity Matrix .\n 3- Check if Diagonal Matrix .\n 4- Check if Symmetric Matrix .\n 5- Check if Upper Triangular Matrix .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>5)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Check if Square Matrix .\n 2- Check if Identity Matrix .\n 3- Check if Diagonal Matrix .\n 4- Check if Symmetric Matrix .\n 5- Check if Upper Triangular Matrix .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                if(isSquareMatrix(rows,cols))
                                {
                                    printf("The matrix is a square matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not a square matrix.\n");
                                } 
                                break;
                            }
                            case 2:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isIdentityMatrix(size,matrix))
                                {
                                    printf("The matrix is an identity matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not an identity matrix.\n");
                                }
                                break;
                            }
                            case 3:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isDiagonalMatrix(size,matrix))
                                {
                                    printf("The matrix is a diagonal matrix.\n");
                                } 
                                else
                                {
                                    printf("The matrix is not a diagonal matrix.\n");
                                }
                                break;
                            }
                            case 4:
                            {int size,a;
                                printf("Enter size: ");
                                scanf("%d",&size);
                                
                                int mat1[size][size];
                                printf("Enter elements of the  matrix:\n");
                                  inputMatrix(size,size,mat1);
                                  a= isSymmetricMatrix( size,  mat1);
                                  printf("%d",a);

                                break;
                            }
                            case 5:
                            {int size,a;
                                printf("Enter size: ");
                                scanf("%d",&size);
                                
                                int mat1[size][size];
                                printf("Enter elements of the  matrix:\n");
                                  inputMatrix(size,size,mat1);
                                  a= isUpperTriangular( size,  mat1);
                                  printf("%d",a);

                                break;
                            }
                        }
                        break;
                    case 4:
                        printf("please select One of the modules above:\n 1- Transpose Matrix .\n 2- Determinant of a Matrix  .\n 3- Matrix Power .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>3)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Transpose Matrix .\n 2- Determinant of a Matrix  .\n 3- Matrix Power .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols],result[cols][rows];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<rows;i++)
                                {
                                    for( j=0;j<cols;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                transposeMatrix(rows,cols,matrix,result);
                                printf("Transpose of the matrix:\n");
                                for( i=0;i<cols;i++)
                                {
                                    for( j=0;j<rows;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                break;
                            }
                            case 2:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                int det=determinantMatrix(size,matrix);
                                printf("Determinant of the matrix: %d\n",det);
                                break;
                            }
                            case 3:
                            {int size,  power;
                                printf("Enter size: ");
                                scanf("%d",&size);
                                 int result[size][size];
                                int mat1[size][size];
                                printf("Enter elements of the  matrix:\n");
                                  inputMatrix(size,size,mat1);
                                  printf("Enter power of the  matrix:\n");
                                  scanf("%d",&power);
                                  matrixPower( size,  mat1,  power,  result);
                                   printMatrix(size,size,result);
                                  

                                break;
                            }
                         
                        }
                        break;
                    case 5:
                        printf("please select One of the modules above:\n 1- Cofactor Matrix .\n 2- Adjoint Matrix  .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>4)
                        {
                            printf("please select One of the modules above:\n 1- Cofactor Matrix .\n 2- Adjoint Matrix  .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size],cofactor[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                cofactorMatrix(size,matrix,cofactor);
                                printf("Cofactor matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        printf("%d ",cofactor[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size],adjoint[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                adjointMatrix(size,matrix,adjoint);
                                printf(" adjoint matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        printf("%d ",adjoint[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;

                                break;
                            }
                    
                        }
                        break;
                    case 6:
                        printf("please select One of the modules above:\n 1- Find Trace of a Matrix .\n 2- Rotate Matrix 90 Degrees  .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>3)
                        {
                            printf("please select One of the modules above:\n 1- Find Trace of a Matrix .\n 2- Rotate Matrix 90 Degrees  .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                            	 int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size],cofactor[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                printf("Trace of matrix is: %d",traceMatrix( size,  matrix));
                                
                                break;

                               
                            }
                            case 2:
                            {
                            	 int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size],cofactor[size][size];
                                printf("Enter elements of the matrix:\n");
                                for( i=0;i<size;i++)
                                {
                                    for( j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }rotateMatrix90( size,  matrix);
                                printf("Matrix after 90degree rotate is :");
                                 printMatrix(size,size  ,matrix);
                                

                                break;
                            }
                            
                        }
                        break;
                }
                break;
            case 4:
                printf("please select One of the classes above:\n 1- Basic String Operations .\n 2- Intermediate String Operations .\n 3- Advanced String Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>3)
                {
                    printf("invalid choice, please select One of the classes above:\n 1- Basic String Operations .\n 2- Intermediate String Operations .\n 3- Advanced String Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                        printf("please select One of the modules above:\n 1- Calculate String Length .\n 2- Copy String .\n 3- Concatenate Strings .\n 4- Compare Strings .\n 5- Check if Empty .\n 6- Reverse a String .\n 7- Convert to Uppercase .\n 8- Convert to Lowercase .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>8)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Calculate String Length .\n 2- Copy String .\n 3- Concatenate Strings .\n 4- Compare Strings .\n 5- Check if Empty .\n 6- Reverse a String .\n 7- Convert to Uppercase .\n 8- Convert to Lowercase .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {

                                break;
                            }
                            case 2:
                            {

                                break;
                            }
                            case 3:
                            {

                                break;
                            }
                            case 4:
                            {

                                break;
                            }
                            case 5:
                            {

                                break;
                            }
                            case 6:
                            {

                                break;
                            }
                            case 7:
                            {

                                break;
                            }
                            case 8:
                            {

                                break;
                            }
                        }
                        break;
                    case 2:
                        printf("please select One of the modules above:\n 1- Palindrome .\n 2- Count Vowels and Consonants .\n 3- Find Substring .\n 4- Remove Whitespaces .\n 5- Anagram .\n 6- Character Frequency .\n 7- Count Words .\n 8- Remove Duplicate .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>8)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Palindrome .\n 2- Count Vowels and Consonants .\n 3- Find Substring .\n 4- Remove Whitespaces .\n 5- Anagram .\n 6- Character Frequency .\n 7- Count Words .\n 8- Remove Duplicate .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {

                                break;
                            }
                            case 2:
                            {

                                break;
                            }
                            case 3:
                            {
                                
                                break;
                            }
                            case 4:
                            {

                                break;
                            }
                            case 5:
                            {

                                break;
                            }
                            case 6:
                            {

                                break;
                            }
                            case 7:
                            {

                                break;
                            }
                            case 8:
                            {

                                break;
                            }
                        }
                        break;
                    case 3:
                        printf("please select One of the modules above:\n 1- String Compression .\n 2- Find Longest Word .\n 3- String Rotation Check .\n 4- Count Specific Character .\n 5- Find and Replace .\n 6- Longest Palindromic Substring .\n 7- String Permutations .\n 8- Split String .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>8)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- String Compression .\n 2- Find Longest Word .\n 3- String Rotation Check .\n 4- Count Specific Character .\n 5- Find and Replace .\n 6- Longest Palindromic Substring .\n 7- String Permutations .\n 8- Split String .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {

                                break;
                            }
                            case 2:
                            {

                                break;
                            }
                            case 3:
                            {
                                
                                break;
                            }
                            case 4:
                            {

                                break;
                            }
                            case 5:
                            {

                                break;
                            }
                            case 6:
                            {

                                break;
                            }
                            case 7:
                            {

                                break;
                            }
                            case 8:
                            {

                                break;
                            }
                        }
                        break;
                }
                break;
            
            case 5:
                return 0;
                break;
                break;
        }
    }
    while(1);  
}
   


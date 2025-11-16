#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}


int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 2 : Use that memory
    iRet = SumOdd(ptr,iLength);
    
    printf("Summation of odd elements is : %d\n",iRet);

    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}


/*


-------------- C++ Program --------------- 

#include<iostream>
using namespace std;

int SumOdd(int Arr[], int iSize)
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iSum += Arr[i];
        }
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    
    cout << "Enter the number of elements : ";
    cin >> iLength;

    int *Arr = new int[iLength];

    cout << "Enter the elements : \n";
    for(int i = 0; i < iLength; i++)
    {
        cin >> Arr[i];
    }

    int iRet = SumOdd(Arr, iLength);

    cout << "Summation of odd elements is : " << iRet << endl;

    delete[] Arr;

    return 0;
}


 --------------- Java Program ------------

import java.util.*;

class Program {
    public static int SumOdd(int[] Arr) {
        int sum = 0;
        for(int value : Arr) {
            if(value % 2 != 0) {
                sum += value;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int n = sobj.nextInt();

        int[] Arr = new int[n];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < n; i++) {
            Arr[i] = sobj.nextInt();
        }

        int result = SumOdd(Arr);

        System.out.println("Summation of odd elements is : " + result);

        sobj.close();
    }
}


--------------- JavaScript Program ---------------

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

function SumOdd(arr) {
    let sum = 0;
    for (let num of arr) {
        if (num % 2 !== 0) {
            sum += num;
        }
    }
    return sum;
}

readline.question("Enter the number of elements: ", (n) => {
    n = parseInt(n);

    readline.question("Enter the elements (space separated): ", (line) => {
        let arr = line.split(" ").map(Number);

        let result = SumOdd(arr);
        console.log("Summation of odd elements is :", result);

        readline.close();
    });
});


# --------------- Python Program ---------------

def SumOdd(arr):
    total = 0
    for num in arr:
        if num % 2 != 0:
            total += num
    return total

iLength = int(input("Enter the number of elements: "))

print("Enter the elements: ")
arr = list(map(int, input().split()))

result = SumOdd(arr)

print("Summation of odd elements is:", result)



*/
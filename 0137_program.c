/******************************************************
 ********************* C PROGRAM **********************
 ******************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr) // iptr == NULL
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("\nEnter the value that you want to search : \n");
    scanf("%d",&iValue);

    bRet = Search(iPtr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",iValue);
    }

    free(iPtr);

    return 0;
}



/******************** C++ PROGRAM ********************
 
 /*
#include<iostream>
using namespace std;

bool Search(int Arr[], int iSize, int iNo)
{
    if(Arr == nullptr || iSize <= 0)
    {
        return false;
    }

    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iLength = 0, iValue = 0;

    cout<<"Enter number of elements : "<<endl;
    cin>>iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements : "<<endl;
    for(int i = 0; i < iLength; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>Arr[i];
    }

    cout<<"Enter the value that you want to search : "<<endl;
    cin>>iValue;

    bool bRet = Search(Arr, iLength, iValue);

    if(bRet)
        cout<<iValue<<" is present in the array"<<endl;
    else
        cout<<iValue<<" is not present in the array"<<endl;

    delete[] Arr;
    return 0;
}
 */



//******************** JAVA PROGRAM *******************
 
 /*
import java.util.*;

class Program {
    public static boolean Search(int[] Arr, int value)
    {
        if(Arr == null || Arr.length <= 0)
        {
            return false;
        }

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == value)
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int n = sc.nextInt();

        int[] Arr = new int[n];

        System.out.println("Enter the elements : ");
        for(int i = 0; i < n; i++)
        {
            System.out.print("Enter number "+(i+1)+" : ");
            Arr[i] = sc.nextInt();
        }

        System.out.println("Enter the value to search : ");
        int value = sc.nextInt();

        boolean result = Search(Arr, value);

        if(result)
            System.out.println(value + " is present in the array");
        else
            System.out.println(value + " is not present in the array");

        sc.close();
    }
}



 ********************* PYTHON PROGRAM *****************

"""
def Search(arr, key):
    if arr is None or len(arr) <= 0:
        return False

    for value in arr:
        if value == key:
            return True
    return False


def main():
    iLength = int(input("Enter number of elements : "))

    arr = []

    print("Enter the elements : ")
    for i in range(iLength):
        val = int(input(f"Enter number {i+1}: "))
        arr.append(val)

    iValue = int(input("Enter the value you want to search : "))

    result = Search(arr, iValue)

    if result:
        print(f"{iValue} is present in the array")
    else:
        print(f"{iValue} is not present in the array")


if __name__ == '__main__':
    main()
"""

 */


#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int iLength ; 
        int *Arr;

        ArrayX(int *A,int B)
        {
            Arr = A;
            iLength = B;
        }
            
        void Accept()
        {
             cout<<"Enter elements : \n";

             for(int i = 0; i < iLength; i++ )
             {
                cin>>Arr[i];
             }
        }

        void Display()
        {
             cout<<" elements are: \n";

             for(int i = 0; i < iLength; i++ )
             {
                cout<<Arr[i]<<"\t";
             }
        }
};


int main()
{
    int *ptr = NULL;
    int iSize = 0;

    cout<<"Enter SIze of Array \n";
    cin>>iSize;

    ptr = new int[iSize];

    ArrayX Aobj(ptr,iSize);

    Aobj.Accept();
    Aobj.Display();

    delete[] ptr;

    return 0;


}
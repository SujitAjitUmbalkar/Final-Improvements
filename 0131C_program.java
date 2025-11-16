import java.util.Scanner;

class ArrayX
{
    int Arr1[];
    Scanner Sobj = new Scanner(System.in);

    public ArrayX(int A[])
    {
        Arr1 = A;
    }

   public void Accept()
    {
        System.out.println("Enter Elements : \n");

        for(int i = 0 ; i < Arr1.length; i++)
        {
            Arr1[i] = Sobj.nextInt();
        }
    }

    
   public void Display()
    {
        System.out.println("Array Elements are : \n");

        for(int i = 0 ; i < Arr1.length; i++)
        {
            System.out.println(Arr1[i]+"\t");
        }
    }
}


class program0131
{
    public static void main(String Arg[])
    {
        Scanner Sobj = new Scanner(System.in);
        int iSize = 0;

        System.out.println("Enter the size of array : \n");
        iSize = Sobj.nextInt();

        int Arr[] = new int[iSize];

        ArrayX Aobj = new ArrayX(Arr);
        Aobj.Accept();
        Aobj.Display();  

        Sobj.close();

    }
}
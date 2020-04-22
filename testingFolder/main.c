
//

#include <stdio.h>


/*
int main(int argc, const char * argv[]) {

    int arr1[10], arr2[10], arr3[10];
     int i,j=0,k=0,n;
     
     
        printf("\n\nSeparate odd and even integers in separate arrays:\n");
        printf("------------------------------------------------------\n");

        printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
    
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
             {
           printf("element - %d : ",i);
           scanf("%d",&arr1[i]);
         }

     for(i=0;i<n;i++)
     {
     if (arr1[i]%2 == 0)
     {
        arr2[j] = arr1[i];
        j++;
     }
     else
     {
        arr3[k] = arr1[i];
        k++;
     }
     }

     printf("\nThe Even elements are : \n");
     for(i=0;i<j;i++)
     {
     printf("%d ",arr2[i]);
     }

     printf("\nThe Odd elements are :\n");
     for(i=0;i<k;i++)
     {
     printf("%d ", arr3[i]);
     }
     printf("\n\n");
    */
 
 








    /*
 
    int arr[10], arrOdd[10], arrEven[10];
    int i, n, even=0, odd=0;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Element %d --> ",i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++){
        if (arr[i]%2==0) {
            arrEven[even] = arr[i];
            even++;
        }else
            arrOdd[odd] = arr[i];
            odd++;
    }
    printf("Even elements are: ");
    for (i=0; i<even; i++) {
        printf("%d ", arrEven[i]);
    }
    
    printf("\n");
    
    printf("Odd elements are: ");
    for (i=0; i<odd; i++) {
        printf("%d ", arrOdd[i]);
    }
    printf("\n");
    */
    







    
    /*
    int arr1[100];
    int arrEven[100];
    int arrOdd[100];
    int odd,even,i,n;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Element %d --> ",i);
        scanf("%d", &arr1[i]);
    }
    even = arr1[0];
    odd = arr1[0];
    for (i=0; i<n; i++) {
        if (arr1[i]%2==0) {
            even = arr1[i];
            arrEven[i] = even;
        }
        if (arr1[i]%2!=0) {
            odd = arr1[i];
            arrOdd[i] = odd;
        }
    }
    printf("\nEven elements are: ");
    for (i=0; i<n; i++) {
        printf("%d ", arrEven[i]);
    }
    printf("\nOdd elements are: ");
    for (i=0; i<n; i++) {
        printf("%d ", arrOdd[i]);
    }
    
    */
    








    /*
    int arr1[100];
    int min,max,i,n;
    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Element %d --> ",i);
        scanf("%d", &arr1[i]);
    }
    
    min = arr1[0];
    max = arr1[0];
    
    for (i=0; i<n; i++) {
        if (arr1[i]>max) {
            max = arr1[i];
        }
        if (arr1[i]<min) {
            min = arr1[i];
        }
    }
    printf("\n");
    printf("Elements of the array are: ");
    for (i=0; i<n; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("%d is min and %d is max\n", min, max);
    
    */
    
    /*
    int arr[100];
    int i, min, max, n;
    
    
    printf("How many items do you want? ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("Elem %d -> ", i);
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
    for (i=0; i<n; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("\n");
    
    printf("The min is %d and the max is %d\n", min, max);
    
    */
    
    
    
    
    
    
    
    /*
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int i,j,n,dup=1, dupNum=0;
    
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    //getting input from the user
    printf("Enter %d elements \n", n);
    for (i=0; i<n; i++) {
        printf("Elem %d -> ", i);
        scanf("%d", &arr1[i]);
        
    }
    //copying arr1 to arr2
    for (i=0; i<n; i++) {
        arr2[i]=arr1[i];
        arr3[i]=0;
    }
    //checking for uniques and storing info in dup var
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (arr1[i]!=arr2[j]) {
                arr3[j]=dup;
                dup++;
            }
        }
        dup=1;
    }
    //totaling the number of uniques in arr3
    for (i=0; i<n; i++) {
        if (arr3[i]==2) {
            dupNum++;
        }
    }
    printf("The number of unique characters are: %d", dupNum);
    
    printf("\n");
    
    */
    
    
    
    
    
    
    
    
    
    
    /*
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int i,j,n,dup=1, dupNum=0;
    
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    //getting input from the user
    printf("Enter %d elements \n", n);
    for (i=0; i<n; i++) {
        printf("Elem %d -> ", i);
        scanf("%d", &arr1[i]);
        
    }
    //copying arr1 to arr2
    for (i=0; i<n; i++) {
        arr2[i]=arr1[i];
        arr3[i]=0;
    }
    //checking fro duplicates and storing info in dup var
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (arr1[i]==arr2[j]) {
                arr3[j]=dup;
                dup++;
            }
        }
        dup=1;
    }
    //totaling the number of duplicates in arr3
    for (i=0; i<n; i++) {
        if (arr3[i]==2) {
            dupNum++;
        }
    }
    printf("The number of duplicates are: %d", dupNum);
    
    printf("\n");
    
    */
    
    
    
    
    
    
    
    
    
    
    /*
    int arr[100];
    int arr2[100];
    int i, n;
    
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    
    printf("Enter %d elements \n", n);
    
    for (i=1; i<n+1; i++) {
        printf("Elem %d -> ", i);
        scanf("%d", &arr[i]);
        
    }
    
    for (i=1; i<n+1; i++) {
        arr2[i]=arr[i];
    }
    
    printf("arr: ");
    for (i=1; i<n+1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("arr2: ");
    for (i=1; i<n+1; i++) {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    */
    
    
    
    
    
    
    
    
    
    
    /*
    int arr[100];
    int i, sum=0, n;
    
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    
    printf("Enter %d elements \n", n);
    
    for (i=1; i<n+1; i++) {
        printf("Elem %d -> ", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("The sum is: %d", sum);
    printf("\n");
    
    */
    
    
    
    
    
    
    
    
    
    
    
    /*
    int arr[10];
    int i, sum=0;
    
    printf("Enter: \n");
    
    for (i=1; i<11; i++) {
        printf("elem %d -> ",i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    printf("Sum is: %d", sum);
    
    */
    
    
    
    
    
    /*
    int arr[10];
    int i;
    
    printf("Enter elements in to the arr\n");
    
    for (i=1; i<11; i++) {
        printf("Element %d -> ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("You entered: \n");
    for (i=11; i>=1; i--) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    */
    
    
    
    
    
    
    
    
    /*
    int input[10];
    int i;
    
    printf("Enter 10 elements into the array: \n");
 
    for (i=1; i<11; i++) {
        printf("element %d -> ", i);
        scanf("%d", &input[i]);
    }
    
    printf("Elements of the array are: ");
    
    for (i=1; i<11; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");
    
    */
    
    
    
    
    
    
    
    
    
    
    /*
    int rows,i,j,k=1;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    
    for (i=1; i<rows+1; i++) {
        for (j=1; j<i+1; j++)
            printf("%d", k++);
            printf("\n");
        
        
    }
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int rows,i,j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i=1; i<rows+1; i++){
        for(j=1; j<i+1; j++)
        printf("%d", i);
        printf("\n");
    }
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   /*
    int rows,i,j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i=1; i<rows+1; i++) {
        for (j=1; j<i+1 ; j++)
            printf("%d", j);
            printf("\n");
        
    }
    
    printf("\n");
    */
    
    
  /*
    int row;
    int i,j;
    
    printf("Enter number of rows: ");
    scanf("%d", &row);
    
    for (i=1; i<=row; i++) {
        for (j=1; j<=i; j++)
             printf("* ");
             printf("\n");
        
    }
    
    printf("\n");

    */
    
    
    
    
    
   /*
    int input, i, sum=0;
    
    printf("Input the number of terms: ");
    scanf("%d", &input);
    
    printf("The odd numbers are: ");
    for (i=1; i<=input; i++) {
       
            printf("%d ", 2*i-1);
            sum+=2*i-1;
        }
    
    printf("\nThe sum is: %d\n", sum);
    
    
    */
    
    
    
    
    
    
    
    
    
    
    
   /* int input, i,j,row=0;
    
    printf("Input upto the table number starting from 1: ");
    scanf("%d", &input);
    
    for (i=1; i<input+1; i++) {
        for (j=1; j<11; j++) {
                printf("%d X %d = %d\n", i, j, i*j);
            row++;
            if (row%10==0) {
                printf("\n");
                
            }
        }
    }
    
    */
   
    
    
    
    
    
    
    /*
    int input, i;
    
    printf("Enter the num to calc the table: ");
    scanf("%d", &input);
    
    
    for (i=1; i<11; i++) {
        printf("%d X %d = %d\n", input, i, input*i);
    }
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  /*  int input, i, cube=0;
    
   
    printf("Enter the number of terms: ");
    scanf("%d", &input);
    
    for (i=1; i<input+1; i++) {
        cube = i*i*i;
        printf("Number is: %d and the cube of the %d is %d\n", i,i, cube);
    }
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   /*
    int input, i, sum=0, avg=0;
    
    printf("Input 10 numbers below: \n");
    for (i=1; i<11; i++) {
        printf("Number %d -> ",i);
        scanf("%d", &input);
        sum+=input;
        avg=sum/10;
    }
    
    printf("The sum is: %d\n", sum);
    printf("The average is: %d\n", avg);

*/
    
    
    
    
    
    
    
    
    
    
  /*
    int input, i, sum=0;
    
    printf("Test data: ");
    scanf("%d", &input);
    
    printf("The first %d natural nubmers are: ", input);
    
    for (i=1; i<input+1; i++) {
        printf("%d ", i);
        sum+=i;
    }
    printf("\n");
    printf("The sum of first %d natural numbers are: %d\n", input, sum);
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* int i, sum = 0;
    
    printf("The first 10 natural numbers are: ");
    
    for (i=1; i<11; i++) {
        printf("%d ", i);
        sum += i;
    }
    
    printf("\nThe sum is: %d\n", sum);
    */

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* int num1, num2;
    
    printf("Enter two nums: ");
    scanf("%d, %d", &num1, &num2);
    
    if (num1>num2) {
        printf("Num1 > Num2");
    }else if(num2>num1){
        printf("Num2 > Num1");
    }else if (num1==num2){
        printf("Num1 = Num2");
    }else
        printf("Error");
*/
    


    return 0;
}

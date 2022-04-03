#include <stdio.h>

int main()
{
    int n,a,b,ans=0, rev = 0, rem, original,result = 0,num,flag=0,i,m, c, d, first[10][10], second[10][10], sum[10][10],transpose[10][10];
    printf("SELECT ANY OF THESE TO BE CALCULATED\n");
    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.REMINDER\n6.PALINDROME NUMBER\n7.AMSTRONG NUMBER\n8.PRIME NUMBER\n9.MATRIX ADDITION\n10.MATRIX SUBTRACTION\n11.TRANSPOSE OF MATRIX\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            ans=a+b;
            printf("%d",ans);
            break;
        }
        case 2:
        {
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            ans=a-b;
            printf("%d",ans);
            break;
            
        }
        case 3:
        {
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
             ans=a*b;
            printf("%d",ans);
            break;
        }
        case 4:
        {
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
             ans=a/b;
            printf("%d",ans);
            break;
        }
        case 5:
        {
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
             ans=a%b;
            printf("%d",ans);
            break;
        }
        case 6:
        {
             printf("Enter a number: ");
             scanf("%d", &n);
             original = n;

            while (n != 0) 
            {
                rem = n % 10;
                rev = rev* 10 + rem;
                n /= 10;
            }
            if (original == rev)
            printf("%d is a palindrome.", original);
            else
            printf("%d is not a palindrome.", original);
            break;

        }
        case 7:
        {
            printf("Enter a three-digit number: ");
            scanf("%d", &num);
            original= num;

            while (original != 0)
            {
                rem = original % 10;
                result += rem * rem * rem;
                original /= 10;
            }
            if (result == num)
            printf("%d is an Armstrong number.", num);
            else
            printf("%d is not an Armstrong number.", num);
            break;
        }
        case 8:
        {
         printf("Enter a positive integer: ");
         scanf("%d", &n);
         if (n == 0 || n == 1)
         flag = 1;
         for (i = 2; i <= n / 2; ++i)
         {
             if (n % i == 0)
             {
                 flag = 1;
                 break;
             }
         }
         if (flag == 0)
         printf("%d is a prime number.", n);
         else
         printf("%d is not a prime number.", n);
         break;
         }
         case 9:
         {
             printf("Enter the number of rows and columns of matrix\n");  
             scanf("%d%d", & m, & n);  
             printf("Enter the elements of first matrix\n");  
             for (c = 0; c < m; c++)
             {
             for (d = 0; d < n; d++)
             {
             scanf("%d", & first[c][d]);
             }
             }
             printf("Enter the elements of second matrix\n");  
             for (c = 0; c < m; c++)
             {
             for (d = 0; d < n; d++) 
             {
             scanf("%d", & second[c][d]);
             }
             }
             for (c = 0; c < m; c++)  
             {  
              for (d = 0; d < n; d++)  
              {  
              sum[c][d] = first[c][d] + second[c][d];  
              printf("%d\t", sum[c][d]);  
             }  
              printf("\n");  
           } 
           break;
         }
         case 10:
         {
              printf("Enter the number of rows and columns of matrix\n");  
             scanf("%d%d", & m, & n);  
             printf("Enter the elements of first matrix\n");  
             for (c = 0; c < m; c++)
             {
             for (d = 0; d < n; d++)
             {
             scanf("%d", & first[c][d]);
             }
             }
             printf("Enter the elements of second matrix\n");  
             for (c = 0; c < m; c++)
             {
             for (d = 0; d < n; d++) 
             {
             scanf("%d", & second[c][d]);
             }
             }
             for (c = 0; c < m; c++)  
             {  
              for (d = 0; d < n; d++)  
              {  
              sum[c][d] = first[c][d] - second[c][d];  
              printf("%d\t", sum[c][d]);  
             }  
              printf("\n");  
           } 
           break;
         }
         case 11:
         {
              printf("Enter rows and columns: ");
              scanf("%d %d", &m, &n);
              printf("\nEnter matrix elements:\n");
              for (int i = 0; i < m; ++i)
              {
              for (int j = 0; j < n; ++j)
              {
               scanf("%d", &first[i][j]);
              }
              }

              for (int i = 0; i < m; ++i)
              {
               for (int j = 0; j < n; ++j)
               {
                transpose[j][i] = first[i][j];
                }
              }
            for (int i = 0; i < m; ++i)
            {
            for (int j = 0; j < n; ++j)
            {
             printf("%d  ", transpose[i][j]);
              if (j == m - 1)
             printf("\n");
            }
            }
            break;
         }
         default:
         printf("Enter a valid choice");
    }

    return 0;
}




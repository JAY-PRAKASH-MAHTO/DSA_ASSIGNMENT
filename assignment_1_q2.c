#include <stdio.h>
#include <string.h>
 struct products
 {
    float price;
    char name[20];
    char id[20];
 };
 void main()
 {
    int n,i;
    float max=0;
    float min=0;
    int max_index;
    int min_index;


    printf("enter no. of product: ");
    scanf("%d",&n);
    struct products product[n];
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("enter product name: ");
        scanf("%s",product[i].name);
        printf("enter price: ");
        scanf("%f",&product[i].price);
        printf("entr product id: ");
        scanf("%s",product[i].id);
         printf("\n");

    }
    max=product[0].price;
    min=product[0].price;
    for (int i = 0; i < n; i++)
    {
      if(max<product[i].price)
      {
         max=product[i].price;
         max_index=i;
      }
      if(min>product[i].price)
      {
         min=product[i].price;
         min_index=i;
      }
    }
    printf("product list");
    printf("\n\n");
    printf("product name\tproduct price \t\tproduct code");
    printf("\n");
      for (int i = 0; i < n; i++)
      {
         printf ("%s\t\t%f\t\t%s",product[i].name,product[i].price,product[i].id);
         printf("\n\n");
         
      }
     
      
      printf("the most expensice product: %s\t\t%f\t\t%s",product[max_index].name,product[max_index].price,product[max_index].id);
      printf("\n\n");
      printf("the least expensice product: %s\t%f\t%s",product[min_index].name,product[min_index].price,product[min_index].id);
      
    }
    


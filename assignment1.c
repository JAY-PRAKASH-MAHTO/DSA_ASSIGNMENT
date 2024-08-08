#include <stdio.h>
#include <string.h>
 struct Type
 {
    char type[100];
    int place_visited;
    char common_friend[100];
 };
 struct Friend
 {
    char name[100];
    char phone[100];
    char pet_name[100];
    struct Type type;
 };
 void main()
 {
    int n;
    printf("enter no. of friend: ");
    scanf("%d",&n);

    struct Friend friend[n];
    for(int i=0;i<n;i++)
    {
    printf("enter name of friend: ");
    scanf("%s",friend[i].name);
    printf("enter phone no: ");
    scanf("%s",friend[i].phone);
    printf("enter pet name: ");
    scanf("%s",friend[i].pet_name);
    printf("type of friend: ");
    scanf("%s",friend[i].type.type);
    printf("enter common friend: ");
    scanf("%s",friend[i].type.common_friend);
    printf("no of places visited: ");
    scanf("%d",&friend[i].type.place_visited);
    printf("\n");

    }
      printf("\nlist of friends\n");
      printf("s no.\tname of friend\t\tphone no.\t\tpet name\t\ttype of friend\t\tcommon friend\t\tno. of places visited \n");
    for(int i=0;i<n;i++)
    {
       
        printf("%d\t\t%s\t\t%s\t\t%s\t\t\t%s\t\t\t%s\t\t\t\t\t%d\n",i+1,friend[i].name,friend[i].phone,friend[i].pet_name,friend[i].type.type,friend[i].type.common_friend,friend[i].type.place_visited);

    }
 }
#include<stdio.h>
#include<stdlib.h>
int sonika[20],n;
void insert();
int search();
int del();
int main()
{
    int ch;
    int i;
    printf("Enter the size in an array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements in an array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&sonika[i]);
    }
    while(1){
        printf("\nEnter 1 to insert element in array.");
        printf("\nEnter 2 to search element in array.");
        printf("\nEnter 3 to Delete element in array.");
        printf("\nEnter 4 to Exit.");
        printf("\n\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert();
                        break;
            case 2:search();
                        break;
            case 3:del();
                        break;
            case 4:exit(0);
        }
    }
    return 0;
}

void insert()
{
    int l,x,i;
   
    printf("\nElements Before Inserting elements respective array is: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", sonika[i]);
    }
    printf("\n enter location where elements is to be inserted  ");
    scanf("%d",&l);
    printf("\n enter element to be inserted ");
    scanf("%d",&x);
    n=n+1;
    for(i=n-1;i>=l;i--)
    {
        sonika[i]=sonika[i-1];
    }

    sonika[i]=x;
    printf("\nArray After insertion is  ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",sonika[i]);
    }
    }

int search()
{
    int i, j;
    printf("Enter element to search: "); 
    scanf("%d",&j);
     
    for(i=0;i<n;++i)
        if(sonika[i]==j)
            break;
     
if(i<n){
        printf("Element %d found at index %d", j, i);
    }     
    else{
        printf("Element not found"); 
    }
    return 0;
}

int del()
{
    int c,k,posi;
    for(k=0;sonika[k]!=NULL;k++)
    {
    }
    printf("\nEnter the position to delete element: ");
    scanf("%d",&posi);
    if(posi<=k)
    {
        for(c=posi-1;c<k-1;c++)
        {
            sonika[c]=sonika[c+1];
        }
        printf("\nArray after Deletion");
        for(c=0;c<k-1;c++)
        {
            printf("\n%d",sonika[c]);
        }
    }
    sonika[c]='\0';
    return 0;
}
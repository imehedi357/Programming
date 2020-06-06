#include<stdio.h>
#define sz 100100
int arr[sz];

void sort(int a[], int n)
{
    int flag = 0;
    int i, j, temp;
    for (i=1; i<n; i++)
    {
        flag = 0;
        for (j=1; j<n; j++) {
            if(a[j-1] > a[j])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] =  temp;
                flag = 1;
            }
        }
        if(flag == 0) {
            break;
        }
    }
}

int comp(const void *a, const void *b)
{
    return ( *(int*)b - *(int *)a);
}

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort(arr,n);
    //qsort(arr,n,sizeof(int),comp);
    for (i=0; i<n; i++)
        printf("%d%c",arr[i],",\n"[i==n-1]);

    return 0;
}
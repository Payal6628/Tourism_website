/*********ANANYA SHUKLA, 1900320100023*********/
/**********************************************/
#include <stdio.h>
#include <stdlib.h>
/**********************************************/
void merge_array(int A[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for (i=0;i<n1;i++)
		L[i] = A[l+i];
	for (j=0;j<n2;j++)
		R[j] = A[m+1+j];

	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
    {
		if(L[i]<=R[j])
        {
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
    {
		A[k]=L[i];
		i++;
		k++;
	}

	while(j<n2)
    {
		A[k]=R[j];
		j++;
		k++;
	}
}
/**********************************************/
void merge_sort(int A[],int l,int r)
{
	if(l<r)
    {
		int m = l+(r-l)/2;
		merge_sort(A,l,m);
		merge_sort(A, m+1,r);
		merge_array(A,l,m,r);
	}
}
/**********************************************/
void print_array(int A[],int size)
{
	int i;
	for (i=0;i<size;i++)
		printf("%d ",A[i]);
	printf("\n");
}
/**********************************************/
int main()
{
	int A[] = {40,23,10,49,56,7,15,68};
	int arr_size = sizeof(A) / sizeof(A[0]);
	printf("Given array is \n");
	print_array(A,arr_size);
	merge_sort(A,0,arr_size-1);
	printf("\nSorted array is \n");
	print_array(A,arr_size);
	return 0;
}
/**********************************************/

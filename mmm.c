while(arr[i]<=arr[pivot]&&i<last)
i++;
while(arr[j]>arr[pivot])
j--;
if(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
temp=arr[pivot];
arr[pivot]=arr[j];
arr[j]=temp;
quicksort(arr,fst,j-1);
quicksort(arr,j+1,last);
}
}




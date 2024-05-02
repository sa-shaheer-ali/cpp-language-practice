#include <iostream>

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for (int i = 0; i < n1; i++)
    {a[i]=arr[i+l];
           /* code */
    }
    for (int j = 0; j < n2;j++)
    {b[j]=arr[mid+1+j];
        /* code */
    }
    int i=0,j=0,k=l;
    while (i<n1&&j<n2)
    {if (a[i]<=b[j])
    {arr[k]=a[i];
    i++;
        /* code */
    }
    else{arr[k]=b[j];
    j++;
    }
    k++;    
        /* code */
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;

    }
    while (j<n2)
    {arr[k]=b[j];
    j++;
    k++;
        /* code */
    }

  
}




void mergesort(int arr[],int l,int r){
    if (l<r)
    {int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);

        /* code */
    }
    
}
int main(){
    int n;
    std::cout<<"enter the size:"<<std::endl;
    std::cin>>n;
    int arr[n];
std::cout<<"enter the numbers of the array!"<<std::endl;
    for (int i = 0; i < n; i++)
    {std::cin>>arr[i];

        /* code */
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    std::cout<<"sorted array!"<<std::endl;
    for (int i = 0; i < n; i++)
    {std::cout<<arr[i]<<" ";

        /* code */
    }
    std::cout<<std::endl;
    return 0;

    
    
}
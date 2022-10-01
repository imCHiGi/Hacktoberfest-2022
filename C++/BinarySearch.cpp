void binarySearch(int arr[], int n, int search){
    int start = 0, end = n-1, mid = (start+end)/2;

    while (start <= end && arr[mid] != search){
        if (search > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    if (arr[mid] == search){
        printf("Element found at location: %d\n", mid+1);
    }
    else{
        printf("Not Found!\n");
    }
}

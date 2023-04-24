class Solution
{
    public:
    void insert(int arr[], int i)
    {
        int j = i-1;
        int key  = arr[i];
                // this loop will check whter the previous elements are smaller then key or not
        while(j >= 0 and key < arr[j]){
            arr[j+1]=arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i = 1 ; i < n ; i ++){
        insert(arr , i);
    }
   }
};

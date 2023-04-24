class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
        int piv = partition(arr,low,high);
        quickSort(arr,low,piv-1);
        quickSort(arr,piv+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = arr[high];
       int left = low;
       
       for(int i = low ; i<=high ;i++)
       {
           
           if(arr[i]<pivot)
           {
               
               swap(arr[i],arr[left]);
               left++;
               
           }
           
           
       }
       
       // finally putting pivot place at correct position
       
       swap(arr[left],arr[high]);
       
       return left; 
    }
};

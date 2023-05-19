//{ Driver Code Starts
import java.util.*;

class GFG
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			int arr[] = new int[n]; 
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextInt();
			}
		
			Solution obj = new Solution();
			obj.selectionSort(arr, n);
			
			for(int i=0;i<n;i++)
		    	System.out.print(arr[i]+" ");
		    System.out.println();
			t--;
		}
		
	}
}

// } Driver Code Ends


class Solution
{
	
	
	void selectionSort(int arr[], int n)
	{
	    //code here
	    for(int i=arr.length-1;i>=0;i--){
	        int maxi=maximum(arr,0,i);
	        swap(arr,maxi,i);
	    }
	    
	}
	int maximum(int arr[],int s,int e){
	    int max=arr[0];
	    for(int i=0;i<=e;i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    for(int i=0;i<arr.length;i++){
	        if(max==arr[i]){
	            return i;
	        }
	    }
	    return -1;
	}
	void swap(int arr[],int m,int n){
	    int temp=arr[m];
	    arr[m]=arr[n];
	    arr[n]=temp;
	}
}
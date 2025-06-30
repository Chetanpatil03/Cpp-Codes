
class Solution {
    public String average(int arr[]) {
        // code here
        int sum = 0;
        int n = arr.length;
        
        for(int i =0; i < arr.length - 1; i++ ){
            sum += arr[i];
        }
        
        double avg = sum / n;
        
        return String.format("%.2f",avg);
        
    }
}


public class Questions{

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println(sol.average(arr)); // Output: "3.00"
    }

}
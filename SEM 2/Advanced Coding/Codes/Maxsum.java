import java.io.*;

public class Maxsum {
    public class Main {
    
        static int findMaxSum(int []arr, int n){

            int []preSum = new int[n];
            int []suffSum = new int[n];
            int ans = Integer.MIN_VALUE;
            preSum[0] = arr[0];

            for (int i = 1; i < n; i++) {
                preSum[i] = preSum[i-1] + arr[i];
            }

            suffSum[n-1] = arr[n - 1];
            if(preSum[n-1] == suffSum[n-1])
                ans = Math.max(ans, preSum[n - 1]);
            for (int i = n-2; i >= 0; i--) {
                suffSum[i] = suffSum[i+1] + arr[i];
                if (suffSum[i] == preSum[i])
                    
            }
        } 
    }
}

public class BlockSwap {
    
    public static int[] reverese(int[] nums, int start, int end){
        while(start < end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start += 1;
            end -=1;
        }
        return nums;
    }


    public static void main(String[] args){
        int[] arr = {1,2,3,4,5,6,7};
        
        int[] rev_arr = reverese(arr, 0, arr.length-1);

        for(int i =0; i< arr.length; i++){
            System.out.print(rev_arr[i]+" ");
        }
    }
}

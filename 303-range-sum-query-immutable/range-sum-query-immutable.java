class NumArray {
public  int[] arr1;
    public NumArray(int[] nums) {
        int sum=0;
        arr1 = new int[nums.length];

        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            arr1[i]=sum;
        }
        //return arr1;
    }
    
    public int sumRange(int left, int right) {
        
       
        int rf=arr1[right];
        if(left==0){
            return arr1[right];
        }
        else{
             int lf=arr1[left-1];
            return rf-lf;
        }

    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */
/**
 * Solution1
 */
public class Solution1 {

    public static int solving(int[] nums,int sizeNums,int index){
        
        if (index >= sizeNums)  return 0;
        // ith index me chori karna hai
        int op1 = nums[index] + solving(nums , sizeNums, index+2);

        // ith index pr chori nhi krna hai
        int op2 = 0 + solving(nums, sizeNums, index+1);
        int finalAns = Math.max(op1, op2);
        return finalAns;
    }
    public static void main(String[] args) {
        System.out.println(solving(new int[] { 2, 1, 1, 2 }, 4, 0));
        ;
    }
}
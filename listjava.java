import java.util.* ;
import java.io.*; 
import java.util.* ;
import java.io.*; 
public class listjava {
    public static int[][] pairSum(int[] arr, int s){
           List<List<Integer>> val = new ArrayList<>();

           Arrays.sort(arr);

           for (int i = 0; i < arr.length-1; i++) {
                for (int j = i+1 ; j < arr.length; j++) {
                    if (arr[i]+arr[j] > s) {
                        break;
                    }
                    
                    if (arr[i]+arr[j] == s) {
                        List<Integer> temp = new ArrayList<>();
                        temp.add(arr[i]);
                        temp.add(arr[j]);
                        val.add(temp);
                    }
                }
           }
            //System.out.println(val);
           int array[][] = new int[val.size()][2];
           for (int i = 0; i < val.size(); i++) {
                array[i][0] = val.get(i).get(0);
                array[i][1] = val.get(i).get(1);
           }

           return array;
    }

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        int s = 5;
        int a[][] = pairSum(arr, s);
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
       
    }
}







































































//     List<List<Integer>> res = new ArrayList<>();
        
    //     List<Integer> val = new ArrayList<>();
    //     val.add(1);
    //     val.add(2);
    //     res.add(val);
    //     // for (int i = 0; i < val.size(); i++) {
    //     //     System.out.print(val.get(i)+" ");
    //     // }
    //     System.out.println();

    //     List<Integer> val1 = new ArrayList<>();
    //     val1.add(2);
    //     val1.add(3);
    //     res.add(val1);
    //     // for (int i = 0; i < val1.size(); i++) {
    //     //     System.out.print(val1.get(i)+" ");
    //     // }

    //     // System.out.println(val);
    //     // System.out.println(val1);
    //     System.out.println(res);
    //     int count = res.size();
    //     int result[][] = new int[count][2];
    //     for(int i=0; i < count; i++)
    //     {
    //        result[i][0] = res.get(i).get(0);
    //        result[i][1] = res.get(i).get(1);
    //     }
    //     for (int i = 0; i < result.length; i++) {
    //         for (int j = 0; j < result[i].length; j++) {
    //             System.out.print(res.get(i).get(j)+" ");
    //         }
    //         System.out.println();
    //     }
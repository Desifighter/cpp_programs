import java.util.ArrayList;
import java.util.Collections;

public class Solution {

    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();

        
        int n = 12;
        int K = 10;
        
        int[] arr = {-26,32,4,17,-16,18,1,8,6,8,3,-13};

    

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[i] + arr[j] + arr[k] == K) {

                        ArrayList<Integer> temp = new ArrayList<>();
                        temp.add(arr[i]);
                        temp.add(arr[j]);
                        temp.add(arr[k]);

                        Collections.sort(temp);

                        if (!(ans.contains(temp))) {
                            ans.add(temp);
                        }

                    }
                }

            }

        }

        for (int i = 0; i < ans.size(); i++) {
            System.out.println(ans.get(i));
        }
    }
}

// -26 4 32
// -16 8 18
// -13 6 17
// 1 3 6
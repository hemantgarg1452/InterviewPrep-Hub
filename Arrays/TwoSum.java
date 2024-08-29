package Arrays;

import java.util.*;

public class TwoSum {

    public static void main(String[] args) {
        int nums[] = { 3, 2, 4 };
        int target = 6;
        int[] answer = twoSum(nums, target);
        System.out.println("The indices of the two numbers are: " + answer);
    }

    private static int[] twoSum(int[] nums, int target) {

        // for (int i = 0; i < nums.length; i++) {
        // for (int j = i + 1; j < nums.length; j++) {

        // if (nums[i] + nums[j] == target) {

        // int a[] = { i, j };

        // return a; // return the indices of an array
        // }
        // }
        // }
        // return null;
        HashMap<Integer, Integer> map = new HashMap<>();

        int[] res = new int[2];

        for (int i = 0; i < nums.length; ++i) {
            if (!map.isEmpty() && map.containsKey(target - nums[i])) {

                res[0] = i;
                res[1] = map.get(target - nums[i]);

                break;
            }
            map.put(nums[i], i);
        }
        return res;
    }

}
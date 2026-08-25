class Solution {
    public int[] twoSum(int[] arr, int target) {
        int[] arr1 = new int[2];
        HashMap<Integer, Integer> map = new HashMap<>();
        int n = arr.length;
        for(int i=0; i<n; i++){
            int compli = target - arr[i];
            if(map.containsKey(compli)){
                arr1[0] = i;
                arr1[1] = (map.get(compli));
            }
            int curr = arr[i];
            int pos = i;
            map.put(curr, pos);
        }
        return arr1;
    }
}
class Solution
{ 
    static int countDistinctSubarray(int arr[], int n) 
    { 
        Set<Integer> set = new HashSet<>();
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i=0;i<n;i++)
        set.add(arr[i]);
        
        int dn = set.size();
        set.clear();
        
        if(dn == n)  return 1;
        
        for(int i=0;i<dn;i++)
        mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);

        int l=0, r=dn-1, count = 0;
        
        while(l <= (n-dn))
        {
            if(mp.size() == dn)
            {
                count += n-r;
                mp.put(arr[l],mp.get(arr[l])-1);
                if(mp.get(arr[l]) == 0)
                {
                    mp.remove(arr[l]);
                }
                l++;
            }
            else if(r < n-1)
            {
                r++;
                mp.put(arr[r],mp.getOrDefault(arr[r],0)+1);
            }
            else
            {
                break;
            }
        }
        return count;
    }
}

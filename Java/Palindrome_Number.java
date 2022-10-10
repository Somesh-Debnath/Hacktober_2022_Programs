//  https://leetcode.com/problems/palindrome-number/

class Solution {
    public boolean isPalindrome(int x) {
        
        int n = x; int i=0;
        int [ ] a = new int [10];
        int [ ] b = new int [10];
        
        if(x<0) return false;
        
        for( n = x;n>0;n=n/10){
            a[i] = n%10; i++;
        }
        int j=0;
        int size = i;
        for(int k=size-1;k>=0;k--){
            b[j] = a[k] ; j++;
        }
        
        for(int k=0;k<size;k++){
            if(a[k]!=b[k]) {
                return false;
            }
        }
        return true;
    }
}

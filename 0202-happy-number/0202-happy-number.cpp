class Solution {
public:
int getNext(int n){
    int sum=0;
    while(n>0){
        int m =n%10;
        sum += m*m;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
       unordered_set<int> seen;
       while(n != 1){
        if(seen.find(n)!=seen.end()){
            return false;
        }
        seen.insert(n);
        n=getNext(n);
       } 
       return true;
    }
};
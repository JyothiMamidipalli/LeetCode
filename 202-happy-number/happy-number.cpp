class Solution {
private:
    bool check(int n){
    int sum = 0;
        while (n!=0){
            int temp = n%10;
            sum += pow(temp,2);
            n/=10;
        }
        if (sum==1) return true;
        else if (sum<=4) return false;
        else return check(sum);
    }
public:
    bool isHappy(int n) {
        if (check(n)) return true;
        else return false;
    }
};
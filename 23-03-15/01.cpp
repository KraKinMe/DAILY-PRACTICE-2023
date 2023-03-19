Problems
Courses
Job Fair
Live
Contests
POTD





























































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2023-03-15 21:09:05	Correct	cpp	1112 / 1112	View
C++ (g++ 5.4)



        if(ans==INT_MAX) ans=-1;


 

Custom Input
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string a, string b){
        //Code Here
        int ans=INT_MAX;
        for(int i=0;i<=a.length()-b.length();i++) {
            int val = f(a,b,i,i+b.length()-1);
            if(val!=-1) ans=min(ans,val);
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
    int f(string a,string b,int strt,int end) {
        int ans=0;
        for(int i=0,j=a.length()-1;i<=j;i++,j--) {
            if(i>=strt && i<=end) {
                if(j>=strt && j<=end) {
                    if(b[i-strt]!=b[j-strt]) return -1;
                    if(a[i]!=b[i-strt]) ans++;
                    if(a[j]!=b[j-strt] && i!=j) ans++;
                } else {
                    if(a[i]!=b[i-strt]) ans++;
                    if(b[i-strt]!=a[j] && i!=j) ans++;
                }
            } else {
                if(j>=strt && j<=end) {
                    if(a[j]!=b[j-strt]) ans++;
                    if(b[j-strt]!=a[i] && i!=j) ans++;
                } else {
                    if(a[i]!=a[j]) ans++;
                }
            }
        }
        return ans;
    }
};
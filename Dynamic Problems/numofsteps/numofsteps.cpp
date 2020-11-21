// How many ways can you climb to the top if you can climb with 1 or 2 steps at a time

// 0 steps -> 0 combination
// 1 step -> 1
// 2 steps -> 2 -> [1,1], [2]
// 3 steps -> 3 -> [1,1,1], [1,2], [2,1]
// 4 steps -> 5 -> [1,1,1,1], [2,2], [1,1,2], [1,2,1],[2,1,1], 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	Solution();
	int fibbonaci_graph(int n);
	int climbStairs(int n);
private:
	vector<int> fibb;
	int n;
};


Solution::Solution(){
         fibb = vector<int>(3);
  }

// This is the fibonacci sequence, let us try to make it so that the computational cost is not as high
int Solution::fibbonaci_graph(int n){
    fibb[0] = 0;
    fibb[1] = 1;
    fibb[2] = 2;
    if (fibb.size() < n+1){
        for (int i = fibb.size(); i<=n+1; ++i){
            // This will update the graph butnot overwrite it
            fibb.push_back(fibb[i-1]+fibb[i-2]);
        }
    }
}



int Solution::climbStairs(int n){
        /* This is the easy solution
        if (n == 0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        return climbStairs(n-1) + climbStairs(n-2);
    }
    int fibbonaci_graph(vector<int> *fibb, int n);
    */
        fibbonaci_graph(n);
        return fibb[n];
}
        
    
int main(){
    int steps = 4;
    int num = 0;
    Solution sol;
    num = sol.climbStairs(steps); 
    cout<<"The number of steps is "<<num<<endl;
    return 0;
}


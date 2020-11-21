#include <iostream>
#include <vector>
using namespace std;

/*
A game will be played between the first two elements of the array (i.e. arr[0] and arr[1]). In each round of the game, we compare arr[0] with arr[1], the larger integer wins and remains at 
position 0 and the smaller integer moves to the end of the array. The game ends when an integer wins k consecutive rounds


Input: arr = [2,1,3,5,4,6,7], k = 2
Output: 5
Explanation: Let's see the rounds of the game:
Round |       arr       | winner | win_count
  1   | [2,1,3,5,4,6,7] | 2      | 1
  2   | [2,3,5,4,6,7,1] | 3      | 1
  3   | [3,5,4,6,7,1,2] | 5      | 1
  4   | [5,4,6,7,1,2,3] | 5      | 2
So we can see that 4 rounds will be played and 5 is the winner because it wins 2 consecutive games.


*/



class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int count = 0 , round = 0;
        int current, winner, loser, temp;
        current = arr[0];
        cout<<"Round   | \tarr\t |winner| win_count"<<endl;
        while (count < k){
            winner = arr[0]*(arr[0]>arr[1]) + arr[1]*(arr[1]>arr[0]);
            loser = arr[1]*(arr[0]>arr[1]) + arr[0]*(arr[1]>arr[0]);
            if (current == winner){ count++;}
            else {count = 1;}
            round++;
            cout<<round<<"\t|"<<"[";
            for (int index = 0; index<arr.size(); index++){
                 cout<<arr[index]<<" ";}
            cout<<"]|"<<winner<<"\t|"<<count<<endl;
            arr[0] = winner;
            temp = arr[1];
            arr.erase(arr.begin() + 1);
            arr.push_back(temp);
            current = winner;
       }
    }
    
};

int main(){
    vector<int> arr = {1,9,8,2,3,7,6,4,5};
    int k=7;
    Solution sol;
    sol.getWinner( arr,  k);
    return 0;
}

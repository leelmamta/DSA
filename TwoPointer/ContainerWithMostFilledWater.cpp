//
// Created by mamta on 08-04-2025.
//

/**
* Q1. You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
      int i = 0 , j = height.size()-1;
      int water =0;
      while(i<j){
        int h = min(height[i], height[j]);
        water = max(water, (j-i)*h);
        if(height[i]<height[j])
          i++;
        else j--;
      }
      return water;
    }
};

int main(){
  vector<int> height(4);
  height[0] = 1;
  height[1] = 2;
  height[2] = 3;
  height[3] = 4;
    Solution sol;
    int result = sol.maxArea(height);

    cout << "Maximum area: " << result << endl;
  return 1;
  }

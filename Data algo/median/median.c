#include <stdio.h>
/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.*/
/*
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int m = num1Size;
    int n = num2Size;
    
    int A[m*n] = [0]*m*n;
    
    int i = 0, j = 0;
    // perform a radix sort
    
    // 2,8,10,12
    mid = (m+n)//2)
    for (index=0; index <= mid + 1; index++){
        if i > m and j <n{
            A[index] = nums2[j];
            j++;
        }
        else if j > n and i < m{
            A[index] = nums1[i];
            i++;
        }
        if (i<=m and j <=n){
            else if nums1[i] <= nums2[j]{
                A[index] = nums1[i];
                i++;}
            else if nums[i] > nums2[j]{
                 A[index] = nums2[j];
                 j++;}
            
    }
            
        }
    if (mid)%2 == 0{
            // add to A by performing radix get mid
            return A[mid]
    }
            
    else{
            //we get A at mid and at mid+1
            return A[mid] + A[mid+1]
        }
    }
   
}

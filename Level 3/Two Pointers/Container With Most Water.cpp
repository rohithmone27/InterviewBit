int Solution::maxArea(vector<int> &A) {
    int l=0, r=A.size()-1, area=0;
    while(l<r){
        area = max(area, (min(A[l], A[r]))*(r-l));
        if(A[l]<A[r]) l++;
        else r--;
    }
    return area;
}
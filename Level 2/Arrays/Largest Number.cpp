bool comp(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ;
}
string Solution::largestNumber(const vector<int> &A) {
    vector <string> b;
    int n = A.size();
    for(int i=0; i<n; i++){
        b.push_back(to_string(A[i]));
    }
    sort(b.begin(), b.end(), comp);
    string a="";
    for(int i=0; i<b.size(); i++){
        a+=b[i];
    }
    int i=0; 
    while(a[i]=='0'){
        i++;
    }
    if(i==a.length()){
        a="0";
    }
    return a;
}

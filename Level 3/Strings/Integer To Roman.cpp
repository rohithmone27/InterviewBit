string Solution::intToRoman(int A) {
    int N[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};   
    string B[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string s="";
    int i=0;
    while(A!=0){
        while(A>=N[i]){
            s+=B[i];
            A-=N[i];
        }
        i++;
    }
    return s;
}
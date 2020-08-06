#define ll long long int
int Solution::divide(int A, int B) {
   ll c = abs((ll)A);
   ll d = abs((ll)B);
   ll sign = 1, res =0, t=0;
   if(A<0) sign = -sign;
   if(B<0) sign = -sign;
   for(ll i=31; i>=0; i--){
       if(t + (d<<i) <=c){
            t=t+(d<<i);
            res+= 1LL <<i;
       }
   }
   return (res*sign >= INT_MAX || res*sign < INT_MIN) ? INT_MAX : res*sign;
}
#include <bits/stdc++.h>

using namespace std;

const int N = 112345;

int t[4*N], lz[4*N];

int a[N];

void build(int i, int l, int r){
   if (l == r){
      t[i] = a[l];
   } else {
      int m = (l+r)/2;
      build(2*i, l, m);
      build(2*i+1, m+1, r);
      t[i] = t[2*i] + t[2*i+1];
   }
}

/*void update(int i, int l, int r, int ql, int qr, int x}{
   if (ql <= l && r <= qr) { 
      t[i] += x;
      return;
   }
   if (qr < l || r < ql) return;
   int m = (l+r)/2;
   update(2*i, l, m, ql, qr, x);
   update(2*i+1, m+1, r, ql, qr, x); 
}*/

// lazy propagation
void push(int i, int l, int r){
   if(lz[i]){
      t[i] += lz[i] * (r-l+1);
     if (l != r){
        lz[2*i] += lz[i];
	lz[2*i+1] += lz[i];
     } 
      
     lz[i] = 0;
   }
}

void query(int i, int l, int r, int ql, int qr){
   push(i, l, r);
   if (ql < l && r <= qr) return t[i];
   if (qr < l || r < ql) return 0;
   int m = (l+r)/2;
   return query(2*i, l, m, ql, qr)
        + query(2*i+1, m+1, r, ql, qr);
}   

void update(int i, int l, int r, int ql, int qr, int x){
   push(i, l, r);
   if (qr < l || r < ql) return;
   if (ql <= l && r <= qr) {
	   lz[i] += x;
	   push(i, l, r);
   } else {
      int m = (l+r)/2;
      update(2*i, l, m, ql, qr, x)
      update(2*i+1, m+1, r, ql, qr, x)
      t[i] = t[2*i] + t[2*i+1];
   }

}


int main(){
   cout << "teste"<< endl ;
   return 0;
}

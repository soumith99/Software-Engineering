#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


typedef long long ll;
typedef unsigned long long ull;
#define forn(i,n,startIndex) for(int i=startIndex;i<n;i++)
#define fornr(i,n,endIndex) for(int i=n-1;i>=endIndex;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair

const long double PI = 3.1415926535897932384626433832795;

template<typename T>
T max3(T n1,T n2,T n3){
  return max(n1,max(n2,n3));
}
template<typename T>
T min3(T n1,T n2,T n3){
  return max(n1,max(n2,n3));
}
template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int main(){

}

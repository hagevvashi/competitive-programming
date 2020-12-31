#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define lrep(i, n) for (ll i = 0; i < n; i = i + 1)
#define array(N, t) (t*)calloc(N, sizeof(t))
#define max(p, q)((p) > (q) ? (p) : (q))
#define min(p, q)((p) < (q) ? (p) : (q))
#define swap(a, b) { int temp = a; a = b; b = temp; }
#define lswap(a, b) { ll temp = a; a = b; b = temp; }

typedef struct {
  ll prime_number;
  ll exponent;
} Factor;

Factor factors[10010]={{0,0}};
int factors_count=0;

void increment_exponent(int i){
  factors[i].exponent+=1;
}

void add_factor(ll x){
  factors[factors_count].prime_number=x;
  increment_exponent(factors_count);
  factors_count+=1;
}

void add_or_increment(ll x){
  rep(i,factors_count)if(factors[i].prime_number==x)return increment_exponent(i);
  add_factor(x);
}

void find_smallest_prime_number(ll x){
  if(x<=1){
    return;
  }
  for(ll i=2;i*i<=x;i+=1){
    if(x%i==0){
      add_or_increment(i);
      return find_smallest_prime_number(x/i);
    }
  }
  add_or_increment(x);
}

void find_prime_factors(ll x){
  find_smallest_prime_number(x);
}

void debug(){
  rep(i,factors_count){
    printf("%lld to the power %lld\n",factors[i].prime_number,factors[i].exponent);
  }
}

ll mypow(ll base, int exponent){
  if(exponent==0)return 1;
  ll r=1;
  rep(i,exponent)r*=base;
  return r;
}

ll calculate_sum_of_factor(int i){
  ll r=0;
  rep(j,factors[i].exponent+1)r+=mypow(factors[i].prime_number,j);
  return r;
}

ll find_sum_of_divisors(){
  ll r=1;
  rep(i,factors_count)r*=calculate_sum_of_factor(i);
  return r;
}

/**
 * 0: Perfect
 * 1: Deficient
 * 2: Abundant
 */
int judge_perfect(ll n){
  ll x=find_sum_of_divisors();
  // printf("sum of divisors is %lld\n", x);
  ll subtracted=x-n;
  if(subtracted==n){
    return 0;
  }else{
    if(subtracted<n){
      return 1;
    }else{
      return 2;
    }
  }
}

int main() {
  ll n;
  scanf("%lld",&n);
  find_prime_factors(n);
  // debug();
  int result=judge_perfect(n);
  if(result==0){
    puts("Perfect");
  }else{
    if(result==1){
      puts("Deficient");
    }else{
      puts("Abundant");
    }
  }
  return 0;
}

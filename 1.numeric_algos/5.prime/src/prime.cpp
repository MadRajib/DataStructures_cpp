#include "prime.h"

std::vector<int> primefactors(int n){
    // pull out factors of 2
    std::vector<int> factors;
    while(n%2 == 0){
        factors.push_back(2);
        n/=2;
    }

    int fact = 3;
    int stop_at = sqrt(n);
    while(fact <= stop_at){
        while(n%fact == 0){
            factors.push_back(fact);
            n/=fact;

            stop_at = sqrt(n);
        }
        fact+=2;
    }
    if (n>1) factors.push_back(n);

    return factors;
}

std::vector<int> primesTill(int n){
    std::vector<bool> is_composite(n);
    
    for(auto i=is_composite.begin() + 4; i<is_composite.end(); i+=2){
        *i = true;
    }
         

    int next_prime = 3;
    int stop_at = sqrt(n);
    while(next_prime <= stop_at){
        for(auto i=is_composite.begin() + next_prime*2; i<is_composite.end(); i+=next_prime){
            *i = true;
        }
        next_prime +=2;
        while(next_prime <= n && is_composite[next_prime]) next_prime +=2;   

    }
    std::vector<int> primes{};
    int count = 2;
    for ( auto iter = is_composite.begin()+count; iter!=is_composite.end(); iter++,count++){
        if (*iter == 0) primes.push_back(count);

    }
    
    return primes;
}

int largestPrime(int n){
    return *(primesTill(n).end()-1);
}

bool fermetPrimeTest(int p,int max_test){
    LCGS ran;
    for(int i =0;i <max_test;i++){
        auto n = ran.generate(1,p);
        if(exppow(n,p-1,p)!=1) return false;
        // random
        // expo
    }
    return true;

}
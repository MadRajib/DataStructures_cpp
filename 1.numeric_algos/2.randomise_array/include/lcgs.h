struct LCGS{
    LCGS() = default;
    LCGS(int a,int b,int m,int s=0):A(a),B(b),M(m),seed(s){}

    int A = 5,B = 3,M = 7,seed =0;
    int generate();
    int generate(int  ,int);
};
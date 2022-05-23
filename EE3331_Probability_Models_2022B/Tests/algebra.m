syms r

eqn = (factorial(365)-factorial(r))/(365^r) == 0.05;
eqn = rewrite(eqn,'log');
solve(eqn,r);
check = nchoosek(365,2)*factorial(2);
%%since nPr=nCr*r! you can do like this:
%%nPr = nchoosek(n,r)*factorial(r)


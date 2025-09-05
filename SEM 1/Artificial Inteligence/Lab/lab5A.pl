fibonacci(0,1).
fibonacci(1,1).


fibonacci(N,X):- 
M is N-1,
K is N-2,
N >= 2, fibonacci(M, Y), 
fibonacci(K, Z), 
X is Y+Z.

union([],A, A).
union(A,[], A).

union(A,B,X) :- append(A,B,X).
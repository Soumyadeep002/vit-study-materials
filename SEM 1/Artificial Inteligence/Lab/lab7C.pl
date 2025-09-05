compliment(X, [], []).

compliment(A,[H|T],[H|C]) :-
                \+member(H,A),
                compliment(A,T,C).

compliment(A,[H|T],C) :-
                member(H,A),
                compliment(A,T,C).





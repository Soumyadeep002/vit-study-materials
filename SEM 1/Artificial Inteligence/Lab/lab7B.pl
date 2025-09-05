intersection(A,A,A).
intersection([],A,[]).

intersection([H|T],B,[H|X]):- 
                member(H,B),
                intersection(T,B,X).

intersection([H|T],B,X):-
                \+member(H,B),
                intersection(T,B,X).

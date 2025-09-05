complement([], X).

complement(A ,[H|C]):-
            \+member(,_),
            complement(_,X).
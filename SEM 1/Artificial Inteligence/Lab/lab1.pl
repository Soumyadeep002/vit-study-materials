taller_than(john,mary).
taller_than(mary,bob).
taller_than(bob, anna). 
/* this is a coment */

father_of(jhon, merry, bob).

is_taller_than(X,Y):- taller_than(X,Y).


is_taller_than(X,Y):-
            taller_than(X,Z),
            is_taller_than(Z,Y) .

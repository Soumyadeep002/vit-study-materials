print2([]):-
        write("").

print2([H|T]):-
        write(H),
        write(" "),
        print2(T).

print_grid3 :-
        write("Enter 1st list:"),
        read(L1),
        length(L1, 3),

        write("Enter 1st list:"),
        read(L2),
        length(L2, 3),

        write("Enter 1st list:"),
        read(L3),
        length(L3, 3),

        print2(L1),
        nl,
        print2(L2),
        nl,
        print2(L3),
        nl.

        
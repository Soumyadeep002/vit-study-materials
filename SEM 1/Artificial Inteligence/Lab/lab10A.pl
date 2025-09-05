print_list([]):- 
        write("").

print_list([H|T]):-
        write(H),
        write(" "),
        print_list(T).

element1([H|T], H).
element2([H|T], X):-
        element1(T, X).
element3([H|T], X):-
        element2(T,X).



list_grid:- 
    write("Enter 1st list:"),
    read(L1),
    length(L1,3),
    member(1, L1),       
    member(2, L1),       
    member(3, L1), 

    write("Enter 2nd list:"),
    read(L2),
    length(L2,3),
    member(1, L2),       
    member(2, L2),       
    member(3, L2),      

    write("Enter 3rd list:"),
    read(L3),
    length(L3,3),
    member(1, L3), 
    member(2, L3), 
    member(3, L3), 

    element1(L1, L11),
    element1(L2, L21),
    element1(L3, L31),
    col1 = [L11, L21, L31],

    element2(L1, L12),
    element2(L2, L22),
    element2(L3, L32),
    col2 = [L12, L22, L32],

    element3(L1, L13),
    element3(L2, L23),
    element3(L3, L33),
    col3 = [L13, L23, L33],

    print_list(L1),
    nl,      
    print_list(L2),
    nl,      
    print_list(L3),
    nl.    
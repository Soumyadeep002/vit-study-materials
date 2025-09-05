enter_name :- 
        write("Enter your first name:"),
        nl,
        read(Fname),
        write("Enter your last name:"),
        nl,
        read(Lname),
        string_concat(Fname, " ", Fname1),
        string_concat(Fname1, Lname, Name),
        string_concat("Your full name is ", Name, String),
        nl,nl,
        write(String).

        
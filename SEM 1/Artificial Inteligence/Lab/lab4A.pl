whoami([]).
whoami([_,_|Rest]):- whoami(Rest).
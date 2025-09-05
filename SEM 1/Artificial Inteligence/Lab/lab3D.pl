friend(a,b).
friend(b,a).
friend(b,c).
friend(c,d).
friend(d,e).
friend(e,f).
friend(f,e).
friend(f,g).
friend(g,a).

bestie(X,Y):- friend(X,Y), friend(Y,X).
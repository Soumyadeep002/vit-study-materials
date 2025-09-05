elephant(fred).
elephant(mary).
\+elephant(joe).
dog(joe).
animal(fred):- elephant(fred).
animal(mary):- elephant(mary).
animal(joe):- elephant(joe).
animal(joe):- dog(joe).


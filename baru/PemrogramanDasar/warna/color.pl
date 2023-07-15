go :- write('Tugas Fatahillah Alif Pangaribowo 22030022'), nl, xyz.
xyz :- write('Apakah warna yang kamu sukai? '), read(Color), process_color(Color).

process_color(merah) :- write('Warna yang kamu sukai adalah merah').
process_color(putih) :- write('Warna yang kamu sukai adalah putih').
process_color(_) :- xyz.

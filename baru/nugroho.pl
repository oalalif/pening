% fakta
kurs(euro,17393).
kurs(ringgit,3522).
kurs(rubel,188).
kurs(usd,14615).
kurs(dolarsingapur,10892).

% aturan
mata_uang(MataUang, Kurs) :-
    kurs(MataUang, Kurs).

konversi(Jumlah, MataUang, Hasil) :-
    mata_uang(MataUang, Kurs),
    Hasil is Jumlah * Kurs.

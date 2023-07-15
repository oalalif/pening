% Kurs mata uang terhadap rupiah Indonesia
kurs(baht_thailand, 417.45).
kurs(peso_filipina, 229.45).
kurs(won_korea, 11.75).
kurs(yuan_china, 2,267.46).
kurs(yen_jepang, 125.45).

% Fakta dan aturan
konversi :- 
    write("Pilih mata uang yang akan dikonversi:"), nl,
    write("1. Baht Thailand"), nl,
    write("2. Peso Filipina"), nl,
    write("3. Won Korea"), nl,
    write("4. Yuan China"), nl,
    write("5. Yen Jepang"), nl,
    read(Pilihan),
    (Pilihan =:= 1 -> MataUang = baht_thailand;
     Pilihan =:= 2 -> MataUang = peso_filipina;
     Pilihan =:= 3 -> MataUang = won_korea;
     Pilihan =:= 4 -> MataUang = yuan_china;
     Pilihan =:= 5 -> MataUang = yen_jepang),
    kurs(MataUang, Kurs),
    write("Masukkan jumlah mata uang yang akan dikonversi: "), 
    read(Jumlah),
    Rupiah is Jumlah * Kurs,
    format("Jumlah mata uang ~w sebesar Rp ~2f~n", [MataUang, Rupiah]).

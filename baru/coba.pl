%fakta
beli(andi,roti,3).
beli(andi,kue,2).
beli(santi,roti,1).
beli(santi,kue,4).
beli(ina,roti,2).
beli(ina,kue,2).
harga(roti,7500).
harga(kue,6600).

%predikat_untuk_menghitung_total_beli
total_beli(X,TotalBeli):-
    findall(Jumlah, beli(X, _,Jumlah),List),
    sum_list(List,TotalBeli).

%predikat_untuk_menghitung_total_bayar
total_bayar(X,TotalBayar):-
    findall(Harga*Jumlah, (beli(X,Makanan,Jumlah), harga(Makanan,Harga)), List),
    sum_list(List,TotalBayar).

%contoh_penggunaan
totbeli_andi:- writeln("Total Beli"),
    total_beli(andi, TotalBeliAndi),
    writeln(andi), write("Total Beli: "), writeln(TotalBeliAndi).
totbayar_andi:- writeln("Total Bayar"),
    total_bayar(andi, TotalBayarAndi),
    writeln(andi), write("Total Bayar: "), writeln(TotalBayarAndi).
totbeli_santi:- writeln("Total Beli"),
    total_beli(santi, TotalBeliSanti),
    writeln(santi), write("Total Beli: "),writeln(TotalBeliSanti).
totbayar_santi:- writeln("Total Bayar"),
    total_bayar(santi, TotalBayarSanti),
    writeln(santi), write("Total Bayar: "), writeln(TotalBayarSanti).
totbeli_ina:- writeln("Total Beli"),
    total_beli(ina, TotalBeliIna),
    writeln(ina), write("Total Beli: "),writeln(TotalBeliIna).
totbayar_ina:- writeln("Total Bayar"),
    total_bayar(ina, TotalBayarIna),
    writeln(ina), write("Total Bayar: "), writeln(TotalBayarIna).
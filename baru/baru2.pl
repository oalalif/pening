% fakta tentang pembelian pelanggan
beli(andi,roti,3).
beli(andi,kue,2).
beli(santi,roti,1).
beli(santi,kue,4).
beli(ina,roti,2).
beli(ina,kue,2).
harga(roti,7500). 
harga(kue,6600).

% predikat untuk menghitung total beli
totbeli(X,TotalBeli):-
    findall(Jumlah, beli(X, _,Jumlah),List),
    sum_list(List,TotalBeli).

% predikat untuk menghitung total bayar
totbayar(X,TotalBayar):-
    findall(Harga*Jumlah, (beli(X,Makanan,Jumlah), harga(Makanan,Harga)), List),
    sum_list(List,TotalBayar).

% predikat untuk menampilkan total beli dan total bayar pelanggan
tampilkan_total_pelanggan(Pelanggan) :-
    totbeli(Pelanggan, TotalBeli),
    totbayar(Pelanggan, TotalBayar),
    format('Total Beli ~w: ~w~n', [Pelanggan, TotalBeli]),
    format('Total Bayar ~w: ~w~n', [Pelanggan, TotalBayar]).
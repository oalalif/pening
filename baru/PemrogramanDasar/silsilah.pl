%fakta
orangtua(herno,gunawan).
orangtua(herno,hartini).
orangtua(herno,gunandi).
orangtua(tumiyem,gunawan).
orangtua(tumiyem,hartini).
orangtua(tumiyem,gunandi).
orangtua(gunawan,alif).
orangtua(gunawan,habibi).
orangtua(kasini,alif).
orangtua(kasini,habibi).
orangtua(hartini,irgi).
orangtua(hartini,sadam).
orangtua(sarju,irgi).
orangtua(sarju,sadam).
orangtua(gunandi,dita).
orangtua(gunandi,raihan).
orangtua(ika,dita).
orangtua(ika,raihan).

pria(herno).
pria(gunawan).
pria(gunandi).
pria(sarju).
pria(alif).
pria(habibi).
pria(irgi).
pria(sadam).
pria(raihan).

wanita(tumiyem.)
wanita(kasini).
wanita(hartini).
wanita(ika).
wanita(dita).

%pre_aturan:-
ayah(X,Y) :- orangtua(X,Y),pria(X).
ibu(X,Y) :- orangtua(X,Y),wanita(X).

%sanad_lelaki
lengkap(X,Y,Z) :- ayah(X,Y), ayah(Y,Z).

%cucu_kake_nene
cu(X,Z):- orangtua(Z,Y),orangtua(Y,X).

%cucuperempuan
cup(X,Z):- cu(X,Z), wanita(X).

%cuculakik
cul(X,Z):- cu(X,Z), pria(X).

%ayahsiblings
sdra(X,Y):- orangtua(Z,X), orangtua(Z,Y),X\=Y,pria(A).

%sepupu
saudara(X, Y) :- orangtua(Z, X), orangtua(Z, Y), X \= Y.

sepupu(X, alif) :-
  orangtua(Y, X),
  orangtua(Z, alif),
  saudara(Y, Z).

nama_sepupu(Anda, Sepupu) :-
  sepupu(Sepupu, Anda),
  write("Nama sepupu: "),
  write(Sepupu),
  nl,
  fail.

nama_sepupu(_, _).
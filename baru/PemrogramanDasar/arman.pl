%fakta
orangtua(ali, arman).
orangtua(ali, ana).
orangtua(ima, arman).
orangtua(ima, ana).
orangtua(arman, lila).
orangtua(arman, adrian).
orangtua(sari, lila).
orangtua(sari, adrian).
orangtua(budi, ina).
orangtua(budi, aldi).
orangtua(ana, ina).
orangtua(ana, aldi).

pria(ali).
pria(arman).
pria(adrian).
pria(budi).
pria(aldi).

wanita(ima).
wanita(sari).
wanita(lila).
wanita(ana).
wanita(ina).

%pre_aturan:-
ayah(X,Y):- orangtua(X,Y),pria(X).
ibu(X,Y):- orangtua(X,Y),wanita(X).

a_1(X,Y,Z):- ayah(X,Y),ayah(Y,Z).
a_2(X,Y,Z):- ayah(X,Y),ibu(Y,Z).

%aturan
g_1(X,Y,Z):- a_1(X,Y,Z);a_2(X,Y,Z).
g_1_1(Z):- a_1(X,Y,Z),X=ali,Y=arman;a_2(X,Y,Z),X=ali,Y=ana.
g_1_2(Z):- a_1(X,Y,Z),X=ali,Y=arman,pria(Z);
           a_2(X,Y,Z),X=ali,Y=ana,pria(Z).

g_1_3(Z):- a_1(X,Y,Z),X=ali, Y=arman,wanita(Z);
           a_2(X,Y,Z),X=ali, Y=ana,wanita(Z).

tante(Y):- ayah(X,Y),X=ali,Y\=arman.
tante1(Y):- ayah(X,Y),X=ali,not(Y=arman).
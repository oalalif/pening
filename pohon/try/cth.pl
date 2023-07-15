orangtua(andi,tono).
orangtua(lastri,tono).
orangtua(budi,uci).
orangtua(yani,uci).

jeniskelamin(tono,pria).
jeniskelamin(andi,pria).
jeniskelamin(budi,pria).
jeniskelamin(lastri,wanita).
jeniskelamin(uci,wanita).
jeniskelamin(yani,wanita).

ayah(X,Y):-
orangtua(X,Y),
jeniskelamin(X,pria).

ibu(X,Y):-
orangtua(X,Y),
jeniskelamin(X,wanita).
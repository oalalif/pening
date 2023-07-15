% Fakta-fakta penyakit
penyakit(p001, influenza, 'infeksi virus Varicella Zoster', obatA).
penyakit(p002, tuberculosis, 'bakteri mycobacterium tuberculosis', obatB).
penyakit(p003, cacar_air, 'virus Varicella Zoster', obatC).
penyakit(p004, demam_berdarah_dengue, 'Nyamuk Aedes Aegypti', obatD).
penyakit(p005, hepatitis, 'virus Hepatitis', obatE).

% Fakta-fakta gejala
gejala(g001, 'nyeri otot').
gejala(g002, batuk).
gejala(g003, bersin).
gejala(g004, 'hidung tersumbat').
gejala(g005, 'sakit kepala').
gejala(g006, kelelahan).
gejala(g007, demam).
gejala(g008, 'batuk berdahak selama dua minggu').
gejala(g009, 'kehilangan nafsu makan').
gejala(g010, 'penurunan berat badan').
gejala(g011, 'berkeringat pada malam hari').
gejala(g012, 'timbul bintik kemerahan dikulit').
gejala(g013, 'kulit melepuh dan gatal').
gejala(g014, 'demam tinggi').
gejala(g015, 'nyeri persendian').
gejala(g016, 'trombosit turun drastis').
gejala(g017, pendarahan).
gejala(g018, 'nyeri perut').
gejala(g019, 'penyakit kuning').

% Fakta-fakta relasi
relasi(p001, g001).
relasi(p001, g002).
relasi(p001, g003).
relasi(p001, g004).
relasi(p001, g005).
relasi(p001, g006).
relasi(p001, g007).
relasi(p002, g006).
relasi(p002, g008).
relasi(p002, g009).
relasi(p002, g010).
relasi(p002, g011).
relasi(p003, g007).
relasi(p003, g012).
relasi(p003, g013).
relasi(p004, g007).
relasi(p004, g012).
relasi(p004, g015).
relasi(p004, g016).
relasi(p004, g017).
relasi(p005, g007).
relasi(p005, g015).
relasi(p005, g018).
relasi(p005, g019).

% Rules

% 1. Tampilkan Seluruh Id Penyakit & Nama Penyakit
tampilkan_id_penyakit :-
    penyakit(Id, Nama, _, _),
    format("Id Penyakit: ~w, Nama Penyakit: ~w~n", [Id, Nama]),
    fail.
tampilkan_id_penyakit.

% 2. Tampilkan Seluruh Id Gejala & Nama Gejala
tampilkan_id_gejala :-
    gejala(Id, Nama),
    format("Id Gejala: ~w, Nama Gejala: ~w~n", [Id, Nama]),
    fail.
tampilkan_id_gejala.

% 3. Tampilkan Seluruh Penyakit & Gejala
tampilkan_penyakit_gejala :-
    penyakit(IdPenyakit, NamaPenyakit, _, _),
    format("Penyakit: ~w~n", [NamaPenyakit]),
    tampilkan_gejala_penyakit(IdPenyakit),
    fail.
tampilkan_penyakit_gejala.

tampilkan_gejala_penyakit(IdPenyakit) :-
    relasi(IdPenyakit, IdGejala),
    gejala(IdGejala, NamaGejala),
    format("   - ~w~n", [NamaGejala]),
    fail.
tampilkan_gejala_penyakit(_).

% 4. Tampilkan Nama Penyakit & Obatnya
tampilkan_penyakit_obat :-
    penyakit(_, NamaPenyakit, _, Obat),
    format("Penyakit: ~w, Obat: ~w~n", [NamaPenyakit, Obat]),
    fail.
tampilkan_penyakit_obat.

% 5. Tampilkan Nama Penyakit yang Obatnya = obatB
tampilkan_penyakit_dengan_obat(Obat) :-
    penyakit(_, NamaPenyakit, _, Obat),
    format("Penyakit dengan obat ~w: ~w~n", [Obat, NamaPenyakit]),
    fail.
tampilkan_penyakit_dengan_obat(Obat) :-
    \+ penyakit(_, _, _, Obat),
    format("Tidak ada penyakit dengan obat ~w~n", [Obat]).

% 6. Tampilkan Nama gejala penyakit = "Cacar Air"
tampilkan_penyakit_dengan_gejala(NamaGejala) :-
    gejala(IdGejala, NamaGejala),
    relasi(IdPenyakit, IdGejala),
    penyakit(IdPenyakit, NamaPenyakit, _, _),
    format("Penyakit dengan gejala ~w: ~w~n", [NamaGejala, NamaPenyakit]),
    fail.
tampilkan_penyakit_dengan_gejala(NamaGejala) :-
    \+ gejala(_, NamaGejala),
    format("Tidak ada penyakit dengan gejala ~w~n", [NamaGejala]).

% 7. Tampilkan Nama gejala penyakit = "Influenza"
tampilkan_penyakit_dengan_gejala_penyakit(NamaPenyakit) :-
    penyakit(IdPenyakit, NamaPenyakit, _, _),
    tampilkan_gejala_penyakit(IdPenyakit),
    fail.
tampilkan_penyakit_dengan_gejala_penyakit(NamaPenyakit) :-
    \+ penyakit(_, NamaPenyakit, _, _),
    format("Tidak ada penyakit dengan nama ~w~n", [NamaPenyakit]).
    
% 8. Tampilkan Nama gejala penyakit = "Hepatitis"
tampilkan_penyakit_dengan_gejala_penyakit(NamaPenyakit) :-
    penyakit(IdPenyakit, NamaPenyakit, _, _),
    tampilkan_gejala_penyakit(IdPenyakit),
    fail.
tampilkan_penyakit_dengan_gejala_penyakit(NamaPenyakit) :-
    \+ penyakit(_, NamaPenyakit, _, _),
    format("Tidak ada penyakit dengan nama ~w~n", [NamaPenyakit]).

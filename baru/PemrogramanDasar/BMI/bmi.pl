bmi:-
    write("MENGHITUNG BERAT MASSA IDEAL"),nl,
    write("Masukkan Berat Badan (Kg): "),read(BB),
    write("Masukkan Tinggi Badan (Cm): "),read(TB),
    BMI is BB/((TB/100)^2),
    BMI_Pas is round(BMI),
    write("BMI Anda: "),write(BMI_Pas),nl,
    (
      BMI_Pas < 18.5 -> write("Berat Badan Kurang");
      BMI_Pas >= 18.5, BMI_Pas =< 24.9 -> write("Berat Badan Normal");
      BMI_Pas >= 25, BMI_Pas =< 29.9 -> write("Kelebihan Berat Badan");
      BMI_Pas > 30 -> write("Obesitas")
    ).

def kalkulator_lengkap(angka1, angka2):

  penjumlahan = angka1 + angka2
  print(f"Penjumlahan: {angka1} + {angka2} = {penjumlahan}")


  pengurangan = angka1 - angka2
  print(f"Pengurangan: {angka1} - {angka2} = {pengurangan}")


  perkalian = angka1 * angka2
  print(f"Perkalian: {angka1} * {angka2} = {perkalian}")


  if angka2 != 0:
    pembagian = angka1 / angka2
    print(f"Pembagian: {angka1} / {angka2} = {pembagian}")
  else:
    print("Tidak dapat membagi dengan nol.")


angka_pertama = float(input("Masukkan angka pertama: "))
angka_kedua = float(input("Masukkan angka kedua: "))

kalkulator_lengkap(angka_pertama, angka_kedua)
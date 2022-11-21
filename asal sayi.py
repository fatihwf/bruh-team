bas = int (input("baslangıc degeri: "))
son = int (input("son deger: "))

kactaneasal = 0
for sayi in range (bas+1 , son) :
    if sayi < 2:
        continue
    bölen = 2
    while bölen < (sayi):
        if sayi % bölen ==0:
            break
        bölen += 1
    else:
        kactaneasal += 1
        print(sayi)

print(f"{kactaneasal} tane asal sayı")

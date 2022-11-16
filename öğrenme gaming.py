#bankamatik uygulaması
hesapno = 1
cıkıs =''
karar = ''
hesaplar = {}
secim = ''







while karar != "3":
    sayac = 0
    karar = input ("giriş yapmak için 1 // hesap açmak için 2 // cıkıs icin 3 --> : ")


    if karar == '1':
        hesapno = int(input("hesapno: "))
        sifre = input("sifre: ")


        while sifre != hesaplar[hesapno]['sifre']  :
            print("yanlıs sifre !!!")
            sayac += 1

            if sayac > 3:
                print("hesap geçici süre kilitlenmiştir. çıkış yapılıyor..")
                exit()
                hesapno = int(input("hesapno: "))
                sifre = input("sifre: ")

        else:     # giriş yapıldı.

            while secim != '3':
                secim = input("para yüklemek için v, para çekmek için k, çıkış için 3 'e tıklayınız: ")



                if secim == 'v':
                    miktar = int(input("ne kadar para yüklemek istersiniz: "))
                    hesaplar[hesapno]["bakiye"] += miktar
                    print(f"yeni bakiye: {hesaplar[hesapno]['bakiye']}")


                elif  secim == 'k':
                    miktar = int(input("ne kadar para çekmek istersiniz: "))
                    hesaplar[hesapno]["bakiye"] -= miktar
                    print(f"Paranız verilmistir. Yeni Bakiye: {hesaplar[hesapno]['bakiye']}")

                else:
                    print("cıkıs yapılıyor..")
                    exit()




    elif karar == '2' :
        ad = input("ad: ")
        sifre = input("sifre: ")
        bakiye = 0
        hesaplar[hesapno] = {"ad": ad, "sifre": sifre, "bakiye": bakiye}
        print(f"merhaba {ad}, hesap numaranız {hesapno}. İstediğiniz zaman sifreniz ile giris yapabilirsiniz.")
        hesapno += 1
else:
    exit()









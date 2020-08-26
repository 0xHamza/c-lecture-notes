//dinamik bellek malloc calloc realloc free genel ornek HAMZA ÇELIK
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i,x,*ptrTam,n=0,nYeni=0,secim,secimDizi,secimTuru=0;
  char *ptrChr,bosluk;
  float *ptrFl;

  //malloc veya calloc hangisi olusturacagimzia karar veriyoruz
  do
  {
    printf("\nHangi turde dinamik dizi olusturmak istersiniz:\n[1] malloc\n[2] calloc\nSeciminiz: ");
    scanf("%d",&secimTuru);
  }while(secimTuru!=1 && secimTuru !=2);



    printf("Dizinizin tipi nasil olsun:");
  //olusturacagimiz dinamik diziyi sectiriyoruz
  do
  {
    printf("\n[1] integer\n[2] char\n[3] float\nSeciminiz(1-3): ");
    scanf("%d",&secimDizi);
  }while(secimDizi<1 && secimDizi >3);
  //dinamik dizinin boyutunu
  while(n<1)
  {
    printf("\nBoyutu(eleman sayisi) ne kadar olsun: ");
    scanf("%d",&n);
  }
  //secilen dinamik dizi turune gore dizi olusturacagiz
  switch (secimDizi)
  {
    case 1://integer bir dinamik dizi olsutuyuyoruz ve kullanıcıya duz veye tersten ekrana bastirabiliyor

    if(secimTuru==1)//malloc veya calloc tipinde istenmisse ona gore dizilerimizide olsuturcagiz
    {
      ptrTam = (int *) malloc (n * sizeof(int));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
    }else
    {
      ptrTam = (int *) calloc (n, sizeof(int));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
    }



      if(ptrTam!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
      {
        for(i=0;i<n;i++)
        {
          printf("Integer tipinde dizinizin %d. indisini giriniz: ",i);
          scanf("%d",ptrTam+i);
          //ptrTam++;
        }
        //diziyi doldurduktan sonra ekrana bastirma seklini alip ona gore dizi ekrana basiliyor
        printf("\nDiziniz olusturulmustur nasil goruntulemek istersiniz:\n[1] Duz\n[2] Ters\nSeciminiz: ");
        scanf("%d",&secim);
        //diziyi secime gore ekrana bastirma
        switch (secim)
        {
          default:
            printf("\nYanlis secim o halde:");
          case 1:
            printf("\nDuz:");
            for(i=0;i<n;i++)
            {
              printf("\n%d. > %d",i,*(ptrTam+i));
            }
            break;
          case 2:
            printf("\nTers:");
            for(i=n-1;i>=0;i--)
            {
              printf("\n%d. > %d",i,*(ptrTam+i));
            }
          break;
        }



      }else
      {
        printf("\nBellekte o kadar alan ayrilamadi!");
      }
      break;
    case 2://boyutunu almistik, simdi ise char dizisi olusturcagiz
      if(secimTuru==1)//malloc veya calloc tipinde istenmisse ona gore dizilerimizide olsuturcagiz
        {
            ptrChr = (char *) malloc (n * sizeof(char));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
        }else
        {
          ptrChr = (char *) calloc (n, sizeof(char));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
        }


      if(ptrChr!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
      {

        printf("\nMetin mi girmek istersiniz Yoksa tek tek karakter mi girmek istesiniz? [1]Karakter [2]Metin\nSeciminiz: ");
        scanf("%d",&secim);
        scanf("%c",&bosluk);//char oldugu icin ustte bir deger alinca enter basinca bir sonraki scanf e enteri(bosluk degerini) basiyor o yuzden enteri boslugu oylesine bir char a aldiriyorum her seferinde
        if(secim!=2)//tek tek karakter girisi secildiigi icin ona gore alicaz
        {
          for(i=0;i<n;i++)
          {
            printf("char tipinde dizinizin %d. indisini giriniz: ",i);
            scanf("%c",ptrChr+i);
            scanf("%c",&bosluk);//char oldugu icin ustte bir deger alinca enter basinca bir sonraki scanf e enteri(bosluk degerini) basiyor o yuzden enteri boslugu oylesine bir char a aldiriyorum her seferinde
            //ptrTam++;
          }
        }else if(secim==2)
        {
          printf("char tipinde dizinizin metninini giriniz: ",i);
          gets(ptrChr);
        }

          //diziyi doldurduktan sonra ekrana bastirma seklini alip ona gore dizi ekrana basiliyor
          printf("\nDiziniz olusturulmustur nasil goruntulemek istersiniz:\n[1] Duz\n[2] Ters\nSeciminiz: ");
          scanf("%d",&secim);
          //diziyi secime gore ekrana bastirma
          switch (secim)
          {
            default:
              printf("\nYanlis secim o halde:");
            case 1:
              printf("\nDuz:");
              for(i=0;i<n;i++)
              {
                printf("\n%d. > %c",i,*(ptrChr+i));
              }
              break;
            case 2:
              printf("\nTers:");
              for(i=n-1;i>=0;i--)
              {
                printf("\n%d. > %c",i,*(ptrChr+i));
              }
            break;
          }
          //simdi ise kullanicidan girilen alanin boyutu ile beasta diziye atadigi boyutu kontrol edecegiz ve alan fazla veya az ona gore islem yaptircam
          for(i=0;*(ptrChr+i)!='\0';i++);//kullanicinin doldurdugu alani i ile tespit ediyorum
          if(n!=i)//basta dizi icin olsutrudugu alan eger doldurgu alan ile ayni degil ise ralloc ile otomatik duzeltipi duzletmek istemedigini soruyorum
          {
            printf("\nGoruldugu uzere diziniz de alan sorunu olusmus!");
            printf("\nDizinizdeki dolu alan: %d toplam alan: %d, fazlalik alanlari otomatik silinsin, yetersiz alanlar ise acilsin mi? [1]Evet [2]Hayir\nSeciminiz: ",i,n);
            scanf("%d",&secim);
            if(secim==1)
            {
              n=i;
              ptrChr=realloc(ptrChr,n*sizeof(char));
              if(ptrChr!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
              {
                printf("\nAlan Ayarlandi. Yeni hali:");
                for(i=0;i<n;i++)
                {
                  printf("\n%d. > %c",i,*(ptrChr+i));
                }
              }else{printf("\nBellek hafizasi yetrsiz geldi!");}
            }else{printf("\nAnlasildi islemler bitmistir...");}
          }

        }else
        {
          printf("\nBellekte o kadar alan ayrilamadi!");
        }
        break;


    case 3://float bir dinamik dizi olsutuyuyoruz ve kullanıcıya duz veye tersten ekrana bastirabiliyor
      if(secimTuru==1)//malloc veya calloc tipinde istenmisse ona gore dizilerimizide olsuturcagiz
      {
          ptrFl = (float *) malloc (n * sizeof(float));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
      }else
      {
        ptrFl = (float *) calloc (n, sizeof(float));//dinaik dizimizi aldigimiz degerlere gore olusturduk.
      }


      if(ptrFl!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
      {
        for(i=0;i<n;i++)
        {
          printf("Float tipinde dizinizin %d. indisini giriniz: ",i);
          scanf("%f",ptrFl+i);

        }
        //diziyi doldurduktan sonra ekrana bastirma seklini alip ona gore dizi ekrana basiliyor
        printf("\nDiziniz olusturulmustur nasil goruntulemek istersiniz:\n[1] Duz\n[2] Ters\nSeciminiz: ");
        scanf("%d",&secim);
        //diziyi secime gore ekrana bastirma
        switch (secim)
        {
          default:
            printf("\nYanlis secim o halde:");
          case 1:
            printf("\nDuz:");
            for(i=0;i<n;i++)
            {
              printf("\n%d. > %0.2f",i,*(ptrFl+i));
            }
            break;
          case 2:
            printf("\nTers:");
            for(i=n-1;i>=0;i--)
            {
              printf("\n%d. > %0.2f",i,*(ptrFl+i));
            }
          break;
        }



      }else
      {
        printf("\nBellekte o kadar alan ayrilamadi!");
      }
      break;
    case 4:
    break;
    default:
    printf("\nGecersiz secim yaptnız 1-4 arası secilmeliydi!");
  }


  //ekrana basma islemi bittiktekn sonra diziyi kucultmek veya buyutlmek isteyip istemedigini soruyoruz
  printf("\n\nDizinizin boyutunu degistirmek ister misin? [1] Evet [2]Hayir\nSeciminiz: ");
  scanf("%d",&secim );
  switch (secim)
  {
    default:
      printf("\nYanlis secim o halde:");
    case 2:
      printf("\nDiziyi yeniden boyutlandirma yapmiyoruz...");
      break;
    case 1:
        switch (secimDizi)
        {
          case 1://integer tipinde olsuturlmus olan diziye yeni boyut vercegiz
                while(nYeni<1)
                {
                  printf("Yeni boyutu(eleman sayisi/indis) ne kadar olsun: ");
                  scanf("%d",&nYeni);
                }
                //dinamik diziyi yendiden boyutlandirmamizi yaptik.
                ptrTam = realloc(ptrTam, nYeni* sizeof(int));
                if(ptrTam!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
                {
                  if(nYeni>n)printf("\nEski dizinize %d tane indis daha eklenmistir.",nYeni-n);
                  else printf("Eski diziniz kcultulmustur ve son %d indis gitmistir.",n-nYeni);
                  //yeni boyutlu diziyi kullanicinin nasil dolduracagini ogreniyoruz.
                  printf("\nYeni dizinizi nasil doldurmak istesiniz: \n[1]Eski dizi degerlerini kaybetmeden yanina\n[2]Eski dizi degerlerininde ustune\n[3]Dizi ye bir sey eklemeyecegim oldugu gibi kalacak.");
                  printf("\nSeciminiz: ");
                  scanf("%d",&secim);
                  switch (secim)
                  {
                    case 1:
                      printf("\nEski boyut %d. indisinden eklemeye devam ediyorsunuz.",(nYeni<n) ? nYeni:n);
                      for(i=n;i<nYeni;i++)
                      {
                        printf("\nYeni dizinizin %d. indisini giriniz: ",i);
                        scanf("%d",ptrTam+i);
                      }
                      printf("\nYeni diziniz:");
                      for(i=0;i<nYeni;i++)
                      {
                        printf("\n%d. > %d",i,*(ptrTam+i));
                      }
                      break;
                      case 2:
                      printf("\nYeni degerleri giriniz.");
                      for(i=0;i<nYeni;i++)
                      {
                        printf("\nYeni dizinizin %d. indisini giriniz: ",i);
                        scanf("%d",ptrTam+i);
                      }
                      printf("\nYeni diziniz:");
                      for(i=0;i<nYeni;i++)
                      {
                        printf("\n%d. > %d",i,*(ptrTam+i));
                      }
                      break;
                      default:
                        printf("\nHatali Secim!");
                      case 3:
                      printf("\nO halde yeni diziniz oldugu gibi kalmistir. Yeni Dizi:");
                      for(i=0;i<nYeni;i++)
                      {
                        printf("\n%d. > %d",i,*(ptrTam+i));
                      }
                      break;
                    }
                  }else{printf("Bellekte yeterli alan ayrilamadi!");}

            break;
          case 2:

              printf("Yeni alan boyutunu(indis/eleman sayisi) giriniz: ");
              scanf("%d",&nYeni);

              ptrChr=realloc(ptrChr,nYeni*sizeof(char));
              if(ptrChr!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
              {
                printf("\nYeni Alan Ayarlandi. Yeni hali:");
                for(i=0;i<nYeni;i++)
                {
                  printf("\n%d. > %c",i,*(ptrChr+i));
                }
              }else{printf("\nBellek hafizasi yetrsiz geldi!");}
            break;
          case 3:
          while(nYeni<1)
          {
            printf("Yeni boyutu(eleman sayisi/indis) ne kadar olsun: ");
            scanf("%d",&nYeni);
          }
          //dinamik diziyi yendiden boyutlandirmamizi yaptik.
          ptrFl = realloc(ptrFl, nYeni* sizeof(float));
          if(ptrFl!=NULL)//bellekte yeteri kadar alan ayrilirsa dizimizin icini doldurmaya basliyoruz
          {
            if(nYeni>n)printf("\nEski dizinize %d tane indis daha eklenmistir.",nYeni-n);
            else printf("Eski diziniz kcultulmustur ve son %d indis gitmistir.",n-nYeni);
            //yeni boyutlu diziyi kullanicinin nasil dolduracagini ogreniyoruz.
            printf("\nYeni dizinizi nasil doldurmak istesiniz: \n[1]Eski dizi degerlerini kaybetmeden yanina\n[2]Eski dizi degerlerininde ustune\n[3]Dizi ye bir sey eklemeyecegim oldugu gibi kalacak.");
            printf("\nSeciminiz: ");
            scanf("%d",&secim);
            switch (secim)
            {
              case 1:
                printf("\nEski boyut %d. indisinden eklemeye devam ediyorsunuz.",(nYeni<n) ? nYeni:n);
                for(i=n;i<nYeni;i++)
                {
                  printf("\nYeni dizinizin %d. indisini giriniz: ",i);
                  scanf("%f",ptrFl+i);
                }
                printf("\nYeni diziniz:");
                for(i=0;i<nYeni;i++)
                {
                  printf("\n%d. > %0.2f",i,*(ptrFl+i));
                }
                break;
                case 2:
                printf("\nYeni degerleri giriniz.");
                for(i=0;i<nYeni;i++)
                {
                  printf("\nYeni dizinizin %d. indisini giriniz: ",i);
                  scanf("%f",ptrFl+i);
                }
                printf("\nYeni diziniz:");
                for(i=0;i<nYeni;i++)
                {
                  printf("\n%d. > %0.2f",i,*(ptrFl+i));
                }
                break;
                default:
                  printf("\nHatali Secim!");
                case 3:
                printf("\nO halde yeni diziniz oldugu gibi kalmistir. Yeni Dizi:");
                for(i=0;i<nYeni;i++)
                {
                  printf("\n%d. > %0.2f",i,*(ptrFl+i));
                }
                break;
              }
            }else{printf("Bellekte yeterli alan ayrilamadi!");}

          break;
          case 4: break;
          default: break;
        }
      }



  free(ptrTam);//olusuturlan alanı program isi btince siliyoruz
  return 0;
}

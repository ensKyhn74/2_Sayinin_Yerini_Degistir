#include <stdio.h>
// Klavyden girilen 2 tam sayının yerini değiştirin

int main() 

{

 int sayi1,sayi2;
 int gecici;
 
 printf("1.sayiyi girin: ");
 scanf("%d",&sayi1);
 
 printf("2.sayiyi girin: ");
 scanf("%d",&sayi2);
 
 printf("ilk durum: %d %d\n",sayi1,sayi2);
 
 
 // 1.sayı: 5   2.sayı: 8 olsun
 
 gecici = sayi1; // gecici = 5
 sayi1 = sayi2;  // sayi1 = 8
 sayi2 = gecici; // sayi2 = 5
 // swap(takas,yer değiştirme) işlemi yapılır
 
 printf("son durum: %d %d",sayi1,sayi2);
// 2 ondalıklı sayının yerinin değiştirilmesi,
// 2 karakterin yerinin değiştirilmesi 
// aynı mantıkla gerçekleştirilir 
 
 return 0;

}
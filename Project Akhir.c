#include <stdio.h>
#include <windows.h>
#include "File.h" 
#include <conio.h>

                                      
int main(){

    printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t||                   SELAMAT DATANG DI PROGRAM KONVERSI MATA UANG                          ||\n");
	printf("\t\t||                            Oleh: FATUR RAHMAN STOFFEL - (1806148675)                    ||\n");
	printf("\t\t||                                  IRFAN FAKHRIANTO     - (1806200356)                    ||\n");
	printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");

	printf("\n\t\t                        Program ini bertujuan untuk mengkonversi mata uang\n");
	printf("  \t\t                                 dari 33 negara \n");

	system("pause");
	system("cls");
	goto menu;
	menu:
		
	printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t||                            KONVERSI MATA UANG                             ||\n");
	printf("\t\t||                           oleh Fatur dan Irfan                            ||\n");
	printf("\t\t||---------------------------------------------------------------------------||\n");
	printf("\t\t||---------------------------------------------------------------------------||\n");
	printf("\t\t||1. KONVERSI MATA UANG                                                      ||\n");
	printf("\t\t||2. INFORMASI KODE MATA UANG                                                ||\n");
	printf("\t\t||3. PETUNJUK PENGGUNAAN                                                     ||\n");
	printf("\t\t||4. EXIT                                                                    ||\n");
	printf("\t\t||---------------------------------------------------------------------------||\n");
	printf("\t\t||                     MASUKKAN INPUT BILANGAN BULAT                         ||\n");
	printf("\t\t||---------------------------------------------------------------------------||\n");
	printf("\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\tPilihan Anda:");
	menu = (getch()-'0');
	system("cls");

	
	
		switch (menu)
		{
			case 1 :
			konversi();
			break;
			
			case 2 :
			kode();
			break;
			
			case 3 :
			petunjuk();
			break;
			
			case 4 :
			return 0;
			
			default :
			handling();
			goto menu;
		}
	
	
	
	
} 

int petunjuk()//menu petunjuk
{   
	how:
	printf("-------------------------------------------------------------------------------\n");
	printf("||                        CARA PENGGUNAAN PROGRAM                            ||\n");
	printf("||---------------------------------------------------------------------------||\n");
	printf("|| - Saat ingin menjalankan program konversi mata uang, lihat terlebih dahulu||\n");
	printf("||   kode mata uang negara yang ingin di konversi pada menu kode nomor 2     ||\n");
	printf("||                                                                           ||\n");
	printf("|| - Setelah memasukkan kode negara awal dan tujuan yang ingin di konversi,  ||\n");
	printf("||   masukkan jumlah uang yang ingin di konversi                             ||\n");
	printf("||                                                                           ||\n");
	printf("|| - jumlah mata uang negara pilihan awal anda telah terkonversi             ||\n");
	printf("||   ke mata uang negara tujuan                                              ||\n");
	printf("||---------------------------------------------------------------------------||\n");
	printf("||  0. kembali ke menu awal                                                  ||\n");
	printf("||---------------------------------------------------------------------------||\n");
	printf("|| Harap tidak memasukan input Char                                          ||\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("\n input:");
	scanf("%d", &kembali);
	if(kembali == 0)
	{
		system("cls");
		return main();
		
	}
	do
	{
	    printf("||---------------------------------------------------------------------------||\n");
	    printf("||Input menu yang anda masukan salah, Silahkan masukan ulang !!              ||\n");
	    printf("||---------------------------------------------------------------------------||\n");
	    fflush(stdin);
	    system("pause");
	    system("cls");
		goto how;	
	}while(kembali != 0);
	
	   }  
	   
int kode()// kode-kode mata uang negara yang akan di konversi//
{    masuk:
	printf("\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t||           Masukan  nomor yang ada sesuai mata uang pada input             ||\n");
	printf("\t||-------------------------------------------------------------------------- ||\n");
	printf("\t|| 1.brunei dollar(brunei)                                                   ||\n");
	printf("\t|| 2.rupiah(indonesia)                                                       ||\n");
	printf("\t|| 3.brazilian real(brazil)                                                  ||\n");
	printf("\t|| 4.canadian dollar(kanada)                                                 ||\n");
	printf("\t|| 5.swissfranc(swiss dan lichtenstein)                                      ||\n");
	printf("\t|| 6.chilleanpeso(chili)                                                     ||\n");
	printf("\t|| 7.yuan(china)                                                             ||\n");
	printf("\t|| 8.colombianpeso(colombia)                                                 ||\n");
    printf("\t|| 9.czechkoruna(czech republic)                                             ||\n");
	printf("\t|| 10.danishkrone(denmark)                                                   ||\n");
	printf("\t|| 11.egyptianpound(egypt)                                                   ||\n");
	printf("\t|| 12.euro(akrhotiri dhekelia,andorra,austria,belgium,cyprus,estonia,finland,||\n");
	printf("\t||    france,germany,greece,ireland,italy,kosovo,latvia,lithuania,luxembourg,||\n");
	printf("\t||    malta,monaco,montenegro,netherlands,portugal,san-mario,slovakia,spain, ||\n");
	printf("\t||    slovakia,sovenia, dan vatikan)                                         ||\n");
	printf("\t|| 13.hongkongdollar(hongkong)                                               ||\n");
	printf("\t|| 14.croatiakuna(croatia)                                                   ||\n");
	printf("\t|| 15.indianrupee(india)                                                     ||\n");
	printf("\t|| 16.iraqidinar(iraq)                                                       ||\n");
	printf("\t|| 17.iranianrial(iran)                                                      ||\n");
	printf("\t|| 18.icelandkrona(iceland)                                                  ||\n");
	printf("\t|| 19.yen(japan)                                                             ||\n");
	printf("\t|| 20.riel(cambodia)                                                         ||\n");
	printf("\t|| 21.northkoreanwon(north korea)                                            ||\n");
	printf("\t|| 22.southkoreanwon(south korea)                                            ||\n");
	printf("\t|| 23.kip(laos)                                                              ||\n");
	printf("\t|| 24.kyat(myanmar)                                                          ||\n");
	printf("\t|| 25.mexicanpeso(mexico)                                                    ||\n");
	printf("\t|| 26.melaysianringit(malaysia)                                              ||\n");
	printf("\t|| 27.newzealanddollar(new zealand,cook island,niue, dan pitcairn island)    ||\n");
	printf("\t|| 28.kina(papua new guinea)                                                 ||\n");
	printf("\t|| 29.philippinpeso(philippines)                                             ||\n");
	printf("\t|| 30.saudiriyal(saudi arabia)                                               ||\n");
	printf("\t|| 31.singaporedollar(singapure dan brunei darussalam)                       ||\n");
	printf("\t|| 32.taiwandollar(taiwan)                                                   ||\n");
	printf("\t|| 33.usdollar(united state of america,american samoa,guam,haiti,micronesia  ||\n");
	printf("\t||    british virgin island,marshall island,palau,panama, dan puerto rico    ||\n");
	printf("\t||---------------------------------------------------------------------------||\n");
	printf("\t|| 0. Kembali                                                                ||\n");
	printf("\t||---------------------------------------------------------------------------||\n");
	printf("\tPilihan Menu:");
	scanf("%d", &kembali);
	system ("cls");
    fflush (stdin);
	
    switch(kembali){
	
    case 0 :
    	return main();
    	
    default :
    	handling2 ();
    	goto masuk;
    	
}
	 }
	 
	 int handling()
{
	printf("Anda hanya boleh memilih angka yang tertera!!!");
	fflush(stdin);
	system ("pause");
	system("cls");
}

	int handling2()
	{
	printf("Input yang anda masukkan tidak tersedia!!!");
	fflush(stdin);
	system("pause");
	system ("cls");

	}   
	
int konversi()//memulai program konversi mata uang
{   input:
    printf("||$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$||\n");
    printf("||Masukkan kode mata uang awal anda   ||\n");
	printf("||------------------------------------||\n");
	printf("|| Tekan 0 untuk kembali ke menu awal ||\n");
    printf("||$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$||\n");
    printf("pilih:");
    scanf("%d", &input);
	if(input < 35)
	{
		switch(input)
		{
			case 0 :
				system("cls");
				return main();
			case 1  :
				bruneidollar();
				break;
			case 2  :
				rupiah();
				break;
			case 3  :
				 brazilianreal();
				 break;
			case 4  :
				canadiandollar();
				break;
			case 5  :
				swissfranc();
				break;
			case 6  :
				chileanpeso();
				break;
			case 7  :
				yuan();
				break;
			case 8  :
				colombianpeso();
				break;
			case 9  :
				czechkoruna();
				break;
			case 10 :
				danishkrone();
				break;
			case 11 :
				egyptianpound();
				break;
			case 12 :
				euro();
				break;
			case 13 :
				hongkongdollar();
				break;
			case 14 :
				croatiankuna();
				break;
			case 15 :
				indianrupee();
				break;
			case 16 :
				iraqidinar();
				break;
			case 17 :
				iranianrial();
				break;
			case 18 :
				icelandkrona();
				break;
			case 19 :
				yen();
				break;
			case 20 :
				riel();
				break;
			case 21 :
				northkoreanwon();
				break;
			case 22 :
				southkoreanwon();
				break;
			case 23 :
				kip();
				break;
			case 24 :
				kyat();
				break;
			case 25 :
				mexicanpeso();
				break;
			case 26 :
				malaysianringgit();
				break;
			case 27 :
				newzealanddollar();
				break;
			case 28 :
				kina();
				break;
			case 29 :
				philippinepeso();
				break;
			case 30 :
				saudiriyal();
				break;
			case 31 :
				singaporedollar();
				break;
			case 32 :
				taiwandollar();
				break;
			case 33 :
				usdollar();
				break;	
		}
		
	}
	else 
	{
		printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
		system("pause");
		system("cls");
		goto input;
		 
	}
		
}

int bruneidollar()//konversi dari mata uang brunei
{
	pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda     ||\n");
	printf(  "||Tekan 0 untuk kembali                   ||\n");
	printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
    if (pilih == 1)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    if (pilih == 2)
    {
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_rupiah = bil*a[0];
    printf("%.2f $ = %.2f Rp", bil, bruneidollar_rupiah);
    
  
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 3)
	{
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_brazilianreal = bil*a[1];
    printf("%.2f $ = %.2f R$", bil, bruneidollar_brazilianreal);
    
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
 
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 4)
	{
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_canadiandollar = bil*a[2];
    printf("%.2f $ = %.2f $", bil, bruneidollar_canadiandollar);
    

    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
    
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 5)
	{
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
   bruneidollar_swissfranc = bil*a[3];
    printf("%.2f $ = %.2f F", bil, bruneidollar_swissfranc);
    
    
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 6)
	{
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_chileanpeso = bil*a[4];
    printf("%.2f $ = %.2f $", bil, bruneidollar_chileanpeso);
    
    
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
 
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 7)
	{
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_yuan = bil*a[5];
    printf("%.2f $ = %.2f yuan", bil, bruneidollar_yuan);
    
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 8)
    {
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_colombianpeso = bil*a[6];
    printf("%.2f $ = %.2f $", bil, bruneidollar_colombianpeso);
    
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 9)
    {
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
    bruneidollar_czechkoruna = bil*a[7];
    printf("%.2f $ = %.2f Kc", bil, bruneidollar_czechkoruna);
    
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 10)
	 {
    printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_danishkrone = bil*a[8];
    printf("%.2f $ = %.2f kr", bil,  bruneidollar_danishkrone);
    
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_egyptianpound = bil*a[9];
    printf("%.2f $ = %.2f egyptian pound", bil,  bruneidollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_euro = bil*a[10];
    printf("%.2f $ = %.2f euro", bil,  bruneidollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
    {
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_hongkongdollar = bil*a[11];
    printf("%.2f $ = %.2f $", bil,  bruneidollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_croatiankuna = bil*a[12];
    printf("%.2f $ = %.2f Kn", bil,  bruneidollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_indianrupee = bil*a[13];
    printf("%.2f $ = %.2f Rupee", bil,  bruneidollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_iraqidinar = bil*a[14];
    printf("%.2f $ = %.2f dinar", bil,  bruneidollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 17)
    {
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_iranianrial = bil*a[15];
    printf("%.2f $ = %.2f rial", bil,  bruneidollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_icelandkrona = bil*a[16];
    printf("%.2f $ = %.2f Kr", bil,  bruneidollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_yen = bil*a[17];
    printf("%.2f $ = %.2f yen", bil,  bruneidollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_riel = bil*a[18];
    printf("%.2f $ = %.2f riel", bil,  bruneidollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_northkoreanwon = bil*a[19];
    printf("%.2f $ = %.2f Won", bil,  bruneidollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_southkoreanwon = bil*a[20];
    printf("%.2f $ = %.2f Won", bil,  bruneidollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_kip = bil*a[21];
    printf("%.2f $ = %.2f Kip", bil,  bruneidollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_kyat = bil*a[22];
    printf("%.2f $ = %.2f K", bil,  bruneidollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_mexicanpeso = bil*a[23];
    printf("%.2f $ = %.2f $", bil,  bruneidollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 26)	
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_malaysianringgit = bil*a[24];
    printf("%.2f $ = %.2f RM", bil,  bruneidollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_newzealanddollar = bil*a[25];
    printf("%.2f $ = %.2f $", bil,  bruneidollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_kina = bil*a[26];
    printf("%.2f $ = %.2f K", bil,  bruneidollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_philippinepeso = bil*a[27];
    printf("%.2f $ = %.2f Peso", bil, bruneidollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 30)
		{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_saudiriyal = bil*a[28];
    printf("%.2f $ = %.2f Riyal", bil, bruneidollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 31)
		{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_singaporedollar = bil*a[29];
    printf("%.2f $ = %.2f $", bil, bruneidollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
		{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_taiwandollar = bil*a[30];
    printf("%.2f $ = %.2f $", bil, bruneidollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     bruneidollar_usdollar = bil*a[31];
    printf("%.2f $ = %.2f $", bil, bruneidollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int rupiah()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda     ||\n");
	printf(  "||Tekan 0 untuk kembali                   ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
   
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	
	if(pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_bruneidollar = bil*b[0];
    printf("%.2f Rp = %.2f $", bil, rupiah_bruneidollar);
  
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if(pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_brazilianreal = bil*b[1];
    printf("%.2f Rp = %.2f R$", bil, rupiah_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_canadiandollar = bil*b[2];
    printf("%.2f Rp = %.2f $", bil, rupiah_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_swissfranc = bil*b[3];
    printf("%.2f Rp = %.2f F", bil, rupiah_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_chileanpeso = bil*b[4];
    printf("%.2f Rp = %.2f $", bil, rupiah_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_yuan = bil*b[5];
    printf("%.2f Rp = %.2f yuan", bil, rupiah_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_colombianpeso = bil*b[6];
    printf("%.2f Rp = %.2f $", bil, rupiah_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_czechkoruna = bil*b[7];
    printf("%.2f Rp = %.2f Kc", bil, rupiah_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_danishkrone = bil*b[8];
    printf("%.2f Rp = %.2f kr", bil, rupiah_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_egyptianpound = bil*b[9];
    printf("%.2f Rp = %.2f egyptian pound", bil, rupiah_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_euro = bil*b[10];
    printf("%.2f Rp = %.2f euro", bil, rupiah_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_hongkongdollar = bil*b[11];
    printf("%.2f Rp = %.2f $", bil, rupiah_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_croatiankuna = bil*b[12];
    printf("%.2f Rp = %.2f Kn", bil, rupiah_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_indianrupee = bil*b[13];
    printf("%.2f Rp = %.2f rupee", bil, rupiah_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_iraqidinar = bil*b[14];
    printf("%.2f Rp = %.2f dinar", bil, rupiah_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_iranianrial = bil*b[15];
    printf("%.2f Rp = %.2f rial", bil, rupiah_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_icelandkrona = bil*b[16];
    printf("%.2f Rp = %.2f Kr", bil, rupiah_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_yen = bil*b[17];
    printf("%.2f Rp = %.2f 	yen", bil, rupiah_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_riel = bil*b[18];
    printf("%.2f Rp = %.2f riel", bil, rupiah_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_northkoreanwon = bil*b[19];
    printf("%.2f Rp = %.2f Won", bil, rupiah_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
    if(pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_southkoreanwon = bil*b[20];
    printf("%.2f Rp = %.2f Won", bil, rupiah_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_kip = bil*b[21];
    printf("%.2f Rp = %.2f kip", bil, rupiah_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_kyat = bil*b[22];
    printf("%.2f Rp = %.2f kyat", bil, rupiah_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_mexicanpeso= bil*b[23];
    printf("%.2f Rp = %.2f $", bil, rupiah_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_malaysianringgit= bil*b[24];
    printf("%.2f Rp = %.2f RM", bil, rupiah_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_newzealanddollar= bil*b[25];
    printf("%.2f Rp = %.2f $", bil, rupiah_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_kina= bil*b[26];
    printf("%.2f Rp = %.2f K", bil, rupiah_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_philippinepeso= bil*b[27];
    printf("%.2f Rp = %.2f Peso", bil, rupiah_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_saudiriyal= bil*b[28];
    printf("%.2f Rp = %.2f riyal", bil, rupiah_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_singaporedollar= bil*b[29];
    printf("%.2f Rp = %.2f $", bil, rupiah_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if(pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_taiwandollar= bil*b[30];
    printf("%.2f Rp = %.2f $", bil, rupiah_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    rupiah_usdollar= bil*b[31];
    printf("%.2f Rp = %.2f $", bil, rupiah_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
}

int brazilianreal()
{
	
	pilih:
     
    printf("\n||Masukkan kode mata uang tujuan anda:    ||\n");
	printf(  "||Tekan 0 untuk kembali                   ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
	
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	
	if(pilih == 3)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if(pilih == 1)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_bruneidollar= bil*c[0];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	  if(pilih == 2)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_rupiah= bil*c[1];
    printf("%.2f R$ = %.2f Rp", bil, brazilianreal_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
    	  if(pilih == 4)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_canadiandollar= bil*c[2];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
    	  if(pilih == 5)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_swissfranc= bil*c[3];
    printf("%.2f R$ = %.2f F", bil, brazilianreal_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
     if(pilih == 6)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_chileanpeso= bil*c[4];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
      if(pilih == 7)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_yuan= bil*c[5];
    printf("%.2f R$ = %.2f yuan", bil, brazilianreal_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if(pilih == 8)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_colombianpeso= bil*c[6];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 9)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_czechkoruna= bil*c[7];
    printf("%.2f R$ = %.2f Kc", bil, brazilianreal_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 10)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_danishkrone= bil*c[8];
    printf("%.2f R$ = %.2f kr", bil, brazilianreal_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 11)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_egyptianpound= bil*c[9];
    printf("%.2f R$ = %.2f 	egyptian pound", bil, brazilianreal_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	


	if(pilih == 12)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_euro= bil*c[10];
    printf("%.2f R$ = %.2f euro", bil, brazilianreal_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 13)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_hongkongdollar= bil*c[11];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 14)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_croatiankuna= bil*c[12];
    printf("%.2f R$ = %.2f Kn", bil, brazilianreal_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 15)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_indianrupee= bil*c[13];
    printf("%.2f R$ = %.2f rupee", bil, brazilianreal_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 16)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_iraqidinar= bil*c[14];
    printf("%.2f R$ = %.2f dinar", bil, brazilianreal_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 17)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_iranianrial= bil*c[15];
    printf("%.2f R$ = %.2f rial", bil, brazilianreal_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 18)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_icelandkrona= bil*c[16];
    printf("%.2f R$ = %.2f Kr", bil, brazilianreal_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 19)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_yen= bil*c[17];
    printf("%.2f R$ = %.2f yen", bil, brazilianreal_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 20)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_riel= bil*c[18];
    printf("%.2f R$ = %.2f riel", bil, brazilianreal_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 21)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_northkoreanwon= bil*c[19];
    printf("%.2f R$ = %.2f Won", bil, brazilianreal_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 22)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_southkoreanwon= bil*c[20];
    printf("%.2f R$ = %.2f Won", bil, brazilianreal_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 23)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_kip= bil*c[21];
    printf("%.2f R$ = %.2f kip", bil, brazilianreal_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 24)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_kyat= bil*c[22];
    printf("%.2f R$ = %.2f K", bil, brazilianreal_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 25)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_mexicanpeso= bil*c[23];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 26)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_malaysianringgit= bil*c[24];
    printf("%.2f R$ = %.2f RM", bil, brazilianreal_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 27)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_newzealanddollar= bil*c[24];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if(pilih == 28)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_kina= bil*c[26];
    printf("%.2f R$ = %.2f K", bil, brazilianreal_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 29)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_philippinepeso= bil*c[27];
    printf("%.2f R$ = %.2f Peso", bil, brazilianreal_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 30)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_saudiriyal= bil*c[28];
    printf("%.2f R$ = %.2f riyal", bil, brazilianreal_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 31)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_singaporedollar= bil*c[29];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 32)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_taiwandollar= bil*c[30];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if(pilih == 33)
   	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    brazilianreal_usdollar= bil*c[31];
    printf("%.2f R$ = %.2f $", bil, brazilianreal_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
}

int canadiandollar()
{
	pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
    if (pilih == 4)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
	}
	
	if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_bruneidollar= bil*d[0];
    printf("%.2f $ = %.2f $", bil, canadiandollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_rupiah= bil*d[1];
    printf("%.2f $ = %.2f Rp", bil, canadiandollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_brazilianreal= bil*d[2];
    printf("%.2f $ = %.2f R$", bil, canadiandollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_swissfranc= bil*d[3];
    printf("%.2f $ = %.2f F", bil, canadiandollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_chileanpeso= bil*d[4];
    printf("%.2f $ = %.2f $", bil, canadiandollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_yuan= bil*d[5];
    printf("%.2f $ = %.2f yuan", bil, canadiandollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_colombianpeso= bil*d[6];
    printf("%.2f $ = %.2f $", bil, canadiandollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_czechkoruna= bil*d[7];
    printf("%.2f $ = %.2f Kc", bil, canadiandollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_danishkrone= bil*d[8];
    printf("%.2f $ = %.2f kr", bil, canadiandollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_egyptianpound= bil*d[9];
    printf("%.2f $ = %.2f egyptian pound", bil, canadiandollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_euro= bil*d[10];
    printf("%.2f $ = %.2f euro", bil, canadiandollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_hongkongdollar= bil*d[11];
    printf("%.2f $ = %.2f 	$", bil, canadiandollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_croatiankuna= bil*d[12];
    printf("%.2f $ = %.2f Kn", bil, canadiandollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_indianrupee= bil*d[13];
    printf("%.2f $ = %.2f rupee", bil, canadiandollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_iraqidinar= bil*d[14];
    printf("%.2f $ = %.2f dinar", bil, canadiandollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_iranianrial= bil*d[15];
    printf("%.2f $ = %.2f rial", bil, canadiandollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_icelandkrona= bil*d[16];
    printf("%.2f $ = %.2f Kr", bil, canadiandollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_yen= bil*d[17];
    printf("%.2f $ = %.2f yen", bil, canadiandollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_riel= bil*d[18];
    printf("%.2f $ = %.2f riel", bil, canadiandollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_northkoreanwon= bil*d[19];
    printf("%.2f $ = %.2f won", bil, canadiandollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_southkoreanwon= bil*d[20];
    printf("%.2f $ = %.2f won", bil, canadiandollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_kip= bil*d[21];
    printf("%.2f $ = %.2f kip", bil, canadiandollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_kyat= bil*d[22];
    printf("%.2f $ = %.2f kyat", bil, canadiandollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_mexicanpeso= bil*d[23];
    printf("%.2f $ = %.2f $", bil, canadiandollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_malaysianringgit= bil*d[24];
    printf("%.2f $ = %.2f RM", bil, canadiandollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_newzealanddollar= bil*d[25];
    printf("%.2f $ = %.2f $", bil, canadiandollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_kina= bil*d[26];
    printf("%.2f $ = %.2f kina", bil, canadiandollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_philippinepeso= bil*d[27];
    printf("%.2f $ = %.2f peso", bil, canadiandollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_saudiriyal= bil*d[28];
    printf("%.2f $ = %.2f riyal", bil, canadiandollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_singaporedollar= bil*d[29];
    printf("%.2f $ = %.2f $", bil, canadiandollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_taiwandollar= bil*d[30];
    printf("%.2f $ = %.2f $", bil, canadiandollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    canadiandollar_usdollar= bil*d[31];
    printf("%.2f $ = %.2f $", bil, canadiandollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
}

int swissfranc()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
   
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 5)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_bruneidollar= bil*e[0];
    printf("%.2f F = %.2f $", bil, swissfranc_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_rupiah= bil*e[1];
    printf("%.2f F = %.2f Rp", bil, swissfranc_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
    	if (pilih == 3 )
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_brazilianreal= bil*e[2];
    printf("%.2f F = %.2f $", bil, swissfranc_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 4 )
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_canadiandollar= bil*e[3];
    printf("%.2f F = %.2f $", bil, swissfranc_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
    if (pilih == 6 )
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_chileanpeso= bil*e[4];
    printf("%.2f F = %.2f $", bil, swissfranc_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
    
     if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_yuan= bil*e[5];
    printf("%.2f F = %.2f yuan", bil, swissfranc_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
		 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_colombianpeso= bil*e[6];
    printf("%.2f F = %.2f $", bil, swissfranc_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
	if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_czechkoruna= bil*e[7];
    printf("%.2f F = %.2f Kc", bil, swissfranc_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_danishkrone= bil*e[8];
    printf("%.2f F = %.2f kr", bil, swissfranc_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_egyptianpound= bil*e[9];
    printf("%.2f F = %.2f egyptian pound", bil, swissfranc_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
		if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_euro= bil*e[10];
    printf("%.2f F = %.2f euro", bil, swissfranc_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
		if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_hongkongdollar= bil*e[11];
    printf("%.2f F = %.2f $", bil, swissfranc_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
		if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_croatiankuna= bil*e[12];
    printf("%.2f F = %.2f Kn", bil, swissfranc_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_indianrupee= bil*e[13];
    printf("%.2f F = %.2f rupee", bil, swissfranc_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
		
	}
	
		if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_iraqidinar= bil*e[14];
    printf("%.2f F = %.2f dinar", bil, swissfranc_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_iranianrial= bil*e[15];
    printf("%.2f F = %.2f rial", bil, swissfranc_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_icelandkrona= bil*e[16];
    printf("%.2f F = %.2f kr", bil, swissfranc_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}


	if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_yen= bil*e[17];
    printf("%.2f F = %.2f yen", bil, swissfranc_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_riel= bil*e[18];
    printf("%.2f F = %.2f riel", bil, swissfranc_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_northkoreanwon= bil*e[19];
    printf("%.2f F = %.2f won", bil, swissfranc_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_southkoreanwon= bil*e[20];
    printf("%.2f F = %.2f won", bil, swissfranc_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_kip= bil*e[21];
    printf("%.2f F = %.2f kip", bil, swissfranc_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_kyat= bil*e[22];
    printf("%.2f F = %.2f kyat", bil, swissfranc_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_mexicanpeso= bil*e[23];
    printf("%.2f F = %.2f $", bil, swissfranc_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_malaysianringgit= bil*e[24];
    printf("%.2f F = %.2f RM", bil, swissfranc_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_newzealanddollar= bil*e[25];
    printf("%.2f F = %.2f $", bil, swissfranc_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_kina= bil*e[26];
    printf("%.2f F = %.2f kina", bil, swissfranc_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_philippinepeso= bil*e[27];
    printf("%.2f F = %.2f peso", bil, swissfranc_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

 if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_saudiriyal= bil*e[28];
    printf("%.2f F = %.2f riyal", bil, swissfranc_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_singaporedollar= bil*e[29];
    printf("%.2f F = %.2f $", bil, swissfranc_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_taiwandollar= bil*e[30];
    printf("%.2f F = %.2f $", bil, swissfranc_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    swissfranc_usdollar= bil*e[31];
    printf("%.2f F = %.2f $", bil, swissfranc_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

}

int chileanpeso()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 6)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_bruneidollar= bil*f[0];
    printf("%.2f $ = %.2f $", bil, chileanpeso_bruneidollar );
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_rupiah= bil*f[1];
    printf("%.2f $ = %.2f Rp", bil, chileanpeso_rupiah );
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
     if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_brazilianreal= bil*f[2];
    printf("%.2f $ = %.2f R$", bil, chileanpeso_brazilianreal );
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
     if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_canadiandollar= bil*f[3];
    printf("%.2f $ = %.2f $", bil, chileanpeso_canadiandollar );
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_swissfranc= bil*f[4];
    printf("%.2f $ = %.2f F", bil, chileanpeso_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	
	if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_yuan= bil*f[5];
    printf("%.2f $ = %.2f yuan", bil, chileanpeso_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}


	if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_colombianpeso= bil*f[6];
    printf("%.2f $ = %.2f $", bil, chileanpeso_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_czechkoruna= bil*f[7];
    printf("%.2f $ = %.2f Kc", bil, chileanpeso_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_danishkrone= bil*f[8];
    printf("%.2f $ = %.2f kr", bil, chileanpeso_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}


	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_egyptianpound= bil*f[9];
    printf("%.2f $ = %.2f egyptian pound", bil, chileanpeso_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_euro= bil*f[10];
    printf("%.2f $ = %.2f euro", bil, chileanpeso_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_hongkongdollar= bil*f[11];
    printf("%.2f $ = %.2f $", bil, chileanpeso_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_croatiankuna= bil*f[12];
    printf("%.2f $ = %.2f Kn", bil, chileanpeso_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}



	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_indianrupee= bil*f[13];
    printf("%.2f $ = %.2f rupee", bil, chileanpeso_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_iraqidinar= bil*f[14];
    printf("%.2f $ = %.2f dinar", bil, chileanpeso_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_iranianrial= bil*f[15];
    printf("%.2f $ = %.2f rial", bil, chileanpeso_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_icelandkrona= bil*f[16];
    printf("%.2f $ = %.2f krona", bil, chileanpeso_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_yen= bil*f[17];
    printf("%.2f $ = %.2f yen", bil, chileanpeso_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_riel= bil*f[18];
    printf("%.2f $ = %.2f riel", bil, chileanpeso_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_northkoreanwon= bil*f[19];
    printf("%.2f $ = %.2f won", bil, chileanpeso_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_southkoreanwon= bil*f[20];
    printf("%.2f $ = %.2f won", bil, chileanpeso_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_kip= bil*f[21];
    printf("%.2f $ = %.2f kip", bil, chileanpeso_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_kyat= bil*f[22];
    printf("%.2f $ = %.2f kyat", bil, chileanpeso_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_mexicanpeso= bil*f[23];
    printf("%.2f $ = %.2f $", bil, chileanpeso_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_malaysianringgit= bil*f[24];
    printf("%.2f $ = %.2f RM", bil, chileanpeso_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_newzealanddollar= bil*f[25];
    printf("%.2f $ = %.2f $", bil, chileanpeso_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_kina= bil*f[26];
    printf("%.2f $ = %.2f kina", bil, chileanpeso_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	
		if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_philippinepeso= bil*f[27];
    printf("%.2f $ = %.2f peso", bil, chileanpeso_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_saudiriyal= bil*f[28];
    printf("%.2f $ = %.2f riyal", bil, chileanpeso_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}

	if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_singaporedollar= bil*f[29];
    printf("%.2f $ = %.2f $", bil, chileanpeso_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}


	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_taiwandollar= bil*f[30];
    printf("%.2f $ = %.2f $", bil, chileanpeso_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    chileanpeso_usdollar= bil*f[31];
    printf("%.2f $ = %.2f $", bil, chileanpeso_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}	
}
		
}

int yuan()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 7)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_bruneidollar= bil*g[0];
    printf("%.2f ¥ = %.2f $", bil, yuan_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_rupiah= bil*g[1];
    printf("%.2f yuan = %.2f Rp", bil, yuan_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_brazilianreal= bil*g[2];
    printf("%.2f yuan = %.2f R$", bil, yuan_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_canadiandollar= bil*g[3];
    printf("%.2f yuan = %.2f $", bil, yuan_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
		if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_swissfranc= bil*g[4];
    printf("%.2f yuan = %.2f F", bil, yuan_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_chileanpeso= bil*g[5];
    printf("%.2f yuan = %.2f $", bil, yuan_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_colombianpeso= bil*g[6];
    printf("%.2f yuan = %.2f $", bil, yuan_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_czechkoruna= bil*g[7];
    printf("%.2f yuan = %.2f Kc", bil, yuan_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_danishkrone= bil*g[8];
    printf("%.2f yuan = %.2f kr", bil, yuan_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_egyptianpound= bil*g[9];
    printf("%.2f yuan = %.2f egyptian pound", bil, yuan_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_euro= bil*g[10];
    printf("%.2f yuan = %.2f euro", bil, yuan_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_hongkongdollar= bil*g[11];
    printf("%.2f yuan = %.2f $", bil, yuan_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_croatiankuna= bil*g[12];
    printf("%.2f yuan = %.2f Kn", bil, yuan_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_indianrupee= bil*g[13];
    printf("%.2f yuan = %.2f rupee", bil, yuan_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_iraqidinar= bil*g[14];
    printf("%.2f yuan = %.2f dinar", bil, yuan_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_iranianrial= bil*g[15];
    printf("%.2f yuan = %.2f rial", bil, yuan_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_icelandkrona= bil*g[16];
    printf("%.2f yuan = %.2f Kr", bil, yuan_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_yen= bil*g[17];
    printf("%.2f yuan = %.2f yen", bil, yuan_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_riel= bil*g[18];
    printf("%.2f yuan = %.2f riel", bil, yuan_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_northkoreanwon= bil*g[19];
    printf("%.2f yuan = %.2f won", bil, yuan_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	

		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_southkoreanwon= bil*g[20];
    printf("%.2f yuan = %.2f won", bil, yuan_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	

	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_kip= bil*g[21];
    printf("%.2f yuan = %.2f kip", bil, yuan_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_kyat= bil*g[22];
    printf("%.2f yuan = %.2f kyat", bil, yuan_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_mexicanpeso= bil*g[23];
    printf("%.2f yuan = %.2f $", bil, yuan_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_malaysianringgit= bil*g[24];
    printf("%.2f yuan = %.2f RM", bil, yuan_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_newzealanddollar= bil*g[25];
    printf("%.2f yuan = %.2f $", bil, yuan_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	
		if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_kina= bil*g[26];
    printf("%.2f yuan = %.2f kina", bil, yuan_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	
		if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_philippinepeso= bil*g[27];
    printf("%.2f yuan = %.2f peso", bil, yuan_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_saudiriyal= bil*g[28];
    printf("%.2f yuan = %.2f riyal", bil, yuan_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_singaporedollar= bil*g[29];
    printf("%.2f yuan = %.2f $", bil, yuan_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_taiwandollar= bil*g[30];
    printf("%.2f yuan = %.2f $", bil, yuan_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yuan_usdollar= bil*g[31];
    printf("%.2f yuan = %.2f $", bil, yuan_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
		
}

int colombianpeso()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
	
  
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
    if (pilih == 8)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
	}
	
		if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_bruneidollar= bil*h[0];
    printf("%.2f $ = %.2f $", bil, colombianpeso_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_rupiah= bil*h[1];
    printf("%.2f $ = %.2f Rp", bil, colombianpeso_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_brazilianreal= bil*h[2];
    printf("%.2f $ = %.2f R$", bil, colombianpeso_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_canadiandollar= bil*h[3];
    printf("%.2f $ = %.2f $", bil, colombianpeso_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_swissfranc= bil*h[4];
    printf("%.2f $ = %.2f F", bil, colombianpeso_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_chileanpeso= bil*h[5];
    printf("%.2f $ = %.2f $", bil, colombianpeso_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_yuan= bil*h[6];
    printf("%.2f $ = %.2f yuan", bil, colombianpeso_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_czechkoruna= bil*h[7];
    printf("%.2f $ = %.2f Kc", bil, colombianpeso_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_danishkrone= bil*h[8];
    printf("%.2f $ = %.2f kr", bil, colombianpeso_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_egyptianpound= bil*h[9];
    printf("%.2f $ = %.2f egyptian pound", bil, colombianpeso_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_euro= bil*h[10];
    printf("%.2f $ = %.2f euro", bil, colombianpeso_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
		
		if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_hongkongdollar= bil*h[11];
    printf("%.2f $ = %.2f $", bil, colombianpeso_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_croatiankuna= bil*h[12];
    printf("%.2f $ = %.2f Kn", bil, colombianpeso_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
		
			if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_indianrupee= bil*h[13];
    printf("%.2f $ = %.2f rupee", bil, colombianpeso_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
		
			if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_iraqidinar= bil*h[14];
    printf("%.2f $ = %.2f dinar", bil, colombianpeso_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_iranianrial= bil*h[15];
    printf("%.2f $ = %.2f rial", bil, colombianpeso_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_icelandkrona= bil*h[16];
    printf("%.2f $ = %.2f Kr", bil, colombianpeso_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_yen= bil*h[17];
    printf("%.2f $ = %.2f yen", bil, colombianpeso_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
	if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_riel= bil*h[18];
    printf("%.2f $ = %.2f riel", bil, colombianpeso_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
		
	if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_northkoreanwon= bil*h[19];
    printf("%.2f $ = %.2f won", bil, colombianpeso_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_southkoreanwon= bil*h[20];
    printf("%.2f $ = %.2f won", bil, colombianpeso_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_kip= bil*h[21];
    printf("%.2f $ = %.2f kip", bil, colombianpeso_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_kyat= bil*h[22];
    printf("%.2f $ = %.2f kyat", bil, colombianpeso_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_mexicanpeso= bil*h[23];
    printf("%.2f $ = %.2f $", bil, colombianpeso_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}					
	
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_malaysianringgit= bil*h[24];
    printf("%.2f $ = %.2f RM", bil, colombianpeso_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_newzealanddollar= bil*h[25];
    printf("%.2f $ = %.2f $", bil, colombianpeso_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_kina= bil*h[26];
    printf("%.2f $ = %.2f kina", bil, colombianpeso_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_philippinepeso= bil*h[27];
    printf("%.2f $ = %.2f peso", bil, colombianpeso_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_saudiriyal= bil*h[28];
    printf("%.2f $ = %.2f riyal", bil, colombianpeso_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_singaporedollar= bil*h[29];
    printf("%.2f $ = %.2f $", bil, colombianpeso_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_taiwandollar= bil*h[30];
    printf("%.2f $ = %.2f $", bil, colombianpeso_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}		
	
		if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    colombianpeso_usdollar= bil*h[31];
    printf("%.2f $ = %.2f $", bil, colombianpeso_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}

}

int czechkoruna()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 9)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_bruneidollar= bil*i[0];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_rupiah= bil*i[1];
    printf("%.2f Kc = %.2f Rp", bil, czechkoruna_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_brazilianreal= bil*i[2];
    printf("%.2f Kc = %.2f R$", bil, czechkoruna_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_canadiandollar= bil*i[3];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_swissfranc= bil*i[4];
    printf("%.2f Kc = %.2f F", bil, czechkoruna_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_chileanpeso= bil*i[5];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_yuan= bil*i[6];
    printf("%.2f Kc = %.2f yuan", bil, czechkoruna_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_colombianpeso= bil*i[7];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_danishkrone= bil*i[8];
    printf("%.2f Kc = %.2f kr", bil, czechkoruna_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_egyptianpound= bil*i[9];
    printf("%.2f Kc = %.2f egyptian pound", bil, czechkoruna_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_euro= bil*i[10];
    printf("%.2f Kc = %.2f 	euro", bil, czechkoruna_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_hongkongdollar= bil*i[11];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_croatiankuna= bil*i[12];
    printf("%.2f Kc = %.2f Kn", bil, czechkoruna_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_indianrupee= bil*i[13];
    printf("%.2f Kc = %.2f rupee", bil, czechkoruna_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_iraqidinar= bil*i[14];
    printf("%.2f Kc = %.2f dinar", bil, czechkoruna_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_iranianrial= bil*i[15];
    printf("%.2f Kc = %.2f rial", bil, czechkoruna_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_icelandkrona= bil*i[16];
    printf("%.2f Kc = %.2f Kr", bil, czechkoruna_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_yen=bil*i[17];
    printf("%.2f Kc = %.2f yen", bil, czechkoruna_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_riel=bil*i[18];
    printf("%.2f Kc = %.2f riel", bil, czechkoruna_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_northkoreanwon=bil*i[19];
    printf("%.2f Kc = %.2f won", bil, czechkoruna_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_southkoreanwon=bil*i[20];
    printf("%.2f Kc = %.2f won", bil, czechkoruna_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_kip=bil*i[21];
    printf("%.2f Kc = %.2f kip", bil, czechkoruna_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_kyat=bil*i[22];
    printf("%.2f Kc = %.2f kyat", bil, czechkoruna_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_mexicanpeso=bil*i[23];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_malaysianringgit=bil*i[24];
    printf("%.2f Kc = %.2f RM", bil, czechkoruna_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_newzealanddollar=bil*i[25];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
			
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_kina=bil*i[26];
    printf("%.2f Kc = %.2f kina", bil, czechkoruna_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_philippinepeso=bil*i[27];
    printf("%.2f Kc = %.2f peso", bil, czechkoruna_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_saudiriyal=bil*i[28];
    printf("%.2f Kc = %.2f riyal", bil, czechkoruna_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_singaporedollar=bil*i[29];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_taiwandollar=bil*i[30];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    czechkoruna_usdollar=bil*i[31];
    printf("%.2f Kc = %.2f $", bil, czechkoruna_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int danishkrone()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 10)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_bruneidollar= bil*j[0];
    printf("%.2f kr = %.2f $", bil, danishkrone_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_rupiah= bil*j[1];
    printf("%.2f kr = %.2f Rp", bil, danishkrone_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_brazilianreal= bil*j[2];
    printf("%.2f kr = %.2f R$", bil, danishkrone_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_canadiandollar= bil*j[3];
    printf("%.2f kr = %.2f $", bil, danishkrone_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_swissfranc= bil*j[4];
    printf("%.2f kr = %.2f F", bil, danishkrone_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_chileanpeso= bil*j[5];
    printf("%.2f kr = %.2f $", bil, danishkrone_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_yuan= bil*j[6];
    printf("%.2f kr = %.2f yuan", bil, danishkrone_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_colombianpeso= bil*j[7];
    printf("%.2f kr = %.2f $", bil, danishkrone_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_czechkoruna= bil*j[8];
    printf("%.2f kr = %.2f Kc", bil, danishkrone_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_egyptianpound= bil*j[9];
    printf("%.2f kr = %.2f egyptian pound", bil, danishkrone_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_euro= bil*j[10];
    printf("%.2f kr = %.2f euro", bil, danishkrone_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_hongkongdollar= bil*j[11];
    printf("%.2f kr = %.2f $", bil, danishkrone_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_croatiankuna= bil*j[12];
    printf("%.2f kr = %.2f Kn", bil, danishkrone_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_indianrupee= bil*j[13];
    printf("%.2f kr = %.2f rupee", bil, danishkrone_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_iraqidinar= bil*j[14];
    printf("%.2f kr = %.2f dinar", bil, danishkrone_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_iranianrial= bil*j[15];
    printf("%.2f kr = %.2f rial", bil, danishkrone_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_icelandkrona= bil*j[16];
    printf("%.2f kr = %.2f Kr", bil, danishkrone_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_yen= bil*j[17];
    printf("%.2f kr = %.2f yen", bil, danishkrone_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_riel= bil*j[18];
    printf("%.2f kr = %.2f riel", bil, danishkrone_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_northkoreanwon= bil*j[19];
    printf("%.2f kr = %.2f won", bil, danishkrone_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_southkoreanwon= bil*j[20];
    printf("%.2f kr = %.2f won", bil, danishkrone_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_kip= bil*j[21];
    printf("%.2f kr = %.2f kip", bil, danishkrone_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_kyat= bil*j[22];
    printf("%.2f kr = %.2f kyat", bil, danishkrone_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_mexicanpeso= bil*j[23];
    printf("%.2f kr = %.2f $", bil, danishkrone_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_malaysianringgit= bil*j[24];
    printf("%.2f kr = %.2f RM", bil, danishkrone_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_newzealanddollar= bil*j[25];
    printf("%.2f kr = %.2f $", bil, danishkrone_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_kina= bil*j[26];
    printf("%.2f kr = %.2f kina", bil, danishkrone_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_philippinepeso= bil*j[27];
    printf("%.2f kr = %.2f peso", bil, danishkrone_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_saudiriyal= bil*j[28];
    printf("%.2f kr = %.2f riyal", bil, danishkrone_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_singaporedollar= bil*j[29];
    printf("%.2f kr = %.2f $", bil, danishkrone_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_taiwandollar= bil*j[30];
    printf("%.2f kr = %.2f $", bil, danishkrone_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    danishkrone_usdollar= bil*j[31];
    printf("%.2f kr = %.2f $", bil, danishkrone_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int egyptianpound()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
    printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 11)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_bruneidollar= bil*k[0];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_rupiah= bil*k[1];
    printf("%.2f egyptian pound = %.2f Rp", bil, egyptianpound_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_brazilianreal= bil*k[2];
    printf("%.2f egyptian pound = %.2f R$", bil, egyptianpound_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_canadiandollar= bil*k[3];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_swissfranc= bil*k[4];
    printf("%.2f egyptian pound = %.2f F", bil, egyptianpound_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_chileanpeso= bil*k[5];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_yuan= bil*k[6];
    printf("%.2f egyptian pound = %.2f yuan", bil, egyptianpound_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_colombianpeso= bil*k[7];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_czechkoruna= bil*k[8];
    printf("%.2f egyptian pound = %.2f Kc", bil, egyptianpound_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_danishkrone= bil*k[9];
    printf("%.2f egyptian pound = %.2f kr", bil, egyptianpound_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_euro= bil*k[10];
    printf("%.2f egyptian pound = %.2f euro", bil, egyptianpound_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_hongkongdollar= bil*k[11];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_croatiankuna= bil*k[12];
    printf("%.2f egyptian pound = %.2f Kn", bil, egyptianpound_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_indianrupee= bil*k[13];
    printf("%.2f egyptian pound = %.2f rupee", bil, egyptianpound_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_iraqidinar= bil*k[14];
    printf("%.2f egyptian pound = %.2f dinar", bil, egyptianpound_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_iranianrial= bil*k[15];
    printf("%.2f egyptian pound = %.2f rial", bil, egyptianpound_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_icelandkrona= bil*k[16];
    printf("%.2f egyptian pound = %.2f Kr", bil, egyptianpound_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_yen= bil*k[17];
    printf("%.2f egyptian pound = %.2f yen", bil, egyptianpound_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_riel= bil*k[18];
    printf("%.2f egyptian pound = %.2f riel", bil, egyptianpound_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_northkoreanwon= bil*k[19];
    printf("%.2f egyptian pound = %.2f won", bil, egyptianpound_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_southkoreanwon= bil*k[20];
    printf("%.2f egyptian pound = %.2f won", bil, egyptianpound_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_kip= bil*k[21];
    printf("%.2f egyptian pound = %.2f kip", bil, egyptianpound_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_kyat= bil*k[22];
    printf("%.2f egyptian pound = %.2f kyat", bil, egyptianpound_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_mexicanpeso = bil*k[23];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_malaysianringgit = bil*k[24];
    printf("%.2f egyptian pound = %.2f RM", bil, egyptianpound_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_newzealanddollar = bil*k[25];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_kina = bil*k[26];
    printf("%.2f egyptian pound = %.2f kina", bil, egyptianpound_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_philippinepeso = bil*k[27];
    printf("%.2f egyptian pound = %.2f peso", bil, egyptianpound_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_saudiriyal = bil*k[28];
    printf("%.2f egyptian pound = %.2f riyal", bil, egyptianpound_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_singaporedollar= bil*k[29];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_taiwandollar= bil*k[30];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    egyptianpound_usdollar= bil*k[31];
    printf("%.2f egyptian pound = %.2f $", bil, egyptianpound_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int euro()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
   
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 12)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_bruneidollar= bil*l[0];
    printf("%.2f euro = %.2f $", bil, euro_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_rupiah= bil*l[1];
    printf("%.2f euro = %.2f Rp", bil, euro_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_brazilianreal= bil*l[2];
    printf("%.2f euro = %.2f R$", bil, euro_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_canadiandollar= bil*l[3];
    printf("%.2f euro = %.2f $", bil, euro_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_swissfranc= bil*l[4];
    printf("%.2f euro = %.2f F", bil, euro_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_chileanpeso= bil*l[5];
    printf("%.2f euro = %.2f $", bil, euro_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_yuan= bil*l[6];
    printf("%.2f euro = %.2f yuan", bil, euro_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_colombianpeso= bil*l[7];
    printf("%.2f euro = %.2f $", bil, euro_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_czechkoruna= bil*l[8];
    printf("%.2f euro = %.2f Kc", bil, euro_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_danishkrone= bil*l[9];
    printf("%.2f euro = %.2f kr", bil, euro_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_egyptianpound= bil*l[10];
    printf("%.2f euro = %.2f egyptian pound", bil, euro_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_hongkongdollar= bil*l[11];
    printf("%.2f euro = %.2f $", bil, euro_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_croatiankuna= bil*l[12];
    printf("%.2f euro = %.2f Kn", bil, euro_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_indianrupee= bil*l[13];
    printf("%.2f euro = %.2f rupee", bil, euro_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_iraqidinar= bil*l[14];
    printf("%.2f euro = %.2f dinar", bil, euro_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_iranianrial= bil*l[15];
    printf("%.2f euro = %.2f rial", bil, euro_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_icelandkrona= bil*l[16];
    printf("%.2f euro = %.2f Kr", bil, euro_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_yen= bil*l[17];
    printf("%.2f euro = %.2f yen", bil, euro_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_riel= bil*l[18];
    printf("%.2f euro = %.2f riel", bil, euro_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_northkoreanwon= bil*l[19];
    printf("%.2f euro = %.2f won", bil, euro_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_southkoreanwon= bil*l[20];
    printf("%.2f euro = %.2f won", bil, euro_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_kip= bil*l[21];
    printf("%.2f euro = %.2f kip", bil, euro_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_kyat= bil*l[22];
    printf("%.2f euro = %.2f kyat", bil, euro_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_mexicanpeso = bil*l[23];
    printf("%.2f euro = %.2f $", bil, euro_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_malaysianringgit = bil*l[24];
    printf("%.2f euro = %.2f RM", bil, euro_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_newzealanddollar = bil*l[25];
    printf("%.2f euro = %.2f $", bil, euro_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_kina = bil*l[26];
    printf("%.2f euro = %.2f kina", bil, euro_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_philippinepeso = bil*l[27];
    printf("%.2f euro = %.2f peso", bil, euro_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_saudiriyal = bil*l[28];
    printf("%.2f euro = %.2f riyal", bil, euro_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_singaporedollar= bil*l[29];
    printf("%.2f euro = %.2f $", bil, euro_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_taiwandollar= bil*l[30];
    printf("%.2f euro = %.2f $", bil, euro_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    euro_usdollar= bil*l[31];
    printf("%.2f euro = %.2f $", bil, euro_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int hongkongdollar()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
	
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 13)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_bruneidollar= bil*m[0];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_rupiah= bil*m[1];
    printf("%.2f $ = %.2f Rp", bil, hongkongdollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_brazilianreal= bil*m[2];
    printf("%.2f $ = %.2f R$", bil, hongkongdollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_canadiandollar= bil*m[3];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_swissfranc= bil*m[4];
    printf("%.2f $ = %.2f F", bil, hongkongdollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_chileanpeso= bil*m[5];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_yuan= bil*m[6];
    printf("%.2f $ = %.2f yuan", bil, hongkongdollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_colombianpeso= bil*m[7];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_czechkoruna= bil*m[8];
    printf("%.2f $ = %.2f Kc", bil, hongkongdollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_danishkrone= bil*m[9];
    printf("%.2f $ = %.2f kr", bil, hongkongdollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_egyptianpound= bil*m[10];
    printf("%.2f $ = %.2f egyptian pound", bil, hongkongdollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_euro= bil*m[11];
    printf("%.2f $ = %.2f euro", bil, hongkongdollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_croatiankuna= bil*m[12];
    printf("%.2f $ = %.2f Kn", bil, hongkongdollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_indianrupee= bil*m[13];
    printf("%.2f $ = %.2f rupee", bil, hongkongdollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_iraqidinar= bil*m[14];
    printf("%.2f $ = %.2f dinar", bil, hongkongdollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_iranianrial= bil*m[15];
    printf("%.2f $ = %.2f rial", bil, hongkongdollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_icelandkrona= bil*m[16];
    printf("%.2f $ = %.2f Kr", bil, hongkongdollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_yen= bil*m[17];
    printf("%.2f $ = %.2f yen", bil, hongkongdollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_riel= bil*m[18];
    printf("%.2f $ = %.2f riel", bil, hongkongdollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_northkoreanwon= bil*m[19];
    printf("%.2f $ = %.2f won", bil, hongkongdollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_southkoreanwon= bil*m[20];
    printf("%.2f $ = %.2f won", bil, hongkongdollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
   hongkongdollar_kip= bil*m[21];
    printf("%.2f $ = %.2f kip", bil, hongkongdollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_kyat= bil*m[22];
    printf("%.2f $ = %.2f kyat", bil, hongkongdollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_mexicanpeso = bil*m[23];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_malaysianringgit = bil*m[24];
    printf("%.2f $ = %.2f RM", bil, hongkongdollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_newzealanddollar = bil*m[25];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_kina = bil*m[26];
    printf("%.2f $ = %.2f kina", bil, hongkongdollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_philippinepeso = bil*m[27];
    printf("%.2f $ = %.2f peso", bil, hongkongdollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_saudiriyal = bil*m[28];
    printf("%.2f $ = %.2f riyal", bil, hongkongdollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_singaporedollar= bil*m[29];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_taiwandollar= bil*m[30];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    hongkongdollar_usdollar= bil*m[31];
    printf("%.2f $ = %.2f $", bil, hongkongdollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int croatiankuna()
{
	
		pilih:
  
    printf("\n||Masukkan kode mata uang tujuan anda    ||\n");
	printf(  "||Tekan 0 untuk kembali                  ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
  
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 14)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_bruneidollar= bil*n[0];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_rupiah= bil*n[1];
    printf("%.2f Kn = %.2f Rp", bil, croatiankuna_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_brazilianreal= bil*n[2];
    printf("%.2f Kn = %.2f R$", bil, croatiankuna_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_canadiandollar= bil*n[3];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_swissfranc= bil*n[4];
    printf("%.2f Kn = %.2f F", bil, croatiankuna_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_chileanpeso= bil*n[5];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_yuan= bil*n[6];
    printf("%.2f Kn = %.2f yuan", bil, croatiankuna_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_colombianpeso= bil*n[7];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_czechkoruna= bil*n[8];
    printf("%.2f Kn = %.2f Kc", bil, croatiankuna_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_danishkrone= bil*n[9];
    printf("%.2f Kn = %.2f kr", bil, croatiankuna_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_egyptianpound= bil*n[10];
    printf("%.2f Kn = %.2f egyptian pound", bil, croatiankuna_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_euro= bil*n[11];
    printf("%.2f Kn = %.2f euro", bil, croatiankuna_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_hongkongdollar= bil*n[12];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_indianrupee= bil*n[13];
    printf("%.2f Kn = %.2f rupee", bil, croatiankuna_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_iraqidinar= bil*n[14];
    printf("%.2f Kn = %.2f dinar", bil, croatiankuna_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_iranianrial= bil*n[15];
    printf("%.2f Kn = %.2f rial", bil, croatiankuna_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_icelandkrona= bil*n[16];
    printf("%.2f Kn = %.2f Kr", bil, croatiankuna_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_yen= bil*n[17];
    printf("%.2f Kn = %.2f yen", bil, croatiankuna_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_riel= bil*n[18];
    printf("%.2f Kn = %.2f riel", bil, croatiankuna_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_northkoreanwon= bil*n[19];
    printf("%.2f Kn = %.2f won", bil, croatiankuna_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_southkoreanwon= bil*n[20];
    printf("%.2f Kn = %.2f won", bil, croatiankuna_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_kip= bil*n[21];
    printf("%.2f Kn = %.2f kip", bil, croatiankuna_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_kyat= bil*n[22];
    printf("%.2f Kn = %.2f kyat", bil, croatiankuna_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_mexicanpeso = bil*n[23];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_malaysianringgit = bil*n[24];
    printf("%.2f Kn = %.2f RM", bil, croatiankuna_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_newzealanddollar = bil*n[25];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_kina = bil*n[26];
    printf("%.2f Kn = %.2f kina", bil, croatiankuna_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_philippinepeso = bil*n[27];
    printf("%.2f Kn = %.2f peso", bil, croatiankuna_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_saudiriyal = bil*n[28];
    printf("%.2f Kn = %.2f riyal", bil, croatiankuna_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_singaporedollar= bil*n[29];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_taiwandollar= bil*n[30];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    croatiankuna_usdollar= bil*n[31];
    printf("%.2f Kn = %.2f $", bil, croatiankuna_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int indianrupee()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("input:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 15)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_bruneidollar= bil*o[0];
    printf("%.2f rupee = %.2f $", bil, indianrupee_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_rupiah= bil*o[1];
    printf("%.2f rupee = %.2f Rp", bil, indianrupee_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_brazilianreal= bil*o[2];
    printf("%.2f rupee = %.2f R$", bil, indianrupee_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_canadiandollar= bil*o[3];
    printf("%.2f rupee = %.2f $", bil, indianrupee_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_swissfranc= bil*o[4];
    printf("%.2f rupee = %.2f F", bil, indianrupee_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_chileanpeso= bil*o[5];
    printf("%.2f rupee = %.2f $", bil, indianrupee_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_yuan= bil*o[6];
    printf("%.2f rupee = %.2f yuan", bil, indianrupee_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_colombianpeso= bil*o[7];
    printf("%.2f rupee = %.2f $", bil, indianrupee_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_czechkoruna= bil*o[8];
    printf("%.2f rupee = %.2f Kc", bil, indianrupee_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_danishkrone= bil*o[9];
    printf("%.2f rupee = %.2f kr", bil, indianrupee_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_egyptianpound= bil*o[10];
    printf("%.2f rupee = %.2f egyptian pound", bil, indianrupee_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_euro= bil*o[11];
    printf("%.2f rupee = %.2f euro", bil, indianrupee_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_hongkongdollar= bil*o[12];
    printf("%.2f rupee = %.2f $", bil, indianrupee_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_croatiankuna= bil*o[13];
    printf("%.2f rupee = %.2f Kn ", bil, indianrupee_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_iraqidinar= bil*o[14];
    printf("%.2f rupee = %.2f dinar", bil, indianrupee_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_iranianrial= bil*o[15];
    printf("%.2f rupee = %.2f rial", bil, indianrupee_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_icelandkrona= bil*o[16];
    printf("%.2f rupee = %.2f Kr", bil, indianrupee_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_yen= bil*o[17];
    printf("%.2f rupee = %.2f yen", bil, indianrupee_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_riel= bil*o[18];
    printf("%.2f rupee = %.2f riel", bil, indianrupee_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_northkoreanwon= bil*o[19];
    printf("%.2f rupee = %.2f won", bil, indianrupee_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_southkoreanwon= bil*o[20];
    printf("%.2f rupee = %.2f won", bil, indianrupee_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_kip= bil*o[21];
    printf("%.2f rupee = %.2f kip", bil, indianrupee_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_kyat= bil*o[22];
    printf("%.2f rupee = %.2f kyat", bil, indianrupee_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_mexicanpeso = bil*o[23];
    printf("%.2f rupee = %.2f $", bil, indianrupee_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_malaysianringgit = bil*o[24];
    printf("%.2f rupee = %.2f RM", bil, indianrupee_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_newzealanddollar = bil*o[25];
    printf("%.2f rupee = %.2f $", bil, indianrupee_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_kina = bil*o[26];
    printf("%.2f rupee = %.2f kina", bil, indianrupee_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_philippinepeso = bil*o[27];
    printf("%.2f rupee = %.2f peso", bil, indianrupee_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_saudiriyal = bil*o[28];
    printf("%.2f rupee = %.2f riyal", bil, indianrupee_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_singaporedollar= bil*o[29];
    printf("%.2f rupee = %.2f $", bil, indianrupee_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_taiwandollar= bil*o[30];
    printf("%.2f rupee = %.2f $", bil, indianrupee_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_usdollar= bil*o[31];
    printf("%.2f rupee = %.2f $", bil, indianrupee_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int iraqidinar()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 16)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_bruneidollar= bil*p[0];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_rupiah= bil*p[1];
    printf("%.2f dinar = %.2f Rp", bil,  iraqidinar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_brazilianreal= bil*p[2];
    printf("%.2f dinar = %.2f R$", bil,  iraqidinar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_canadiandollar= bil*p[3];
    printf("%.2f dinar = %.2f $", bil,  iraqidinar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     iraqidinar_swissfranc= bil*p[4];
    printf("%.2f dinar = %.2f F", bil,  iraqidinar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_chileanpeso= bil*p[5];
    printf("%.2f dinar = %.2f $", bil,  iraqidinar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_yuan= bil*p[6];
    printf("%.2f dinar = %.2f yuan", bil,  iraqidinar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_colombianpeso= bil*p[7];
    printf("%.2f dinar = %.2f $", bil,  iraqidinar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_czechkoruna= bil*p[8];
    printf("%.2f dinar = %.2f Kc", bil,  iraqidinar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_danishkrone= bil*p[9];
    printf("%.2f dinar = %.2f kr", bil,  iraqidinar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_egyptianpound= bil*p[10];
    printf("%.2f dinar = %.2f egyptian pound", bil,  iraqidinar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_euro= bil*p[11];
    printf("%.2f dinar = %.2f euro", bil, iraqidinar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_hongkongdollar= bil*p[12];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_croatiankuna= bil*p[13];
    printf("%.2f dinar = %.2f Kn ", bil,  iraqidinar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_indianrupee= bil*p[14];
    printf("%.2f dinar = %.2f rupee", bil, iraqidinar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_iranianrial= bil*p[15];
    printf("%.2f dinar = %.2f rial", bil, iraqidinar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_icelandkrona= bil*p[16];
    printf("%.2f dinar = %.2f Kr", bil,  iraqidinar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_yen= bil*p[17];
    printf("%.2f dinar = %.2f yen", bil, iraqidinar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_riel= bil*p[18];
    printf("%.2f dinar = %.2f riel", bil, iraqidinar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_northkoreanwon= bil*p[19];
    printf("%.2f dinar = %.2f won", bil, iraqidinar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_southkoreanwon= bil*p[20];
    printf("%.2f dinar = %.2f won", bil, iraqidinar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_kip= bil*p[21];
    printf("%.2f dinar = %.2f kip", bil, iraqidinar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_kyat= bil*p[22];
    printf("%.2f dinar = %.2f kyat", bil, iraqidinar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_mexicanpeso = bil*p[23];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_malaysianringgit = bil*p[24];
    printf("%.2f dinar = %.2f RM", bil,  iraqidinar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_newzealanddollar = bil*p[25];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_kina = bil*p[26];
    printf("%.2f dinar = %.2f kina", bil, iraqidinar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_philippinepeso = bil*p[27];
    printf("%.2f dinar = %.2f peso", bil, iraqidinar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_saudiriyal = bil*p[28];
    printf("%.2f dinar = %.2f riyal", bil, iraqidinar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_singaporedollar= bil*p[29];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_taiwandollar= bil*p[30];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iraqidinar_usdollar= bil*p[31];
    printf("%.2f dinar = %.2f $", bil, iraqidinar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int iranianrial()
{
	
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
	
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 17)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_bruneidollar= bil*q[0];
    printf("%.2f rial = %.2f $", bil, iranianrial_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_rupiah= bil*q[1];
    printf("%.2f rial = %.2f Rp", bil, iranianrial_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_brazilianreal= bil*q[2];
    printf("%.2f rial= %.2f R$", bil, iranianrial_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_canadiandollar= bil*q[3];
    printf("%.2f rial = %.2f $", bil, iranianrial_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_swissfranc= bil*q[4];
    printf("%.2f rial = %.2f F", bil, iranianrial_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_chileanpeso= bil*q[5];
    printf("%.2f rial = %.2f $", bil, iranianrial_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_yuan= bil*q[6];
    printf("%.2f rial= %.2f yuan", bil, iranianrial_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_colombianpeso= bil*q[7];
    printf("%.2f rial = %.2f $", bil, iranianrial_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_czechkoruna= bil*q[8];
    printf("%.2f rial= %.2f Kc", bil, iranianrial_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_danishkrone= bil*q[9];
    printf("%.2f rial = %.2f kr", bil, iranianrial_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_egyptianpound= bil*q[10];
    printf("%.2f rial= %.2f egyptian pound", bil, iranianrial_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_euro= bil*q[11];
    printf("%.2f rial = %.2f euro", bil, iranianrial_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_hongkongdollar= bil*q[12];
    printf("%.2f rial = %.2f $", bil, iranianrial_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_croatiankuna= bil*q[13];
    printf("%.2f rial = %.2f Kn ", bil, iranianrial_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_indianrupee= bil*q[14];
    printf("%.2f rial = %.2f rupee", bil, iranianrial_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_iraqidinar= bil*q[15];
    printf("%.2f rial = %.2f dinar", bil, indianrupee_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_icelandkrona= bil*q[16];
    printf("%.2f rial = %.2f Kr", bil, iranianrial_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_yen= bil*q[17];
    printf("%.2f rial = %.2f yen", bil, iranianrial_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_riel= bil*q[18];
    printf("%.2f rial = %.2f riel", bil, iranianrial_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_northkoreanwon= bil*q[19];
    printf("%.2f rial = %.2f won", bil, iranianrial_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_southkoreanwon= bil*q[20];
    printf("%.2f rial = %.2f won", bil, iranianrial_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_kip= bil*q[21];
    printf("%.2f rial = %.2f kip", bil, iranianrial_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_kyat= bil*q[22];
    printf("%.2f rial = %.2f kyat", bil, iranianrial_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_mexicanpeso = bil*q[23];
    printf("%.2f rial = %.2f $", bil, iranianrial_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_malaysianringgit = bil*q[24];
    printf("%.2f rial = %.2f RM", bil, iranianrial_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_newzealanddollar = bil*q[25];
    printf("%.2f rial = %.2f $", bil, iranianrial_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_kina = bil*q[26];
    printf("%.2f rial= %.2f kina", bil, iranianrial_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_philippinepeso = bil*q[27];
    printf("%.2f  rial = %.2f peso", bil, iranianrial_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_saudiriyal = bil*q[28];
    printf("%.2f rial = %.2f riyal", bil, iranianrial_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_singaporedollar= bil*q[29];
    printf("%.2f rial = %.2f $", bil, iranianrial_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_taiwandollar= bil*q[30];
    printf("%.2f rial = %.2f $", bil, iranianrial_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    iranianrial_usdollar= bil*q[31];
    printf("%.2f rial = %.2f $", bil, iranianrial_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int icelandkrona()
{
	
		pilih:
  
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 18)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_bruneidollar= bil*r[0];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_rupiah= bil*r[1];
    printf("%.2f Kr = %.2f Rp", bil, icelandkrona_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_brazilianreal= bil*r[2];
    printf("%.2f Kr = %.2f R$", bil, icelandkrona_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_canadiandollar= bil*r[3];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_swissfranc= bil*r[4];
    printf("%.2f Kr = %.2f F", bil, icelandkrona_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_chileanpeso= bil*r[5];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_yuan= bil*r[6];
    printf("%.2f Kr = %.2f yuan", bil, icelandkrona_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_colombianpeso= bil*r[7];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_czechkoruna= bil*r[8];
    printf("%.2f Kr = %.2f Kc", bil, icelandkrona_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_danishkrone= bil*r[9];
    printf("%.2f Kr = %.2f kr", bil, icelandkrona_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_egyptianpound= bil*r[10];
    printf("%.2f Kr = %.2f egyptian pound", bil, icelandkrona_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_euro= bil*r[11];
    printf("%.2f Kr = %.2f euro", bil, icelandkrona_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_hongkongdollar= bil*r[12];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_croatiankuna= bil*r[13];
    printf("%.2f Kr = %.2f Kn ", bil, icelandkrona_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_indianrupee= bil*r[14];
    printf("%.2f Kr = %.2f rupee", bil, icelandkrona_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    indianrupee_iraqidinar= bil*r[15];
    printf("%.2f Kr = %.2f dinar", bil, indianrupee_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_iranianrial= bil*r[16];
    printf("%.2f Kr = %.2f rial", bil, icelandkrona_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_yen= bil*r[17];
    printf("%.2f Kr= %.2f yen", bil, icelandkrona_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_riel= bil*r[18];
    printf("%.2f Kr = %.2f riel", bil, icelandkrona_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_northkoreanwon= bil*r[19];
    printf("%.2f Kr = %.2f won", bil, icelandkrona_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_southkoreanwon= bil*r[20];
    printf("%.2f Kr = %.2f won", bil, icelandkrona_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_kip= bil*r[21];
    printf("%.2f Kr = %.2f kip", bil, icelandkrona_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_kyat= bil*r[22];
    printf("%.2f Kr = %.2f kyat", bil, icelandkrona_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_mexicanpeso = bil*r[23];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_malaysianringgit = bil*r[24];
    printf("%.2f Kr = %.2f RM", bil, icelandkrona_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_newzealanddollar = bil*r[25];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_kina = bil*r[26];
    printf("%.2f Kr = %.2f kina", bil, icelandkrona_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_philippinepeso = bil*r[27];
    printf("%.2f Kr = %.2f peso", bil, icelandkrona_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_saudiriyal = bil*r[28];
    printf("%.2f Kr = %.2f riyal", bil, icelandkrona_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_singaporedollar= bil*r[29];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_taiwandollar= bil*r[30];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    icelandkrona_usdollar= bil*r[31];
    printf("%.2f Kr = %.2f $", bil, icelandkrona_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int yen()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
    printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 19)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_bruneidollar= bil*s[0];
    printf("%.2f yen = %.2f $", bil, yen_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_rupiah= bil*s[1];
    printf("%.2f yen = %.2f Rp", bil, yen_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_brazilianreal= bil*s[2];
    printf("%.2f yen = %.2f R$", bil, yen_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_canadiandollar= bil*s[3];
    printf("%.2f yen = %.2f $", bil, yen_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_swissfranc= bil*s[4];
    printf("%.2f yen = %.2f F", bil, yen_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_chileanpeso= bil*s[5];
    printf("%.2f yen = %.2f $", bil, yen_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_yuan= bil*s[6];
    printf("%.2f yen = %.2f yuan", bil, yen_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_colombianpeso= bil*s[7];
    printf("%.2f yen = %.2f $", bil, yen_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_czechkoruna= bil*s[8];
    printf("%.2f yen = %.2f Kc", bil, yen_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_danishkrone= bil*s[9];
    printf("%.2fyen = %.2f kr", bil, yen_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_egyptianpound= bil*s[10];
    printf("%.2f yen = %.2f egyptian pound", bil, yen_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_euro= bil*s[11];
    printf("%.2f yen= %.2f euro", bil, yen_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_hongkongdollar= bil*s[12];
    printf("%.2f yen = %.2f $", bil, yen_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_croatiankuna= bil*s[13];
    printf("%.2f yen = %.2f Kn ", bil, yen_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_indianrupee= bil*s[14];
    printf("%.2f yen = %.2f rupee", bil, yen_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_iraqidinar= bil*s[15];
    printf("%.2f yen = %.2f dinar", bil, yen_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_iranianrial= bil*s[16];
    printf("%.2f yen = %.2f Kr", bil, yen_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_icelandkrona= bil*s[17];
    printf("%.2f yen = %.2f Kr", bil, yen_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_riel= bil*s[18];
    printf("%.2f yen = %.2f riel", bil, yen_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_northkoreanwon= bil*s[19];
    printf("%.2f yen = %.2f won", bil, yen_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_southkoreanwon= bil*s[20];
    printf("%.2f yen = %.2f won", bil, yen_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_kip= bil*s[21];
    printf("%.2f yen = %.2f kip", bil, yen_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_kyat= bil*s[22];
    printf("%.2f yen = %.2f kyat", bil, yen_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_mexicanpeso = bil*s[23];
    printf("%.2f yen = %.2f $", bil, yen_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_malaysianringgit = bil*s[24];
    printf("%.2f yen = %.2f RM", bil, yen_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_newzealanddollar = bil*s[25];
    printf("%.2f yen = %.2f $", bil, yen_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_kina = bil*s[26];
    printf("%.2fyen = %.2f kina", bil, yen_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
   yen_philippinepeso = bil*s[27];
    printf("%.2f yen = %.2f peso", bil, yen_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_saudiriyal = bil*s[28];
    printf("%.2f yen = %.2f riyal", bil, yen_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_singaporedollar= bil*s[29];
    printf("%.2f yen = %.2f $", bil, yen_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_taiwandollar= bil*s[30];
    printf("%.2f yen = %.2f $", bil, yen_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    yen_usdollar= bil*s[31];
    printf("%.2f yen= %.2f $", bil, yen_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
		
}

int riel()
{
	
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 20)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_bruneidollar= bil*t[0];
    printf("%.2f riel = %.2f $", bil, riel_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_rupiah= bil*t[1];
    printf("%.2f riel = %.2f Rp", bil, riel_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_brazilianreal= bil*t[2];
    printf("%.2f riel = %.2f R$", bil, riel_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_canadiandollar= bil*t[3];
    printf("%.2f riel = %.2f $", bil, riel_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_swissfranc= bil*t[4];
    printf("%.2f riel = %.2f F", bil, riel_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_chileanpeso= bil*t[5];
    printf("%.2f riel = %.2f $", bil, riel_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_yuan= bil*t[6];
    printf("%.2f riel = %.2f yuan", bil, riel_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_colombianpeso= bil*t[7];
    printf("%.2f riel = %.2f $", bil, riel_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_czechkoruna= bil*t[8];
    printf("%.2f riel = %.2f Kc", bil, riel_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_danishkrone= bil*t[9];
    printf("%.2f riel = %.2f kr", bil, riel_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_egyptianpound= bil*t[10];
    printf("%.2f riel = %.2f egyptian pound", bil, riel_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_euro= bil*t[11];
    printf("%.2f riel= %.2f euro", bil, riel_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_hongkongdollar= bil*t[12];
    printf("%.2f riel = %.2f $", bil, riel_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_croatiankuna= bil*t[13];
    printf("%.2f riel = %.2f Kn ", bil, riel_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_indianrupee= bil*t[14];
    printf("%.2f riel = %.2f rupee", bil, riel_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_iraqidinar= bil*t[15];
    printf("%.2f riel = %.2f dinar", bil, riel_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_iranianrial= bil*t[16];
    printf("%.2f riel = %.2f Kr", bil, riel_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_icelandkrona= bil*t[17];
    printf("%.2f riel = %.2f Kr", bil, riel_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_yen= bil*t[18];
    printf("%.2f riel = %.2f yen", bil, riel_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_northkoreanwon= bil*t[19];
    printf("%.2f riel = %.2f won", bil, riel_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_southkoreanwon= bil*s[20];
    printf("%.2f riel = %.2f won", bil, riel_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_kip= bil*t[21];
    printf("%.2f riel = %.2f kip", bil, riel_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_kyat= bil*t[22];
    printf("%.2f riel = %.2f kyat", bil, riel_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_mexicanpeso = bil*t[23];
    printf("%.2f riel = %.2f $", bil, riel_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_malaysianringgit = bil*t[24];
    printf("%.2f riel = %.2f RM", bil, riel_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_newzealanddollar = bil*t[25];
    printf("%.2f riel = %.2f $", bil, riel_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_kina = bil*t[26];
    printf("%.2f riel = %.2f kina", bil, riel_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
   riel_philippinepeso = bil*t[27];
    printf("%.2f riel = %.2f peso", bil, riel_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_saudiriyal = bil*t[28];
    printf("%.2f riel = %.2f riyal", bil, riel_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_singaporedollar= bil*t[29];
    printf("%.2f riel = %.2f $", bil, riel_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_taiwandollar= bil*t[30];
    printf("%.2f riel = %.2f $", bil, riel_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    riel_usdollar= bil*t[31];
    printf("%.2f riel = %.2f $", bil, riel_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int northkoreanwon()
{
	
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
    printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 21)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_bruneidollar= bil*u[0];
    printf("%.2f won = %.2f $", bil, northkoreanwon_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_rupiah= bil*u[1];
    printf("%.2f won = %.2f Rp", bil, northkoreanwon_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_brazilianreal= bil*u[2];
    printf("%.2f won = %.2f R$", bil, northkoreanwon_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_canadiandollar= bil*u[3];
    printf("%.2f won = %.2f $", bil, northkoreanwon_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_swissfranc= bil*u[4];
    printf("%.2f won = %.2f F", bil, northkoreanwon_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_chileanpeso= bil*u[5];
    printf("%.2f won = %.2f $", bil, northkoreanwon_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_yuan= bil*u[6];
    printf("%.2f won = %.2f yuan", bil, northkoreanwon_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_colombianpeso= bil*u[7];
    printf("%.2f won = %.2f $", bil, northkoreanwon_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_czechkoruna= bil*u[8];
    printf("%.2f won = %.2f Kc", bil, northkoreanwon_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_danishkrone= bil*u[9];
    printf("%.2f won = %.2f kr", bil, northkoreanwon_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_egyptianpound= bil*u[10];
    printf("%.2f won = %.2f egyptian pound", bil, northkoreanwon_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_euro= bil*u[11];
    printf("%.2f won = %.2f euro", bil, northkoreanwon_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_hongkongdollar= bil*u[12];
    printf("%.2f won = %.2f $", bil, northkoreanwon_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_croatiankuna= bil*u[13];
    printf("%.2f won = %.2f Kn ", bil, northkoreanwon_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_indianrupee= bil*u[14];
    printf("%.2f won = %.2f rupee", bil, northkoreanwon_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_iraqidinar= bil*u[15];
    printf("%.2f won = %.2f dinar", bil, northkoreanwon_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_iranianrial= bil*u[16];
    printf("%.2f won = %.2f Kr", bil, northkoreanwon_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_icelandkrona= bil*u[17];
    printf("%.2f won = %.2f Kr", bil, northkoreanwon_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_yen= bil*u[18];
    printf("%.2f won = %.2f yen", bil, northkoreanwon_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_riel= bil*u[19];
    printf("%.2f won = %.2f riel", bil, northkoreanwon_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_southkoreanwon= bil*u[20];
    printf("%.2f won = %.2f won", bil, northkoreanwon_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_kip= bil*u[21];
    printf("%.2f won = %.2f kip", bil, northkoreanwon_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_kyat= bil*u[22];
    printf("%.2f won = %.2f kyat", bil, northkoreanwon_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_mexicanpeso = bil*u[23];
    printf("%.2f won = %.2f $", bil, northkoreanwon_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_malaysianringgit = bil*u[24];
    printf("%.2f won = %.2f RM", bil, northkoreanwon_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_newzealanddollar = bil*u[25];
    printf("%.2f won = %.2f $", bil, northkoreanwon_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_kina = bil*u[26];
    printf("%.2f won = %.2f kina", bil, northkoreanwon_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_philippinepeso = bil*u[27];
    printf("%.2f won = %.2f peso", bil, northkoreanwon_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_saudiriyal = bil*u[28];
    printf("%.2f won = %.2f riyal", bil, northkoreanwon_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_singaporedollar= bil*u[29];
    printf("%.2f won = %.2f $", bil, northkoreanwon_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_taiwandollar= bil*u[30];
    printf("%.2f won = %.2f $", bil, northkoreanwon_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    northkoreanwon_usdollar= bil*u[31];
    printf("%.2f won = %.2f $", bil, northkoreanwon_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}	
	
}

int southkoreanwon()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
  
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 22)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_bruneidollar= bil*v[0];
    printf("%.2f won = %.2f $", bil, southkoreanwon_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_rupiah= bil*v[1];
    printf("%.2f won = %.2f Rp", bil, southkoreanwon_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_brazilianreal= bil*v[2];
    printf("%.2f won = %.2f R$", bil, southkoreanwon_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_canadiandollar= bil*v[3];
    printf("%.2f won = %.2f $", bil, southkoreanwon_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_swissfranc= bil*v[4];
    printf("%.2f won = %.2f F", bil, southkoreanwon_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_chileanpeso= bil*v[5];
    printf("%.2f won = %.2f $", bil, southkoreanwon_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_yuan= bil*v[6];
    printf("%.2f won = %.2f yuan", bil, southkoreanwon_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_colombianpeso= bil*v[7];
    printf("%.2f won = %.2f $", bil, southkoreanwon_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_czechkoruna= bil*v[8];
    printf("%.2f won = %.2f Kc", bil, southkoreanwon_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_danishkrone= bil*v[9];
    printf("%.2f won = %.2f kr", bil, southkoreanwon_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_egyptianpound= bil*v[10];
    printf("%.2f won = %.2f egyptian pound", bil, southkoreanwon_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_euro= bil*v[11];
    printf("%.2f won= %.2f euro", bil, southkoreanwon_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_hongkongdollar= bil*v[12];
    printf("%.2f won = %.2f $", bil, southkoreanwon_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_croatiankuna= bil*v[13];
    printf("%.2f won = %.2f Kn ", bil, southkoreanwon_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_indianrupee= bil*v[14];
    printf("%.2f won = %.2f rupee", bil, southkoreanwon_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_iraqidinar= bil*v[15];
    printf("%.2f won = %.2f dinar", bil, southkoreanwon_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_iranianrial= bil*v[16];
    printf("%.2f won = %.2f Kr", bil, southkoreanwon_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_icelandkrona= bil*v[17];
    printf("%.2f won = %.2f Kr", bil, southkoreanwon_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_yen= bil*v[18];
    printf("%.2f won = %.2f yen", bil, southkoreanwon_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_riel= bil*v[19];
    printf("%.2f won = %.2f riel", bil, southkoreanwon_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_northkoreanwon= bil*v[20];
    printf("%.2f won = %.2f won", bil, southkoreanwon_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_kip= bil*v[21];
    printf("%.2f won = %.2f kip", bil, southkoreanwon_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_kyat= bil*v[22];
    printf("%.2f won = %.2f kyat", bil, southkoreanwon_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_mexicanpeso = bil*v[23];
    printf("%.2f won = %.2f $", bil, southkoreanwon_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_malaysianringgit = bil*v[24];
    printf("%.2f won = %.2f RM", bil, southkoreanwon_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_newzealanddollar = bil*v[25];
    printf("%.2f won = %.2f $", bil, southkoreanwon_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_kina = bil*v[26];
    printf("%.2f won = %.2f kina", bil, southkoreanwon_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_philippinepeso = bil*v[27];
    printf("%.2f won = %.2f peso", bil, southkoreanwon_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_saudiriyal = bil*v[28];
    printf("%.2f won = %.2f riyal", bil, southkoreanwon_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_singaporedollar= bil*v[29];
    printf("%.2f won = %.2f $", bil, southkoreanwon_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_taiwandollar= bil*v[30];
    printf("%.2f won = %.2f $", bil, southkoreanwon_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    southkoreanwon_usdollar= bil*v[31];
    printf("%.2f won = %.2f $", bil, southkoreanwon_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int kip()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 23)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_bruneidollar= bil*w[0];
    printf("%.2f kip = %.2f $", bil, kip_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_rupiah= bil*w[1];
    printf("%.2f kip = %.2f Rp", bil, kip_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_brazilianreal= bil*w[2];
    printf("%.2f kip = %.2f R$", bil, kip_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_canadiandollar= bil*w[3];
    printf("%.2f kip = %.2f $", bil, kip_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_swissfranc= bil*w[4];
    printf("%.2f kip = %.2f F", bil, kip_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_chileanpeso= bil*w[5];
    printf("%.2f kip = %.2f $", bil, kip_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_yuan= bil*w[6];
    printf("%.2f kip = %.2f yuan", bil, kip_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_colombianpeso= bil*w[7];
    printf("%.2f kip = %.2f $", bil, kip_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_czechkoruna= bil*w[8];
    printf("%.2f kip = %.2f Kc", bil, kip_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_danishkrone= bil*w[9];
    printf("%.2f kip = %.2f kr", bil, kip_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_egyptianpound= bil*w[10];
    printf("%.2f kip = %.2f egyptian pound", bil, kip_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_euro= bil*w[11];
    printf("%.2f kip = %.2f euro", bil, kip_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_hongkongdollar= bil*w[12];
    printf("%.2f kip = %.2f $", bil, kip_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_croatiankuna= bil*w[13];
    printf("%.2f kip = %.2f Kn ", bil, kip_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_indianrupee= bil*w[14];
    printf("%.2f kip = %.2f rupee", bil, kip_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_iraqidinar= bil*w[15];
    printf("%.2f kip = %.2f dinar", bil, kip_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_iranianrial= bil*w[16];
    printf("%.2f kip = %.2f Kr", bil, kip_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_icelandkrona= bil*w[17];
    printf("%.2f kip = %.2f Kr", bil, kip_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_yen= bil*w[18];
    printf("%.2f kip = %.2f yen ", bil, kip_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kip_riel= bil*w[19];
    printf("%.2f  kip = %.2f riel", bil, kip_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kip_northkoreanwon= bil*w[20];
    printf("%.2f  kip = %.2f won", bil, yen_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kip_southkoreanwon= bil*w[21];
    printf("%.2f  kip = %.2f won", bil,  kip_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kip_kyat= bil*w[22];
    printf("%.2f  kip = %.2f kyat", bil,  kip_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_mexicanpeso = bil*w[23];
    printf("%.2f kip = %.2f $", bil, kip_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_malaysianringgit = bil*w[24];
    printf("%.2f kip = %.2f RM", bil, kip_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_newzealanddollar = bil*w[25];
    printf("%.2f kip = %.2f $", bil, kip_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_kina = bil*w[26];
    printf("%.2f kip = %.2f kina", bil, kip_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_philippinepeso = bil*w[27];
    printf("%.2f kip = %.2f peso", bil, kip_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_saudiriyal = bil*w[28];
    printf("%.2f kip = %.2f riyal", bil, kip_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_singaporedollar= bil*w[29];
    printf("%.2f kip = %.2f $", bil, kip_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_taiwandollar= bil*w[30];
    printf("%.2f kip = %.2f $", bil, kip_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kip_usdollar= bil*w[31];
    printf("%.2f kip = %.2f $", bil, kip_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int kyat()
{
	
	pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 24)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_bruneidollar= bil*x[0];
    printf("%.2f kyat = %.2f $", bil, kyat_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_rupiah= bil*x[1];
    printf("%.2f kyat = %.2f Rp", bil, kyat_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_brazilianreal= bil*x[2];
    printf("%.2f kyat = %.2f R$", bil, kyat_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_canadiandollar= bil*x[3];
    printf("%.2f kyat = %.2f $", bil, kyat_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_swissfranc= bil*x[4];
    printf("%.2f kyat = %.2f F", bil, kyat_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_chileanpeso= bil*x[5];
    printf("%.2f kyat = %.2f $", bil, kyat_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_yuan= bil*x[6];
    printf("%.2f kyat = %.2f yuan", bil, kyat_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_colombianpeso= bil*x[7];
    printf("%.2f kyat = %.2f $", bil, kyat_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_czechkoruna= bil*x[8];
    printf("%.2f kyat = %.2f Kc", bil, kyat_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_danishkrone= bil*x[9];
    printf("%.2f kyat = %.2f kr", bil, kyat_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_egyptianpound= bil*x[10];
    printf("%.2f kyat = %.2f egyptian pound", bil, kyat_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_euro= bil*x[11];
    printf("%.2f kyat = %.2f euro", bil, kyat_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_hongkongdollar= bil*x[12];
    printf("%.2f kyat = %.2f $", bil, kyat_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_croatiankuna= bil*x[13];
    printf("%.2f kyat = %.2f Kn ", bil, kyat_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_indianrupee= bil*x[14];
    printf("%.2f kyat = %.2f rupee", bil, kyat_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_iraqidinar= bil*x[15];
    printf("%.2f kyat = %.2f dinar", bil, kyat_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_iranianrial= bil*x[16];
    printf("%.2f kyat = %.2f Kr", bil, kyat_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_icelandkrona= bil*x[17];
    printf("%.2f kyat = %.2f Kr", bil, kyat_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_yen= bil*x[18];
    printf("%.2f kyat = %.2f yen ", bil, kyat_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kyat_riel= bil*x[19];
    printf("%.2f  kyat = %.2f riel", bil, kyat_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kyat_northkoreanwon= bil*x[20];
    printf("%.2f  kyat = %.2f won", bil, kyat_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kyat_southkoreanwon= bil*x[21];
    printf("%.2f kyat = %.2f won", bil, kyat_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kyat_kip= bil*x[22];
    printf("%.2f  kyat = %.2f kip", bil,  kyat_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_mexicanpeso = bil*x[23];
    printf("%.2f kyat = %.2f $", bil, kyat_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_malaysianringgit = bil*x[24];
    printf("%.2f kyat = %.2f RM", bil, kyat_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_newzealanddollar = bil*x[25];
    printf("%.2f kyat = %.2f $", bil, kyat_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_kina = bil*x[26];
    printf("%.2f kyat = %.2f kina", bil, kyat_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_philippinepeso = bil*x[27];
    printf("%.2f kyat = %.2f peso", bil, kyat_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_saudiriyal = bil*x[28];
    printf("%.2f kyat = %.2f riyal", bil, kyat_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_singaporedollar= bil*x[29];
    printf("%.2f kyat = %.2f $", bil, kyat_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_taiwandollar= bil*x[30];
    printf("%.2f kyat = %.2f $", bil, kyat_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kyat_usdollar= bil*x[31];
    printf("%.2f kyat = %.2f $", bil, kyat_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int mexicanpeso()
{
	
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
   printf("pilih:");
   scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 25)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_bruneidollar= bil*y[0];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_rupiah= bil*y[1];
    printf("%.2f $ = %.2f Rp", bil, mexicanpeso_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_brazilianreal= bil*y[2];
    printf("%.2f $ = %.2f R$", bil, mexicanpeso_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_canadiandollar= bil*y[3];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_swissfranc= bil*y[4];
    printf("%.2f $ = %.2f F", bil, mexicanpeso_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_chileanpeso= bil*y[5];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_yuan= bil*y[6];
    printf("%.2f $ = %.2f yuan", bil, mexicanpeso_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_colombianpeso= bil*y[7];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_czechkoruna= bil*y[8];
    printf("%.2f $ = %.2f Kc", bil, mexicanpeso_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_danishkrone= bil*y[9];
    printf("%.2f $ = %.2f kr", bil, mexicanpeso_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_egyptianpound= bil*y[10];
    printf("%.2f $ = %.2f egyptian pound", bil, mexicanpeso_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_euro= bil*y[11];
    printf("%.2f $ = %.2f euro", bil, mexicanpeso_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_hongkongdollar= bil*y[12];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_croatiankuna= bil*y[13];
    printf("%.2f $ = %.2f Kn ", bil, mexicanpeso_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_indianrupee= bil*y[14];
    printf("%.2f $ = %.2f rupee", bil, mexicanpeso_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_iraqidinar= bil*y[15];
    printf("%.2f $ = %.2f dinar", bil, mexicanpeso_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_iranianrial= bil*y[16];
    printf("%.2f $ = %.2f Kr", bil, mexicanpeso_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_icelandkrona= bil*y[17];
    printf("%.2f $ = %.2f Kr", bil, mexicanpeso_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_yen= bil*y[18];
    printf("%.2f $ = %.2f yen ", bil, mexicanpeso_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     mexicanpeso_riel= bil*y[19];
    printf("%.2f  $ = %.2f riel", bil, mexicanpeso_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     mexicanpeso_northkoreanwon= bil*y[20];
    printf("%.2f  $ = %.2f won", bil, mexicanpeso_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     mexicanpeso_southkoreanwon= bil*y[21];
    printf("%.2f $ = %.2f won", bil, mexicanpeso_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     mexicanpeso_kip= bil*y[22];
    printf("%.2f  $ = %.2f kip", bil,  mexicanpeso_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_kyat = bil*y[23];
    printf("%.2f $ = %.2f kyat", bil, mexicanpeso_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_malaysianringgit = bil*y[24];
    printf("%.2f $ = %.2f RM", bil, mexicanpeso_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_newzealanddollar = bil*y[25];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_kina = bil*y[26];
    printf("%.2f $ = %.2f kina", bil, mexicanpeso_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_philippinepeso = bil*y[27];
    printf("%.2f $ = %.2f peso", bil, mexicanpeso_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_saudiriyal = bil*y[28];
    printf("%.2f $ = %.2f riyal", bil, mexicanpeso_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_singaporedollar= bil*y[29];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_taiwandollar= bil*y[30];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    mexicanpeso_usdollar= bil*y[31];
    printf("%.2f $ = %.2f $", bil, mexicanpeso_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int malaysianringgit()
{
	
		pilih:
  
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 26)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_bruneidollar= bil*z[0];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_rupiah= bil*z[1];
    printf("%.2f RM = %.2f Rp", bil, malaysianringgit_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_brazilianreal= bil*z[2];
    printf("%.2f RM = %.2f R$", bil, malaysianringgit_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_canadiandollar= bil*z[3];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_swissfranc= bil*z[4];
    printf("%.2f RM = %.2f F", bil, malaysianringgit_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_chileanpeso= bil*z[5];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_yuan= bil*z[6];
    printf("%.2f RM = %.2f yuan", bil, malaysianringgit_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_colombianpeso= bil*z[7];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_czechkoruna= bil*z[8];
    printf("%.2f RM = %.2f Kc", bil, malaysianringgit_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_danishkrone= bil*z[9];
    printf("%.2f RN = %.2f kr", bil, malaysianringgit_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_egyptianpound= bil*z[10];
    printf("%.2f RM = %.2f egyptian pound", bil, malaysianringgit_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_euro= bil*z[11];
    printf("%.2f RM = %.2f euro", bil, malaysianringgit_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_hongkongdollar= bil*z[12];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_croatiankuna= bil*z[13];
    printf("%.2f RM = %.2f Kn ", bil, malaysianringgit_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_indianrupee= bil*z[14];
    printf("%.2f RM = %.2f rupee", bil, malaysianringgit_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_iraqidinar= bil*z[15];
    printf("%.2f RM = %.2f dinar", bil, malaysianringgit_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_iranianrial= bil*z[16];
    printf("%.2f RM = %.2f Kr", bil, malaysianringgit_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_icelandkrona= bil*z[17];
    printf("%.2f RM = %.2f Kr", bil, malaysianringgit_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_yen= bil*z[18];
    printf("%.2f RM = %.2f yen ", bil, malaysianringgit_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kyat_malaysianringgit= bil*z[19];
    printf("%.2f  RM = %.2f riel", bil, malaysianringgit_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_northkoreanwon= bil*z[20];
    printf("%.2f  RM = %.2f won", bil, malaysianringgit_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     malaysianringgit_southkoreanwon= bil*z[21];
    printf("%.2f RM = %.2f won", bil, malaysianringgit_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     malaysianringgit_kip= bil*z[22];
    printf("%.2f  RM = %.2f kip", bil,  malaysianringgit_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_kyat = bil*z[23];
    printf("%.2f RM = %.2f kyat", bil, malaysianringgit_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_mexicanpeso = bil*z[24];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_newzealanddollar = bil*z[25];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_kina = bil*z[26];
    printf("%.2f RM = %.2f kina", bil, malaysianringgit_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_philippinepeso = bil*z[27];
    printf("%.2f RM = %.2f peso", bil, malaysianringgit_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_saudiriyal = bil*z[28];
    printf("%.2f RM = %.2f riyal", bil, malaysianringgit_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_singaporedollar= bil*z[29];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_taiwandollar= bil*z[30];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    malaysianringgit_usdollar= bil*z[31];
    printf("%.2f RM = %.2f $", bil, malaysianringgit_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}

}

int newzealanddollar()
{
		pilih:
 
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
    printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 27)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_bruneidollar= bil*aa[0];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_rupiah= bil*aa[1];
    printf("%.2f $ = %.2f Rp", bil, newzealanddollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_brazilianreal= bil*aa[2];
    printf("%.2f $ = %.2f R$", bil, newzealanddollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_canadiandollar= bil*aa[3];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_swissfranc= bil*aa[4];
    printf("%.2f newzealanddollar = %.2f F", bil, newzealanddollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_chileanpeso= bil*aa[5];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_yuan= bil*aa[6];
    printf("%.2f $ = %.2f yuan", bil, newzealanddollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_colombianpeso= bil*aa[7];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_czechkoruna= bil*aa[8];
    printf("%.2f $ = %.2f Kc", bil, newzealanddollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_danishkrone= bil*aa[9];
    printf("%.2f $ = %.2f kr", bil, newzealanddollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_egyptianpound= bil*aa[10];
    printf("%.2f $ = %.2f egyptian pound", bil, newzealanddollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_euro= bil*aa[11];
    printf("%.2f $ = %.2f euro", bil, newzealanddollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_hongkongdollar= bil*aa[12];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_croatiankuna= bil*aa[13];
    printf("%.2f $ = %.2f Kn ", bil, newzealanddollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_indianrupee= bil*aa[14];
    printf("%.2f $ = %.2f rupee", bil, newzealanddollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_iraqidinar= bil*aa[15];
    printf("%.2f $ = %.2f dinar", bil, newzealanddollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_iranianrial= bil*aa[16];
    printf("%.2f $ = %.2f Kr", bil, newzealanddollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_icelandkrona= bil*aa[17];
    printf("%.2f $ = %.2f Kr", bil, newzealanddollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_yen= bil*aa[18];
    printf("%.2f $ = %.2f ¥ ", bil, newzealanddollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     newzealanddollar_riel= bil*aa[19];
    printf("%.2f  $ = %.2f riel", bil, newzealanddollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_northkoreanwon= bil*aa[20];
    printf("%.2f  $ = %.2f won", bil, newzealanddollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     newzealanddollar_southkoreanwon= bil*aa[21];
    printf("%.2f $ = %.2f won", bil, newzealanddollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_kip= bil*aa[22];
    printf("%.2f  $ = %.2f kip", bil,  newzealanddollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_kyat = bil*aa[23];
    printf("%.2f $ = %.2f kyat", bil, newzealanddollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_mexicanpeso = bil*aa[24];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_malaysianringgit = bil*aa[25];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_kina = bil*aa[26];
    printf("%.2f $ = %.2f kina", bil, newzealanddollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_philippinepeso = bil*aa[27];
    printf("%.2f $ = %.2f peso", bil, newzealanddollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_saudiriyal = bil*aa[28];
    printf("%.2f $ = %.2f riyal", bil, newzealanddollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_singaporedollar= bil*aa[29];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_taiwandollar= bil*aa[30];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    newzealanddollar_usdollar= bil*aa[31];
    printf("%.2f $ = %.2f $", bil, newzealanddollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
	
	
}

int kina()
{
		pilih:
   
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 28)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_bruneidollar= bil*bb[0];
    printf("%.2f kina = %.2f $", bil, kina_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_rupiah= bil*bb[1];
    printf("%.2f kina = %.2f Rp", bil, kina_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_brazilianreal= bil*bb[2];
    printf("%.2f kina = %.2f R$", bil, kina_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_canadiandollar= bil*bb[3];
    printf("%.2f kina = %.2f $", bil, kina_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_swissfranc= bil*bb[4];
    printf("%.2f kina = %.2f F", bil, kina_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_chileanpeso= bil*bb[5];
    printf("%.2f kina = %.2f $", bil, kina_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_yuan= bil*bb[6];
    printf("%.2f kina= %.2f yuan", bil, kina_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_colombianpeso= bil*bb[7];
    printf("%.2f kina = %.2f $", bil, kina_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_czechkoruna= bil*bb[8];
    printf("%.2f kina = %.2f Kc", bil, kina_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_danishkrone= bil*bb[9];
    printf("%.2f kina = %.2f kr", bil, kina_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_egyptianpound= bil*bb[10];
    printf("%.2f kina = %.2f egyptian pound", bil, kina_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_euro= bil*bb[11];
    printf("%.2f kina = %.2f euro", bil, kina_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_hongkongdollar= bil*bb[12];
    printf("%.2f kina = %.2f $", bil, kina_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_croatiankuna= bil*bb[13];
    printf("%.2f kina = %.2f Kn ", bil, kina_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_indianrupee= bil*bb[14];
    printf("%.2f kina = %.2f rupee", bil, kina_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_iraqidinar= bil*bb[15];
    printf("%.2f kina = %.2f dinar", bil, kina_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_iranianrial= bil*bb[16];
    printf("%.2f kina = %.2f Kr", bil, kina_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_icelandkrona= bil*bb[17];
    printf("%.2f kina = %.2f Kr", bil, kina_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_yen= bil*bb[18];
    printf("%.2f kina = %.2f yen ", bil, kina_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kina_riel= bil*bb[19];
    printf("%.2f  kina = %.2f riel", bil, kina_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kina_northkoreanwon= bil*bb[20];
    printf("%.2f  kina = %.2f won", bil, kina_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kina_southkoreanwon= bil*bb[21];
    printf("%.2f kina = %.2f won", bil, kina_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     kina_kip= bil*bb[22];
    printf("%.2f  kina = %.2f kip", bil,  kina_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_kyat = bil*bb[23];
    printf("%.2f kina = %.2f kyat", bil, kina_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_mexicanpeso = bil*bb[24];
    printf("%.2f kina = %.2f $", bil, kina_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_malaysianringgit = bil*bb[25];
    printf("%.2f kina = %.2f RM", bil, kina_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_newzealanddollar = bil*bb[26];
    printf("%.2f kina = %.2f $", bil, kina_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_philippinepeso = bil*bb[27];
    printf("%.2f kina = %.2f peso", bil, kina_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_saudiriyal = bil*bb[28];
    printf("%.2f kina = %.2f riyal", bil, kina_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_singaporedollar= bil*bb[29];
    printf("%.2f kina = %.2f $", bil, kina_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_taiwandollar= bil*bb[30];
    printf("%.2f kina = %.2f $", bil, kina_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    kina_usdollar= bil*bb[31];
    printf("%.2f kina = %.2f $", bil, kina_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
}

int  philippinepeso()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
    printf("pilih:");
    scanf("%d", &pilih);
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 29)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_bruneidollar= bil*cc[0];
    printf("%.2f peso = %.2f $", bil, philippinepeso_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_rupiah= bil*cc[1];
    printf("%.2f peso = %.2f Rp", bil, philippinepeso_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_brazilianreal= bil*cc[2];
    printf("%.2f peso = %.2f R$", bil, philippinepeso_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_canadiandollar= bil*cc[3];
    printf("%.2f peso = %.2f $", bil, philippinepeso_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_swissfranc= bil*cc[4];
    printf("%.2f peso = %.2f F", bil, philippinepeso_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_chileanpeso= bil*cc[5];
    printf("%.2f peso = %.2f $", bil, philippinepeso_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_yuan= bil*cc[6];
    printf("%.2f peso = %.2f yuan", bil, philippinepeso_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_colombianpeso= bil*cc[7];
    printf("%.2f peso = %.2f $", bil, philippinepeso_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_czechkoruna= bil*cc[8];
    printf("%.2f peso = %.2f Kc", bil, philippinepeso_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_danishkrone= bil*cc[9];
    printf("%.2f peso = %.2f kr", bil, philippinepeso_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_egyptianpound= bil*cc[10];
    printf("%.2f peso = %.2f egyptian pound", bil, philippinepeso_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_euro= bil*cc[11];
    printf("%.2f peso = %.2f euro", bil, philippinepeso_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_hongkongdollar= bil*cc[12];
    printf("%.2f peso = %.2f $", bil, philippinepeso_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_croatiankuna= bil*cc[13];
    printf("%.2f peso = %.2f Kn ", bil, philippinepeso_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_indianrupee= bil*cc[14];
    printf("%.2f peso = %.2f rupee", bil, philippinepeso_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_iraqidinar= bil*cc[15];
    printf("%.2f peso = %.2f dinar", bil, philippinepeso_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_iranianrial= bil*cc[16];
    printf("%.2f peso = %.2f Kr", bil, philippinepeso_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_icelandkrona= bil*cc[17];
    printf("%.2f peso = %.2f Kr", bil, philippinepeso_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_yen= bil*cc[18];
    printf("%.2f peso = %.2f yen ", bil,  philippinepeso_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     philippinepeso_riel= bil*cc[19];
    printf("%.2f  peso = %.2f riel", bil, philippinepeso_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     philippinepeso_northkoreanwon= bil*cc[20];
    printf("%.2f  peso = %.2f won", bil, philippinepeso_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     philippinepeso_southkoreanwon= bil*cc[21];
    printf("%.2f peso = %.2f won", bil, philippinepeso_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     philippinepeso_kip= bil*cc[22];
    printf("%.2f  peso = %.2f kip", bil,  philippinepeso_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_kyat = bil*cc[23];
    printf("%.2f philippinepeso = %.2f kyat", bil, philippinepeso_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_mexicanpeso = bil*cc[24];
    printf("%.2f peso = %.2f $", bil, philippinepeso_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_malaysianringgit = bil*cc[25];
    printf("%.2f peso = %.2f RM", bil, philippinepeso_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_newzealanddollar = bil*cc[26];
    printf("%.2f kina = %.2f $", bil, philippinepeso_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_kina= bil*cc[27];
    printf("%.2f peso = %.2f kina", bil, philippinepeso_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_saudiriyal = bil*cc[28];
    printf("%.2f peso = %.2f riyal", bil, philippinepeso_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_singaporedollar= bil*cc[29];
    printf("%.2f peso = %.2f $", bil, philippinepeso_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_taiwandollar= bil*cc[30];
    printf("%.2f peso = %.2f $", bil, philippinepeso_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    philippinepeso_usdollar= bil*cc[31];
    printf("%.2f peso = %.2f $", bil, philippinepeso_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
			
}

int saudiriyal()
{
		pilih:
  
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 30)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_bruneidollar= bil*dd[0];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_rupiah= bil*dd[1];
    printf("%.2f riyal = %.2f Rp", bil, saudiriyal_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_brazilianreal= bil*dd[2];
    printf("%.2f riyal= %.2f R$", bil, saudiriyal_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_canadiandollar= bil*dd[3];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_swissfranc= bil*dd[4];
    printf("%.2f riyal = %.2f F", bil, saudiriyal_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_chileanpeso= bil*dd[5];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_yuan= bil*dd[6];
    printf("%.2f riyal = %.2f yuan", bil, saudiriyal_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_colombianpeso= bil*dd[7];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_czechkoruna= bil*dd[8];
    printf("%.2f riyal = %.2f Kc", bil, saudiriyal_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_danishkrone= bil*dd[9];
    printf("%.2f riyal = %.2f kr", bil, saudiriyal_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_egyptianpound= bil*dd[10];
    printf("%.2f riyal = %.2f egyptian pound", bil, saudiriyal_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_euro= bil*dd[11];
    printf("%.2f riyal = %.2f euro", bil, saudiriyal_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_hongkongdollar= bil*dd[12];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_croatiankuna= bil*dd[13];
    printf("%.2f riyal = %.2f Kn ", bil, saudiriyal_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_indianrupee= bil*dd[14];
    printf("%.2f riyal= %.2f rupee", bil, saudiriyal_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_iraqidinar= bil*dd[15];
    printf("%.2f riyal = %.2f dinar", bil, saudiriyal_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_iranianrial= bil*dd[16];
    printf("%.2f riyal = %.2f Kr", bil, saudiriyal_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_icelandkrona= bil*dd[17];
    printf("%.2f riyal = %.2f Kr", bil, saudiriyal_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_yen= bil*dd[18];
    printf("%.2f riyal = %.2f yen ", bil, saudiriyal_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     saudiriyal_riel= bil*dd[19];
    printf("%.2f  riyal = %.2f riel", bil, saudiriyal_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     saudiriyal_northkoreanwon= bil*dd[20];
    printf("%.2f  riyal = %.2f won", bil, saudiriyal_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     saudiriyal_southkoreanwon= bil*dd[21];
    printf("%.2f riyal = %.2f won", bil, saudiriyal_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     saudiriyal_kip= bil*dd[22];
    printf("%.2f  riyal = %.2f kip", bil,  saudiriyal_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_kyat = bil*dd[23];
    printf("%.2f riyal = %.2f kyat", bil, saudiriyal_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_mexicanpeso = bil*dd[24];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_malaysianringgit = bil*dd[25];
    printf("%.2f riyal = %.2f RM", bil, saudiriyal_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_newzealanddollar = bil*dd[26];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_kina = bil*dd[27];
    printf("%.2f riyal = %.2f kina", bil, saudiriyal_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_philippinepeso = bil*dd[28];
    printf("%.2f riyal = %.2f peso", bil, saudiriyal_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_singaporedollar= bil*dd[29];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_taiwandollar= bil*dd[30];
    printf("%.2f peso = %.2f $", bil, saudiriyal_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    saudiriyal_usdollar= bil*dd[31];
    printf("%.2f riyal = %.2f $", bil, saudiriyal_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
}

int singaporedollar()
{
	
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
   
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 31)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_bruneidollar= bil*ee[0];
    printf("%.2f $ = %.2f $", bil, singaporedollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_rupiah= bil*ee[1];
    printf("%.2f $ = %.2f Rp", bil, singaporedollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_brazilianreal= bil*ee[2];
    printf("%.2f $ = %.2f R$", bil, singaporedollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_canadiandollar= bil*ee[3];
    printf("%.2f $ = %.2f $", bil, singaporedollar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_swissfranc= bil*ee[4];
    printf("%.2f $ = %.2f F", bil, singaporedollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_chileanpeso= bil*ee[5];
    printf("%.2f $ = %.2f $", bil, singaporedollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_yuan= bil*ee[6];
    printf("%.2f $ = %.2f yuan", bil, singaporedollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_colombianpeso= bil*ee[7];
    printf("%.2f $ = %.2f $", bil, singaporedollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_czechkoruna= bil*ee[8];
    printf("%.2f $ = %.2f Kc", bil, singaporedollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_danishkrone= bil*ee[9];
    printf("%.2f $ = %.2f kr", bil, singaporedollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_egyptianpound= bil*ee[10];
    printf("%.2f $ = %.2f egyptian pound", bil, singaporedollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_euro= bil*ee[11];
    printf("%.2f $ = %.2f euro", bil, singaporedollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_hongkongdollar= bil*ee[12];
    printf("%.2f $ = %.2f $", bil, singaporedollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_croatiankuna= bil*ee[13];
    printf("%.2f $ = %.2f Kn ", bil, singaporedollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_indianrupee= bil*ee[14];
    printf("%.2f $ = %.2f rupee", bil, singaporedollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_iraqidinar= bil*ee[15];
    printf("%.2f $ = %.2f dinar", bil, singaporedollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_iranianrial= bil*ee[16];
    printf("%.2f $ = %.2f rial", bil, singaporedollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_icelandkrona= bil*ee[17];
    printf("%.2f $ = %.2f Kr", bil, singaporedollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_yen= bil*ee[18];
    printf("%.2f $ = %.2f yen ", bil, singaporedollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     singaporedollar_riel= bil*ee[19];
    printf("%.2f  $ = %.2f riel", bil, singaporedollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_northkoreanwon= bil*ee[20];
    printf("%.2f  $ = %.2f won", bil, singaporedollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     singaporedollar_southkoreanwon= bil*ee[21];
    printf("%.2f $ = %.2f won", bil, singaporedollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     singaporedollar_kip= bil*ee[22];
    printf("%.2f  $ = %.2f kip", bil,  singaporedollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_kyat = bil*ee[23];
    printf("%.2f $ = %.2f kyat", bil, singaporedollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_mexicanpeso = bil*ee[24];
    printf("%.2f $ = %.2f $", bil, singaporedollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_malaysianringgit = bil*ee[25];
    printf("%.2f $= %.2f RM", bil, singaporedollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_newzealanddollar = bil*ee[26];
    printf("%.2f $ = %.2f $", bil, singaporedollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_kina = bil*ee[27];
    printf("%.2f $ = %.2f kina", bil, singaporedollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_philippinepeso = bil*ee[28];
    printf("%.2f $ = %.2f Peso", bil, singaporedollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_saudiriyal= bil*ee[29];
    printf("%.2f $ = %.2f riyal", bil, singaporedollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_taiwandollar= bil*ee[30];
    printf("%.2f $ = %.2f $", bil, singaporedollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    singaporedollar_usdollar= bil*ee[31];
    printf("%.2f $ = %.2f $", bil, singaporedollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int taiwandollar()
{
	
		pilih:
 
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 32)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_bruneidollar= bil*ff[0];
    printf("%.2f $ = %.2f $", bil, taiwandollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_rupiah= bil*ff[1];
    printf("%.2f $ = %.2f Rp", bil, taiwandollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_brazilianreal= bil*ff[2];
    printf("%.2f $ = %.2f R$", bil, taiwandollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_canadiandollar= bil*ff[3];
    printf("%.2f $ = %.2f $", bil, taiwandollar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_swissfranc= bil*ff[4];
    printf("%.2f $ = %.2f F", bil, taiwandollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_chileanpeso= bil*ff[5];
    printf("%.2f $ = %.2f $", bil, taiwandollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_yuan= bil*ff[6];
    printf("%.2f $ = %.2f ¥", bil, taiwandollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_colombianpeso= bil*ff[7];
    printf("%.2f $ = %.2f $", bil, taiwandollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_czechkoruna= bil*ff[8];
    printf("%.2f $ = %.2f Kc", bil, taiwandollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_danishkrone= bil*ff[9];
    printf("%.2f $ = %.2f kr", bil, taiwandollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_egyptianpound= bil*ff[10];
    printf("%.2f $ = %.2f egyptian pound", bil, taiwandollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_euro= bil*ff[11];
    printf("%.2f $ = %.2f euro", bil, taiwandollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_hongkongdollar= bil*ff[12];
    printf("%.2f $ = %.2f $", bil, taiwandollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_croatiankuna= bil*ff[13];
    printf("%.2f $ = %.2f Kn ", bil, taiwandollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_indianrupee= bil*ff[14];
    printf("%.2f $ = %.2f rupee", bil, taiwandollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_iraqidinar= bil*ff[15];
    printf("%.2f $ = %.2f dinar", bil, taiwandollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_iranianrial= bil*ff[16];
    printf("%.2f $ = %.2f rial", bil, taiwandollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_icelandkrona= bil*ff[17];
    printf("%.2f $ = %.2f Kr", bil, taiwandollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_yen= bil*ff[18];
    printf("%.2f $ = %.2f yen ", bil, taiwandollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     taiwandollar_riel= bil*ff[19];
    printf("%.2f  $ = %.2f riel", bil, taiwandollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_northkoreanwon= bil*ff[20];
    printf("%.2f  $ = %.2f won", bil, taiwandollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     taiwandollar_southkoreanwon= bil*ff[21];
    printf("%.2f $ = %.2f won", bil, taiwandollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     taiwandollar_kip= bil*ff[22];
    printf("%.2f  $ = %.2f kip", bil,  taiwandollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_kyat = bil*ff[23];
    printf("%.2f $ = %.2f kyat", bil, taiwandollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_mexicanpeso = bil*ff[24];
    printf("%.2f $ = %.2f $", bil, taiwandollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_malaysianringgit = bil*ff[25];
    printf("%.2f $= %.2f RM", bil, taiwandollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_newzealanddollar = bil*ff[26];
    printf("%.2f $ = %.2f $", bil, taiwandollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_kina = bil*ff[27];
    printf("%.2f $ = %.2f kina", bil, taiwandollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_philippinepeso = bil*ff[28];
    printf("%.2f $ = %.2f Peso", bil, taiwandollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_saudiriyal= bil*ff[29];
    printf("%.2f $ = %.2f riyal", bil, taiwandollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_singaporedollar= bil*ff[30];
    printf("%.2f $ = %.2f $", bil, taiwandollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 33)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    taiwandollar_usdollar= bil*ff[31];
    printf("%.2f $ = %.2f $", bil, taiwandollar_usdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
}

int usdollar()
{
		pilih:
    
    printf("\n||Masukkan kode mata uang tujuan anda:     ||\n");
	printf(  "||Tekan 0 untuk kembali                    ||\n");
	printf("pilih:");
	scanf("%d", &pilih);
    
    
    if(pilih > 33)
    {
    	printf("Kode yang anda masukkan tidak terdaftar!\nSilahkan masukkan ulang kode yang bisa dilihat pada menu informasi kode mata uang!!");
    	system("pause");
    	system("cls");
    	goto pilih;
	}
    if(pilih == 0)
	{
		system("cls");
		return konversi();
	}
	 if (pilih == 33)
	{
    printf("Kode mata uang tujuan yang anda masukkan sama dengan kode mata uang awal anda!! ");
    system("pause");
    system("cls");
    goto pilih;
    }
    
    if (pilih == 1)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_bruneidollar= bil*gg[0];
    printf("%.2f $ = %.2f $", bil, usdollar_bruneidollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 2)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_rupiah= bil*gg[1];
    printf("%.2f $ = %.2f Rp", bil, usdollar_rupiah);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 3)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_brazilianreal= bil*gg[2];
    printf("%.2f $ = %.2f R$", bil, usdollar_brazilianreal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 4)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_canadiandollar= bil*gg[3];
    printf("%.2f $ = %.2f $", bil, usdollar_canadiandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 5)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_swissfranc= bil*gg[4];
    printf("%.2f $ = %.2f F", bil, usdollar_swissfranc);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 6)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_chileanpeso= bil*gg[5];
    printf("%.2f $ = %.2f $", bil, usdollar_chileanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 7)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_yuan= bil*gg[6];
    printf("%.2f $ = %.2f yuan", bil, usdollar_yuan);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 8)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_colombianpeso= bil*gg[7];
    printf("%.2f $ = %.2f $", bil, usdollar_colombianpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	 if (pilih == 9)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_czechkoruna= bil*gg[8];
    printf("%.2f $ = %.2f Kc", bil, usdollar_czechkoruna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 10)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_danishkrone= bil*gg[9];
    printf("%.2f $ = %.2f kr", bil, usdollar_danishkrone);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 11)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_egyptianpound= bil*gg[10];
    printf("%.2f $ = %.2f egyptian pound", bil, usdollar_egyptianpound);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 12)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_euro= bil*gg[11];
    printf("%.2f $ = %.2f euro", bil, usdollar_euro);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 13)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_hongkongdollar= bil*gg[12];
    printf("%.2f $ = %.2f $", bil, usdollar_hongkongdollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 14)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_croatiankuna= bil*gg[13];
    printf("%.2f $ = %.2f Kn ", bil, usdollar_croatiankuna);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 15)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_indianrupee= bil*gg[14];
    printf("%.2f $ = %.2f rupee", bil, usdollar_indianrupee);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 16)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_iraqidinar= bil*gg[15];
    printf("%.2f $ = %.2f dinar", bil, usdollar_iraqidinar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 17)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_iranianrial= bil*gg[16];
    printf("%.2f $ = %.2f rial", bil, usdollar_iranianrial);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 18)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_icelandkrona= bil*gg[17];
    printf("%.2f $ = %.2f Kr", bil, usdollar_icelandkrona);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 19)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_yen= bil*gg[18];
    printf("%.2f $ = %.2f yen ", bil, usdollar_yen);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 20)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     usdollar_riel= bil*gg[19];
    printf("%.2f  $ = %.2f riel", bil, usdollar_riel);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 21)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_northkoreanwon= bil*gg[20];
    printf("%.2f  $ = %.2f won", bil, usdollar_northkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
		if (pilih == 22)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     usdollar_southkoreanwon= bil*gg[21];
    printf("%.2f $ = %.2f won", bil, usdollar_southkoreanwon);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 23)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
     usdollar_kip= bil*gg[22];
    printf("%.2f  $ = %.2f kip", bil,  usdollar_kip);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 24)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_kyat = bil*gg[23];
    printf("%.2f $ = %.2f kyat", bil, usdollar_kyat);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		
	if (pilih == 25)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_mexicanpeso = bil*gg[24];
    printf("%.2f $ = %.2f $", bil, usdollar_mexicanpeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 26)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_malaysianringgit = bil*gg[25];
    printf("%.2f $= %.2f RM", bil, usdollar_malaysianringgit);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 27)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_newzealanddollar = bil*gg[26];
    printf("%.2f $ = %.2f $", bil, usdollar_newzealanddollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 28)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_kina = bil*gg[27];
    printf("%.2f $ = %.2f kina", bil, usdollar_kina);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 29)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_philippinepeso = bil*gg[28];
    printf("%.2f $ = %.2f Peso", bil, usdollar_philippinepeso);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
		if (pilih == 30)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_saudiriyal= bil*gg[29];
    printf("%.2f $ = %.2f riyal", bil, usdollar_saudiriyal);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 31)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_singaporedollar= bil*gg[30];
    printf("%.2f $ = %.2f $", bil, usdollar_singaporedollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	if (pilih == 32)
	{
	printf("Masukkan jumlah :");
    scanf("%f", &bil);
    usdollar_taiwandollar= bil*gg[31];
    printf("%.2f $ = %.2f $", bil, usdollar_taiwandollar);
   
    printf("\n||Ingin melakukan konversi mata uang lagi?||\n");
    printf("||----------------------------------------||\n");
    printf("|| 1. YA                                  ||\n");
    printf("|| 2. Tidak                               ||\n");
    printf("||----------------------------------------||\n");
   
    
    printf ("Pilihan Anda:");
    scanf("%d", &kembali);
    system("cls");
    	if(kembali == 1)
    	{
    		return main();	
		}
		else if(kembali == 0)
		{
			return 0;
		}
	}
	
	
}






  

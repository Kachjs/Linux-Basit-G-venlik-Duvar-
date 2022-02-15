#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/* Renk Ayarları */
#define yesil  "\033[0;29m"
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define sari  "\x1B[33m"
#define normal "\033[0m"
#define scriptversion "v1"
#define coded "MR.HASAN"

int main(){
	baslangic();
	return 0;
}

baslangic(){
  system("clear");
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
	printf("%s◄ ►     %sFirewall Script %s%s %sby %s%s %s& %s%s %s    ◄ ►\n",mavi,normal,kirmizi,scriptversion,normal,kirmizi,coded,normal,kirmizi,coded2,mavi);
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  printf("%s◄ ►       %s1) %sIptables Kurallarına Git                   %s◄ ►\n",mavi,sari,normal,mavi);
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  int sectir;
  printf("%sCevap: %s",mavi,normal);
  scanf("%d",&sectir);
  if(sectir==1){
  system("clear");
  menu2();
  } else {
	if(sectir==2){
	system("clear");
	menu2();
	} else {
	system("clear");
	hatalisectiniz();
	}
  }
}

menu2(){
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
	printf("%s◄ ►           %s     Iptables Kuralları%s                   ◄ ►\n",mavi,normal,mavi);
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  printf("%s◄ ►        %s1) %sKuralları Gir                             %s◄ ►\n",mavi,sari,normal,mavi);
  printf("%s◄ ►        %s2) %sKuralları Sil                             %s◄ ►\n",mavi,sari,normal,mavi);
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  int sectir;
  printf("%sCevap: %s",mavi,normal);
  scanf("%d",&sectir);
  if(sectir==1){
    system("clear");
    kurallarigir();
  } else {
    if(sectir==2){
    system("clear");
    kurallarisil();
    } else {
    system("clear");
    hatalisectiniz();
    }
  }
}




kurallarigir(){
system("service iptables stop");
system("iptables -A INPUT -p icmp -i eth0 -j DROP");
system("iptables -A INPUT -p udp -m string --string zzzz --algo kmp --to 65535 -j DROP");
system("iptables -A INPUT -p tcp --dport 80 -m limit --limit 25/minute --limit-burst 100 -j ACCEPT");
system("iptables -A INPUT -p icmp -j DROP");
system("iptables -A INPUT -p udp --dport 9987 -m state --state NEW,ESTABLISHED -j ACCEPT");
system("iptables -A OUTPUT -p udp --sport 9987 -m state --state ESTABLISHED -j ACCEPT");
system("iptables -A INPUT -p tcp --dport 2008 -m state --state NEW,ESTABLISHED -j ACCEPT");
system("iptables -A OUTPUT -p tcp --sport 2008 -m state --state ESTABLISHED -j ACCEPT");
system("iptables -A INPUT -p tcp --dport 30033 -m state --state NEW,ESTABLISHED -j ACCEPT");
system("iptables -A OUTPUT -p tcp --sport 30033 -m state --state ESTABLISHED -j ACCEPT");
system("service iptables save");
system("service iptables start");
}

kurallarisil(){
  system("service iptables stop");
system("iptables -F");
system("service iptables save");
system("service iptables start");
}

hatalisectiniz(){
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
	printf("%s◄ ►                                                     ◄ ►\n",mavi);
	printf("%s◄ ►     %sYanlış tuşlama yapıldı, script kapatılıyor.     %s◄ ►\n",mavi,normal,mavi);
	printf("%s◄ ►                     %sİyi Günler                      %s◄ ►\n",mavi,normal,mavi);
	printf("%s◄ ►                                                     ◄ ►\n",mavi);
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►",mavi);
	printf("%s \n",normal);
	exit(-1);
}

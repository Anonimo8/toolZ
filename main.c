#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	system("MODE 20,1");
	//system("MODE 90,25");
	system("title tomZ Tool");
	system("color a");
	system("mkdir results");
	system("cls");
	
	
	/*
	
	Comandos de la herramienta:
	
	system(" > results/.ini");
	
	*/
	
	system("ipconfig /allcompartments /all > results/ipconfig.ini");
	system("whoami > results/whoami.ini");
	system("tasklist > results/tasks.ini");
	system("systeminfo > results/sysinfo.ini");
	system("ver > results/versionWindows.ini");
	system("curl ifconfig.me/all > results/publicIP.ini");
	system("netstat -q > results/allConections.ini");
	system("getmac /v > results/mac.ini");
	system("netstat -e > results/iface-statistics.ini");
	system("netstat -r > results/route-tables.ini");
	system("driverquery > results/drivers.ini");
	system("wmic cpu list full > results/cpu.ini");
	system("wmic bios list full > results/bios.ini");
	system("wmic memorychip list full > results/memorychip.ini");
	system("netsh wlan export profile folder=results key =clear");
	system("sc query > results/services.ini");
	system("gpresult /r > results/gpresult.ini");
	system("ipconfig /displaydns > results/cache_dns.ini");
	system("arp -a > results/arp_table.ini");
	system("nbtstat -c > results/nbt_cache.ini");
	system("net user > results/users.ini");
	system("date /t > results/date.ini");
	system("tzutil /g > results/time_zone.ini");
	system("bitsadmin /list > results/bitsadmin_job_list.ini");
	system("winget list > results/programs.ini");
	
	
	system("netsh wlan show wlanreport > wlanreport.ini");
	system("cd results && curl localhost:80");
	
	
	
	
	//system("curl parrot.live");
	system("exit");
	return 0;
}

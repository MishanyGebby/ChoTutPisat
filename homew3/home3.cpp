#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int xa,xb,xc;
	int ya,yb,yc;
	int xm,ym;
	std::cout << "Enter the A coorditates: ";
	std::cin >> xa >> ya;
	std::cout << "Enter the B coordinates: ";
	std::cin >> xb >> yb;
	std::cout << "Enter the C coordinates: ";
	std::cin >> xc >> yc;
	std::cout << "Enter the M coordinates: ";
	std::cin >> xm >> ym;
	
	float am,bm,cm;
	float ab,bc,ac;
	am = sqrt(pow((xm-xa),2)+pow((ym-ya),2));
	bm = sqrt(pow((xm-xb),2)+pow((ym-yb),2));
	cm = sqrt(pow((xm-xc),2)+pow((ym-yc),2));
	
	ab = sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	bc = sqrt(pow((xc-xb),2)+pow((yc-yb),2));
	ac = sqrt(pow((xc-xa),2)+pow((yc-ya),2));
	
	float p1,p2,p3;
	p1 = (ab+bm+am)/2;
	p2 = (bm+bc+cm)/2;
	p3 = (ac+am+cm)/2;
	
	float s1,s2,s3;
	s1 = sqrt(p1*(p1-am)*(p1-bm)*(p1-ab));
	s2 = sqrt(p2*(p2-bm)*(p2-cm)*(p2-bc));
	s3 = sqrt(p3*(p3-am)*(p3-cm)*(p3-ac));
	
	float p4;
	p4 = (ab+bc+ac)/2;
	float sabc;
	sabc = sqrt(p4*(p4-ab)*(p4-bc)*(p4-ac));
	float sall = s1+s2+s3;

	if (sall == sabc)
		std::cout << "M prinadlejit treugol'niku";
	else 
		std::cout << "M ne prinadlejit treugol'niku";
	getch();
	return 0;
	}
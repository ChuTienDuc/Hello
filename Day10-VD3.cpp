#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

struct SinhVien{
	char ho_ten[30];
	int tuoi;
	char gioi_tinh[4];
	double diem_tk;	
};
//ham tra ve cau truc sinh vien
SinhVien tao_sv(const char *ht, int tuoi, const char *gt, double dtk){
	SinhVien sv;
	strcpy(sv.ho_ten, ht);
	sv.tuoi = tuoi;
	strcpy(sv.gioi_tinh, gt);
	sv.diem_tk = dtk;
	return sv;
	
}

//ham hien thi noi dung cau truc
void hien_thi(SinhVien sinh_vien){
	printf("\n\tHo va ten: %d", sinh_vien.ho_ten);
	printf("\n\tTuoi: %d", sinh_vien.tuoi);
	printf("\n\tGioi tinh: %s", sinh_vien.gioi_tinh);
	printf("\n\tDiem tk: %.2lf", sinh_vien.diem_tk);
	
}
int main(){
	//su dung ham tao sv
	SinhVien sinh_vien = tao_sv("Nguyen Hoa Mai", 20, "Nu",  7.5);
	printf("thong tin ve sinh vien duoc khoi tao");
	hien_thi(sinh_vien);
}

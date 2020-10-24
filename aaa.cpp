//HVCNBCVT.HCM.CNTT2.TH.THCS2SV.01
//
// CHU Y:
// 1) XOA hoac SUA FILE NAY CO THE LAM MAT hoac SAI NOI DUNG DE THI.
// 2) CAC HAM BI THAY DOI NGUYEN MAU SE KHONG DUOC CHAM DIEM.
// ======================================================================
 #include <iostream>
 using namespace std;

// Hay viet cac lenh cho ham F01
// Khong dung lenh nhap xuat tu ban phim (cin,cout,scanf,printf) trong ham.
unsigned F01(unsigned A[],unsigned n)
{	
	// n la so phan tu cua mang A
	// tim so k = so luong phan tu xuat hien duy nhat 1 lan trong mang A
	int l=0,k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{		
			if(A[i]==A[j])
			{
				l++;	
			}
		}
		if(l==0) k++;	
	}
	return k;
}

int main()
{	
	int n=6;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<F01(a,n);
	// ham main() dung viet cac lenh goi ham tren de xem ket qua (khong tinh diem).
	return 0;
}

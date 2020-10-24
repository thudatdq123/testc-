unsigned forCheck(unsigned N, int K)
{
	// gia su co 4 ky so trong A[]
	
	// goi B[] la 1 hoan vi cua A[]
	// B[0] = foreach (A[i])
	// B[1] = foreach (A[j], j<>i)
	// B[2] = foreach (A[k], k<>i && k<>j)
	// B[3] = foreach (A[l], l<>i && l<>j && l<>k)
	int A[4];
	// tao ra mang A
	n2A(A,N);
	// hoan vi A thanh B va chuyen thanh so M de chia k
	int B[4];
	for (int i=0; i<4; i++)
	for (int j=0; j<4; j++)
	if (j!=i)
		for (int k=0; k<4; k++)
		if (k!=j && k!=i)
			for (int l=0; l<4; l++)
			if (l!=k && l!=j && l!=i)
			{	B[0] = A[i];
				B[1] = A[j];
				B[2] = A[k];
				B[3] = A[l];
				// check B[]
				unsigned M = A2n(B,4);
				if (M%K==0) 
					cout << "\n N=" << N << " k=" << K << " hoan vi=" << M;
				//return M;
			}
	return 0;
}


// hoan vi cac ky so N 

unsigned B[24]; // 24 = 4! phan tu, chua cac hoan vi so N co 4 ky so
int bi = 0;
void Permutation(int A[], int n, int i0)
{	// n la so phan tu cua A.
	// A[4] = [1][2][3][4]
	//
	// A[4] = [1] | [2][3][4] => A[3] = [2] | [3][4] => A[2] = [3] | [4]: 1 hoan vi 1234
	// 													A[2] = [4] | [3]: 1 hoan vi 1243
	//							 A[3] = [3] | [2][4] => .... :1 hoan vi 1324, va 1342
	//							 A[3] = [4] | [3][2]
	// A[4] = [2] | [1][3][4]
	// A[4] = [3] | [2][1][4]
	// A[4] = [4] | [2][3][1]
	
	if (i0 >= n-1)
	{	B[bi++] = A2n(A,n);
		return;
	}
	for (int i=i0;i<n;i++)
	{	// 1.doi cho A[i0] voi A[i] : N = 1234
		if (i!=i0) swap(A[i0], A[i]); // i0=0, i=3: 4231
		
		// 2. coi nhu A[i0] la 1 vi tri dung, hoan vi phan con lai cua A[] 
		Permutation(A,n,i0+1);

		// 3. tra lai vi tri ban dau cho 2 phan tu da swap()
		if (i!=i0) swap(A[i0], A[i]); // i0=0, i=2: 1234 = N
	}
}



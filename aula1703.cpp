void bubbberSort(int vetor[], int n)
{
	bool trocou;// 1 instru��o executada uma vez
	
	//loop enquanto while for verdadeiro
	do 
	{
		trocou = false;
		
		//2 instru��es + 2 instru��es + 3 instru��es = 7 instru��es
		for (int i=0; i < n -1; i++)//ser� executada n - 1 vezes ======(7x (n-1))
		{
			//2 instru��es + 3 instru��es + 1 compara��o = 6 instru��es ========= 6(n-1)
			if (vetor[i] > vetor[i + 1])
			{
				//2 intru��es + 3 instru��es + swap(9 instru��es) = 14 instru��es
				std::swap(vetor[i], vetor[i+1]); // (n-1)
				trocou = true;//(n-1)
			}
		}
	}while(trocou);//(n-1)
	
}

///complexidade 
// 1+ (n-1)(7(n-1)+6(n-1)+14(n-1))+(n-1) +(n-1) ==> (38(n-1)) ===> 2(n-1) + 38n^2+ 39 ===>> 38n^2+2n +37

//big OU === constante c que multiplicada pela fun��o que eu estou multiplicando 
//deve ser maior que a fun��o para a maioria dos casos 

// ===== n^2
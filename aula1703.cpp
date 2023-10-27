void bubbberSort(int vetor[], int n)
{
	bool trocou;// 1 instrução executada uma vez
	
	//loop enquanto while for verdadeiro
	do 
	{
		trocou = false;
		
		//2 instruções + 2 instruções + 3 instruções = 7 instruções
		for (int i=0; i < n -1; i++)//será executada n - 1 vezes ======(7x (n-1))
		{
			//2 instruções + 3 instruções + 1 comparação = 6 instruções ========= 6(n-1)
			if (vetor[i] > vetor[i + 1])
			{
				//2 intruções + 3 instruções + swap(9 instruções) = 14 instruções
				std::swap(vetor[i], vetor[i+1]); // (n-1)
				trocou = true;//(n-1)
			}
		}
	}while(trocou);//(n-1)
	
}

///complexidade 
// 1+ (n-1)(7(n-1)+6(n-1)+14(n-1))+(n-1) +(n-1) ==> (38(n-1)) ===> 2(n-1) + 38n^2+ 39 ===>> 38n^2+2n +37

//big OU === constante c que multiplicada pela função que eu estou multiplicando 
//deve ser maior que a função para a maioria dos casos 

// ===== n^2
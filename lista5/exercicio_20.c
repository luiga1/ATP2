/*Desenvolva uma funcao recursiva para encontrar a raiz quadrada de um numero inteiro utilizando o metodo de busca binaria.*/

int raizQuadradaBinaria(int n, int inicio, int fim);

int main(){

    int numero, resultado;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);
    resultado = raizQuadradaBinaria( numero, 0, numero);
    printf("A parte inteira da raiz quadrada de %d é %d\n", numero, resultado);


return 0;
}

int raizQuadradaBinaria(int n, int inicio, int fim) {
    if (inicio > fim)
        return fim; // fim é o maior inteiro tal que fim^2 <= n

    int meio = (inicio + fim) / 2;
    int quadrado = meio * meio;

    if (quadrado == n)
        return meio;
    else if (quadrado < n)
        return raizQuadradaBinaria(n, meio + 1, fim);
    else
        return raizQuadradaBinaria(n, inicio, meio - 1);
}

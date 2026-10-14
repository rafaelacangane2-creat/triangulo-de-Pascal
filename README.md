Este programa em C imprime o Triângulo de Pascal com até 15 linhas.
Ele pede ao usuário o número de linhas (de 1 a 15, definido pela constante MAX) 
e encerra com mensagem de erro se o valor for inválido.
Os valores são calculados e guardados em uma matriz pascal[MAX][MAX] com laços aninhados: 
as bordas de cada linha (primeiro e último elemento) recebem 1, e os demais elementos são 
a soma dos dois números da linha anterior, pascal[i-1][j-1] + pascal[i-1][j].
Na impressão, cada linha recebe espaços à esquerda para formar o formato triangular centralizado, 
e os números são exibidos com largura fixa de 4 caracteres (%4d) para manter o alinhamento.

Projeto feito por Rafaela das Neves Cangane.

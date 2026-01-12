# Jogo de Comparação de Cartas – Países (Linguagem C)

## Descrição do Projeto

Este projeto implementa um jogo em linguagem C no qual o usuário cadastra duas cartas de países e realiza a comparação entre elas com base em dois atributos numéricos escolhidos pelo jogador.

O sistema permite:
- Cadastro de dados dos países
- Escolha interativa de atributos
- Comparação individual de cada atributo
- Soma dos atributos escolhidos
- Determinação da carta vencedora ou empate

---

## Dados de Cada Carta

Para cada país, são coletadas as seguintes informações:

- Nome do país
- População
- Área territorial
- PIB
- Número de pontos turísticos

A partir desses dados, o sistema calcula automaticamente:
- Densidade demográfica
- PIB per capita

---

## Funcionamento do Jogo

### 1. Cadastro das Cartas
O usuário insere os dados da Carta 1 e da Carta 2 via terminal.

### 2. Escolha dos Atributos
O sistema apresenta dois menus sequenciais para que o jogador escolha dois atributos diferentes para comparação.

Opções disponíveis:
1. População  
2. Área  
3. PIB  
4. Número de pontos turísticos  
5. Densidade demográfica  

Caso o usuário escolha o mesmo atributo duas vezes, o programa exibe uma mensagem informando o erro e solicita que o processo seja reiniciado.

---

## Regras de Comparação

- Para a maioria dos atributos, vence a carta com o maior valor.
- Exceção:
  - Densidade demográfica → vence a carta com o menor valor.

Cada atributo escolhido é comparado individualmente e somado ao total da respectiva carta.

---

## Soma dos Atributos

Após a comparação dos dois atributos:
- O sistema soma os valores escolhidos para cada carta.
- A carta com a maior soma total vence a rodada.

### Tratamento de Empates
- Se as somas forem iguais, o sistema exibe a mensagem: "Empate!".

---

## Resultado Final

Ao final da execução, o programa exibe:
- O nome dos dois países
- Os atributos utilizados na comparação
- Os valores de cada atributo para cada carta
- A soma total dos atributos
- A carta vencedora ou a indicação de empate

---

## Tecnologias Utilizadas

- Linguagem C
- Estruturas de decisão (if, else, switch)
- Entrada e saída padrão (scanf, printf)
- Operações aritméticas

---

## Objetivo Educacional

Projeto desenvolvido como parte da fase mestre da disciplina, com foco em:
- Lógica de programação
- Estruturas condicionais
- Comparações múltiplas
- Orga


READNE escrito com a ajuda da IA.

Edineusa Fernandes 
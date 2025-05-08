# 🃏 Super Trunfo -

Este projeto é uma versão personalizada do clássico jogo **Super Trunfo**, feito em **C**, onde os jogadores comparam atributos de cidades brasileiras.

## 🔧 Funcionalidades

- Comparação entre **duas cartas de cidades**.
- Escolha de **dois atributos diferentes** para comparação.
- Regras específicas, como:
  - **Densidade Demográfica**: menor valor vence.
  - Demais atributos: maior valor vence.
- Cálculo da **soma dos dois atributos** para definir a carta vencedora.
- **Menus dinâmicos** com `switch` para escolha dos atributos.
- Uso de `if-else` e operador ternário para comparações.
- Tratamento de empates.

## 🏗️ Estrutura do Projeto

O jogo está estruturado da seguinte forma:

- Atributos das cartas:
  - População
  - Área
  - PIB
  - Densidade demográfica (calculada)
  - Pontos turísticos (pode ser expandido)
- Interface de console com mensagens claras.
- Códigos organizados, comentados e fáceis de entender.

## ▶️ Como Compilar e Executar

1. Compile o projeto:
   ```bash
   gcc supertrunfo.c -o supertrunfo

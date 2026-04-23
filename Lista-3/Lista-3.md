
# Lista avançada — implementação final em C com contexto e lógica guiada

---

## 1. Sistema de desbloqueio de celular

### Contexto

Um celular pode ser desbloqueado por biometria ou senha. Porém, quando o aparelho entra em **modo seguro**, ele fica mais restritivo e exige obrigatoriamente a senha.

### Explicação lógica

O aluno deve perceber que existem **dois cenários principais**:

* **modo seguro ligado**
* **modo seguro desligado**

No primeiro caso, a biometria deixa de importar.
No segundo caso, basta que **uma das duas formas de autenticação** esteja correta.

### Entradas

* `biometria` (`int`) → 1 correta, 0 incorreta
* `senha` (`int`) → 1 correta, 0 incorreta
* `modoSeguro` (`int`) → 1 ativo, 0 inativo

### Regras

* Se `modoSeguro == 1`, desbloqueia apenas se `senha == 1`
* Se `modoSeguro == 0`, desbloqueia se `biometria == 1` **ou** `senha == 1`
* Caso contrário, permanece bloqueado

### Saídas esperadas

* `DESBLOQUEADO`
* `BLOQUEADO`

### Código base

```c
#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    printf("Digite a biometria (1/0): ");
    scanf("%d", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);

    // implemente a lógica aqui

    return 0;
}
```

---

## 2. Controle de acesso a laboratório

### Contexto

Um laboratório universitário possui regras diferentes para **professores** e **alunos**. Professores podem entrar a qualquer hora. Alunos só entram no horário regular, salvo quando possuem autorização especial.

### Explicação lógica

O aluno deve primeiro identificar **quem está tentando entrar**.
Depois disso, no caso do aluno, precisa verificar **horário** e possivelmente **autorização**.

### Entradas

* `tipoUsuario` (`int`) → 1 aluno, 2 professor
* `horario` (`int`) → valor entre 0 e 23
* `autorizacao` (`int`) → 1 sim, 0 não

### Regras

* Se `tipoUsuario == 2`, entrada permitida
* Se `tipoUsuario == 1`:

  * entre 8 e 18 → entrada permitida
  * fora desse horário → só entra se `autorizacao == 1`
* Caso contrário, entrada negada

### Saídas esperadas

* `ENTRADA PERMITIDA`
* `ENTRADA NEGADA`

### Código base

```c
#include <stdio.h>

int main() {
    int tipoUsuario, horario, autorizacao;

    printf("Digite o tipo de usuario (1-aluno, 2-professor): ");
    scanf("%d", &tipoUsuario);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    printf("Digite a autorizacao especial (1/0): ");
    scanf("%d", &autorizacao);

    // implemente a lógica aqui

    return 0;
}
```

---

## 3. Sistema de entrega inteligente

### Contexto

Uma loja trabalha com regras diferentes para clientes premium e clientes comuns. Além disso, a chuva pode afetar a forma da entrega.

### Explicação lógica

Primeiro o aluno deve verificar se o cliente é premium.
Se for, existe uma regra especial.
Se não for, entra em outra lógica que combina **distância** e **chuva**.

### Entradas

* `distancia` (`float`)
* `premium` (`int`) → 1 sim, 0 não
* `chuva` (`int`) → 1 sim, 0 não

### Regras

* Se `premium == 1` e `distancia <= 20`, exibir `ENTREGA GRATUITA`
* Caso contrário:

  * se `distancia <= 10` **e** `chuva == 0`, exibir `ENTREGA NORMAL`
  * senão, exibir `ENTREGA COM TAXA`

### Saídas esperadas

* `ENTREGA GRATUITA`
* `ENTREGA NORMAL`
* `ENTREGA COM TAXA`

### Código base

```c
#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);

    // implemente a lógica aqui

    return 0;
}
```

---

## 4. Verificação de segurança de login bancário

### Contexto

Um sistema bancário não depende apenas de login correto. Ele também analisa se o dispositivo é conhecido e se a tentativa parece suspeita.

### Explicação lógica

A primeira verificação é sempre o login.
Somente se ele estiver correto faz sentido verificar o restante.
Dentro desse cenário, o sistema decide entre liberar ou pedir verificação extra.

### Entradas

* `loginOk` (`int`) → 1 sim, 0 não
* `dispositivoConhecido` (`int`) → 1 sim, 0 não
* `tentativaSuspeita` (`int`) → 1 sim, 0 não

### Regras

* Se `loginOk == 1`:

  * se `dispositivoConhecido == 1` **e** `tentativaSuspeita == 0` → `ACESSO LIBERADO`
  * senão → `VERIFICACAO EXTRA NECESSARIA`
* Caso contrário → `ACESSO NEGADO`

### Código base

```c
#include <stdio.h>

int main() {
    int loginOk, dispositivoConhecido, tentativaSuspeita;

    printf("Login correto? (1/0): ");
    scanf("%d", &loginOk);

    printf("Dispositivo conhecido? (1/0): ");
    scanf("%d", &dispositivoConhecido);

    printf("Tentativa suspeita? (1/0): ");
    scanf("%d", &tentativaSuspeita);

    // implemente a lógica aqui

    return 0;
}
```

---

## 5. Sistema de recomendação de filme

### Contexto

Uma plataforma de streaming quer recomendar filmes com base em idade, gênero preferido e se a pessoa está sozinha ou acompanhada.

### Explicação lógica

A idade é a primeira grande divisão da lógica.
Para menores de idade, o sistema bloqueia terror.
Para maiores de idade, o gênero e a companhia alteram a forma da recomendação.

### Entradas

* `idade` (`int`)
* `genero` (`int`) → 1 ação, 2 comédia, 3 terror
* `acompanhado` (`int`) → 1 sim, 0 não

### Regras

* Se `idade < 18` e `genero == 3`, exibir `TERROR NAO RECOMENDADO`
* Se `idade < 18` e `genero != 3`, exibir `RECOMENDAR NORMALMENTE`
* Se `idade >= 18`:

  * se `genero == 3` **e** `acompanhado == 0`, exibir `RECOMENDAR COM AVISO`
  * senão, exibir `RECOMENDAR NORMALMENTE`

### Código base

```c
#include <stdio.h>

int main() {
    int idade, genero, acompanhado;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o genero preferido (1-acao, 2-comedia, 3-terror): ");
    scanf("%d", &genero);

    printf("Esta acompanhado? (1/0): ");
    scanf("%d", &acompanhado);

    // implemente a lógica aqui

    return 0;
}
```

---

## 6. Validação de cupom de desconto

### Contexto

Uma loja virtual só aceita cupom se ele for válido, se o cliente ainda não tiver usado esse benefício e se a compra atingir um valor mínimo.

### Explicação lógica

O aluno deve perceber que a lógica tem **camadas**:

* primeiro: código válido?
* depois: cliente já usou?
* depois: valor mínimo foi atingido?

### Entradas

* `codigoValido` (`int`) → 1 sim, 0 não
* `valorCompra` (`float`)
* `jaUsouCupom` (`int`) → 1 sim, 0 não

### Regras

* Se `codigoValido == 1`:

  * se `jaUsouCupom == 0` **e** `valorCompra >= 100`, exibir `DESCONTO APLICADO`
  * senão, exibir `CUPOM INVALIDO PARA USO`
* Caso contrário, exibir `CUPOM INVALIDO`

### Código base

```c
#include <stdio.h>

int main() {
    int codigoValido, jaUsouCupom;
    float valorCompra;

    printf("Codigo valido? (1/0): ");
    scanf("%d", &codigoValido);

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Ja usou cupom? (1/0): ");
    scanf("%d", &jaUsouCupom);

    // implemente a lógica aqui

    return 0;
}
```

---

## 7. Sistema de energia residencial inteligente

### Contexto

Um sistema doméstico monitora o consumo e gera alertas diferentes dependendo se é horário de pico e se a casa possui energia solar.

### Explicação lógica

O aluno deve separar primeiro:

* horário de pico
* fora do horário de pico

Depois disso, analisar o consumo e a presença de energia solar.

### Entradas

* `consumo` (`float`)
* `horarioPico` (`int`) → 1 sim, 0 não
* `energiaSolar` (`int`) → 1 sim, 0 não

### Regras

* Se `horarioPico == 1`:

  * se `consumo > 300` **e** `energiaSolar == 0`, exibir `ALERTA DE ALTO CONSUMO`
  * senão, exibir `CONSUMO CONTROLADO`
* Se `horarioPico == 0`:

  * se `consumo > 500`, exibir `ALERTA DE CONSUMO`
  * senão, exibir `CONSUMO NORMAL`

### Código base

```c
#include <stdio.h>

int main() {
    float consumo;
    int horarioPico, energiaSolar;

    printf("Digite o consumo atual: ");
    scanf("%f", &consumo);

    printf("Horario de pico? (1/0): ");
    scanf("%d", &horarioPico);

    printf("Possui energia solar? (1/0): ");
    scanf("%d", &energiaSolar);

    // implemente a lógica aqui

    return 0;
}
```

---

## 8. Classificação de atendimento em restaurante

### Contexto

Um restaurante precisa decidir rapidamente qual será o tipo de atendimento com base em reserva, tamanho do grupo e horário.

### Explicação lógica

A reserva tem prioridade máxima.
Sem reserva, o aluno precisa avaliar se o horário é de pico.
Se for pico, o tamanho do grupo define o tempo de espera.

### Entradas

* `pessoas` (`int`)
* `reserva` (`int`) → 1 sim, 0 não
* `horario` (`int`)

### Regras

* Se `reserva == 1`, exibir `ATENDIMENTO IMEDIATO`
* Caso contrário:

  * se `(horario >= 12 && horario <= 14) || (horario >= 19 && horario <= 21)`:

    * se `pessoas <= 4`, exibir `ESPERA CURTA`
    * senão, exibir `ESPERA LONGA`
  * fora desses horários, exibir `ATENDIMENTO IMEDIATO`

### Código base

```c
#include <stdio.h>

int main() {
    int pessoas, reserva, horario;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    printf("Tem reserva? (1/0): ");
    scanf("%d", &reserva);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    // implemente a lógica aqui

    return 0;
}
```

---

## 9. Sistema de aprovação de corrida

### Contexto

Um aplicativo de mobilidade aceita ou recusa corridas com base na disponibilidade do motorista e na atratividade da corrida.

### Explicação lógica

Primeiro precisa existir motorista disponível.
Só depois disso faz sentido verificar se a corrida vale a pena, usando distância **ou** valor estimado.

### Entradas

* `distancia` (`float`)
* `valor` (`float`)
* `motoristaDisponivel` (`int`) → 1 sim, 0 não

### Regras

* Se `motoristaDisponivel == 1`:

  * se `distancia <= 10` **ou** `valor >= 30`, exibir `CORRIDA ACEITA`
  * senão, exibir `CORRIDA RECUSADA POR BAIXA RENTABILIDADE`
* Caso contrário, exibir `SEM MOTORISTAS DISPONIVEIS`

### Código base

```c
#include <stdio.h>

int main() {
    float distancia, valor;
    int motoristaDisponivel;

    printf("Digite a distancia da corrida: ");
    scanf("%f", &distancia);

    printf("Digite o valor estimado: ");
    scanf("%f", &valor);

    printf("Motorista disponivel? (1/0): ");
    scanf("%d", &motoristaDisponivel);

    // implemente a lógica aqui

    return 0;
}
```

---

## 10. Sistema de alerta de servidor

### Contexto

Uma central de monitoramento precisa classificar o estado de um servidor com base no uso de CPU, uso de memória e existência de erro crítico.

### Explicação lógica

Erro crítico tem prioridade absoluta.
Se não houver erro crítico, a classificação depende da combinação entre CPU e memória.

### Entradas

* `cpu` (`float`)
* `memoria` (`float`)
* `erroCritico` (`int`) → 1 sim, 0 não

### Regras

* Se `erroCritico == 1`, exibir `ALERTA MAXIMO`
* Caso contrário:

  * se `cpu > 80` **e** `memoria > 80`, exibir `ALERTA ALTO`
  * senão se `cpu > 80` **ou** `memoria > 80`, exibir `ALERTA MEDIO`
  * senão, exibir `FUNCIONAMENTO NORMAL`

### Código base

```c
#include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);

    // implemente a lógica aqui

    return 0;
}
```

# Projeto1

Você foi contratado para desenvolver um sistema de automação para ambientes que consiste em gerenciar diferentes tipos de sensores e atuadores. O sistema precisa ser capaz de atualizar os sensores e atuadores com base em suas funcionalidades específicas.

# Objetivo
Implemente um sistema orientado a objetos que modela a estrutura de classes descrita no diagrama em anexo. O sistema deve representar a relação entre salas, sensores e atuadores, e permitir a interação entre esses componentes.

# Requisitos
1. Classes e Herança:
- Implemente a classe Sala com métodos para atualizar sensores e atuadores.
- Implemente a classe Componente com propriedades e métodos para controlar o estado dos componentes.
- Implemente a classe Sensor e suas subclasses (Temperatura, Luminosidade, e Umidade), com métodos específicos para cada tipo de sensor. Os valores lidos pelos sensores devem ser gerados de forma aleatória dentro de um intervalo consistente com o tipo de sensor.
- Implemente a classe Atuador e suas subclasses (Ventilador, Umidificador, Desumidificador, e Lampada), com métodos específicos para cada tipo de atuador.
2. Relacionamentos:
- A classe Sala deve manter uma composição com uma lista de Sensor e Atuador.
- As classes Temperatura, Luminosidade, e Umidade devem herdar de Sensor.
- As classes Ventilador, Umidificador, Desumidificador, e Lampada devem herdar de Atuador.
3. Funcionalidade:
- O método atualizarSensores da classe Sala deve iterar sobre os sensores e realizar as atualizações necessárias.
- O método atualizarAtuadores da classe Sala deve iterar sobre os atuadores e realizar as atualizações necessárias.
4. Função main:
- Instancie um conjunto de salas (no mínimo 3), faça a configuração dos sensores e atuadores de uma forma que cada sala tenha uma configuração um pouco diferente. Crie um laço de repetição que execute 1440 vezes fazendo a atualização das leituras dos sensores e ativação dos atuadores, conforme a lógica que você implementou para cada sala.
- Dentro da função main, gere saídas de texto exibindo os valores lidos dos sensores e enviados aos atuadores de forma a facilitar o que está acontecendo na aplicação e também de encontrar possíveis problemas na execução do código.

# Entregáveis
- Código fonte das classes implementadas.
- Vídeo mostrando a execução do projeto.

# BCC3004

Princípio da Responsabilidade Única: Este princípio afirma que uma classe deve ter apenas uma razão para mudar. No exemplo correto, a classe Employee é responsável apenas por manter e exibir os detalhes do empregado, enquanto a classe EmployeeDatabase é responsável por salvar os detalhes do empregado no banco de dados. Cada classe tem apenas uma responsabilidade, cumprindo assim o Princípio da Responsabilidade Única.

Princípio da Segregação de Interface: Este princípio afirma que nenhuma classe deve ser forçada a implementar interfaces que não usa. No exemplo correto, criamos duas interfaces, IWorker e IEater. A classe HumanWorker implementa ambas as interfaces, enquanto a classe RobotWorker implementa apenas a interface IWorker. Isso está de acordo com o Princípio da Segregação de Interface, pois nenhuma classe é forçada a implementar interfaces que não usa.

Princípio da Inversão de Dependência: Este princípio afirma que as classes de alto nível não devem depender de classes de baixo nível. Ambas devem depender de abstrações. No exemplo correto, a classe Application de alto nível depende da interface IDatabase, e a classe MySQLDatabase de baixo nível implementa essa interface. Isso significa que a classe Application não depende diretamente da classe MySQLDatabase, o que está de acordo com o Princípio da Inversão de Dependência.

Lei de Demeter (Princípio do Menor Conhecimento): Este princípio afirma que um objeto deve minimizar o conhecimento que tem de outros objetos para reduzir as dependências entre eles. No exemplo correto, a classe Aplicacao chama o método startMotor do Carro, que por sua vez chama o método start do Motor. Isso está de acordo com a Lei de Demeter, pois a classe Aplicacao não precisa conhecer a estrutura interna do Carro.

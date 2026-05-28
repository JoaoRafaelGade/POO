## Nome: João Rafael Gadelha de Araújo
## Matricula: 20250019213

## Descrição: Sistema de gerenciamento de manutenção com foco em tecnicos de informática, que permite cadastrar clientes, computadores, diagnósticos/orçamentos e funcionários responsáveis pelo atendimento técnico, ajudando na rotina e necessidade do empresário. 


## Diagrama UML:

```mermaid
classDiagram

class Client {
    -string name_
    -string phone_
    -vector~Computer*~ computers_
    +Client(name, phone)

    +add_computer(computer) void
    +show_info() void
    +get_name() string
    +get_phone() string
}

class Computer {
    -string brand_
    -string model_
    +Computer(brand, model)

    +show_computer_info() void
    +power_on() void
    +get_brand() string
    +get_model() string
}

class Employee {
    -string name_
    -string role_
    +Employee(name, role)

    +show_employee_info() void
    +get_name() string
    +get_role() string
}

class Diagnosis {
    -string problem_
    -double repair_cost_
    -bool approved_
    -Computer computer_
    -Employee* employee_
    +Diagnosis(problem, repair_cost, computer, employee)

    +approve_budget() void
    +show_diagnosis() void
    +get_problem() string
    +get_repair_cost() double
    +is_approved() bool
}

Client o-- Computer : aggregation
Diagnosis *-- Computer : composition
Diagnosis o-- Employee : aggregation
```

## Relações entre classes

### Composição
A classe `Diagnosis` possui uma relação de composição com `Computer`, pois o diagnóstico é criado especificamente para um computador e depende dele para existir.

### Agregação
A classe `Diagnosis` possui uma relação de agregação com `Employee`, pois o funcionário responsável existe independentemente do diagnóstico.

A classe `Client` possui uma relação de agregação com `Computer`, pois o cliente apenas referencia computadores que existem independentemente dele.
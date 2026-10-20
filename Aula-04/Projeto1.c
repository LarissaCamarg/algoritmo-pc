#include <stdio.h>
#include <math.h>

int main(void)
{
    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    // Entrada de dados
    printf("Quantidade total de participantes: ");
    scanf("%d", &qte_participantes);

    printf("Quantidade de jogadores em cada time: ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Quantidade de computadores disponiveis: ");
    scanf("%d", &qte_computadores);

    printf("Potencia media de cada computador, em watts: ");
    scanf("%f", &potencia);

    printf("Duracao do evento, em horas: ");
    scanf("%f", &duracao);

    printf("Preco de 1 kWh de energia: ");
    scanf("%f", &preco_kwh);

    printf("Preco de um kit de alimentacao por participante: ");
    scanf("%f", &preco_kit);

    printf("Outros custos do evento: ");
    scanf("%f", &outros_custos);

    printf("Orcamento maximo disponivel para o evento: ");
    scanf("%f", &orcamento);

    // Calculos
    qte_times = (int)ceil((double)qte_participantes / qte_jogadores_por_time);

    consumo_energia = (qte_computadores * potencia * duracao) / 1000.0;

    custo_energia = consumo_energia * preco_kwh;

    custo_alimentacao = qte_participantes * preco_kit;

    custo_total = custo_energia + custo_alimentacao + outros_custos;

    custo_por_participante = custo_total / qte_participantes;

    saldo = orcamento - custo_total;

    // Variaveis auxiliares de infraestrutura
    int infra_suficiente = (qte_computadores >= qte_participantes);
    computadores_faltantes = qte_participantes - qte_computadores;

    // Relatorio final
    printf("\n============== ARENA TECH ==============\n\n");
    printf("Participantes: %d\n\n", qte_participantes);
    printf("Times necessarios: %d\n\n", qte_times);
    printf("Computadores disponiveis: %d\n\n", qte_computadores);

    // Infraestrutura
    if (infra_suficiente) {
        printf("Infraestrutura: SUFICIENTE\n\n");
    } else {
        printf("Infraestrutura: INSUFICIENTE (Faltam %d computadores)\n\n", computadores_faltantes);
    }

    // Consumo de energia
    printf("Consumo estimado: %.2f kWh\n\n", consumo_energia);

    int consumo_alto = 0;
    printf("Classificacao do consumo: ");
    if (consumo_energia <= 20.0) {
        printf("BAIXO\n\n");
    } else if (consumo_energia <= 40.0) {
        printf("MODERADO\n\n");
    } else {
        printf("ALTO\n\n");
        consumo_alto = 1;
    }

    // Custos e Saldo
    printf("Custo da energia: R$ %.2f\n\n", custo_energia);
    printf("Custo da alimentacao: R$ %.2f\n\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n\n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f\n\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n\n", custo_por_participante);
    printf("Orcamento disponivel: R$ %.2f\n\n", orcamento);
    printf("Saldo: R$ %.2f\n\n", saldo);

    // Analise do Orcamento
    float margem_seguranca = 0.05 * orcamento;
    printf("Situacao do orcamento: ");
    if (custo_total > orcamento) {
        printf("ACIMA DO ORCAMENTO\n\n");
    } else if (saldo <= margem_seguranca) {
        printf("NO LIMITE DO ORCAMENTO\n\n");
    } else {
        printf("DENTRO DO ORCAMENTO\n\n");
    }

    // Decisao Final e Motivo
    printf("DECISAO FINAL: ");
    if (!infra_suficiente || custo_total > orcamento) {
        printf("NAO RECOMENDADO\n\n");
        printf("Motivo: ");
        if (!infra_suficiente && custo_total > orcamento) {
            printf("infraestrutura insuficiente e custo total acima do orcamento.\n\n");
        } else if (!infra_suficiente) {
            printf("infraestrutura insuficiente.\n\n");
        } else {
            printf("custo total acima do orcamento disponivel.\n\n");
        }
    } else if (consumo_alto) {
        printf("APROVADO COM RESSALVAS\n\n");
        printf("Motivo: consumo elevado de energia.\n\n");
    } else {
        printf("APROVADO\n\n");
        printf("Motivo: infraestrutura suficiente e custos dentro do orcamento.\n\n");
    }

    printf("=========================================\n");

    return 0;
}

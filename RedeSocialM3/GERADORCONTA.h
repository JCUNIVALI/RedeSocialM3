#ifndef GERADORCONTA_H
#define GERADORCONTA_H
#include <string>
using namespace std;
template <typename T>
void GERADOR_DE_CONTA(T *lista) {
	lista->InserirPost(new ElementoListaPost(new Post("Corta pra mim! Poe na tela minha filha! Deu trabalho pra faze!", "@Marcelo_Rezende"))); 
	lista->InserirPost(new ElementoListaPost(new Post("Ha certas horas, em que nao precisamos de um amor, nao precisamos da paixao desmedida, nao queremos beijo na boca e nem corpos a se encontrar na maciez de uma cama. Ha certas horas, que so queremos a mao no ombro, o abraco apertado ou mesmo o estar ali...", "@William_Shakespeare")));
	lista->InserirPost(new ElementoListaPost(new Post("A batata e uma planta perene da familia das solanaceas. A planta adulta geralmente tem entre sessenta a cem centimetros de altura, possui flores e frutos e produz um tuberculo comestivel rico em amido, um carboidrato", "@Wikipedia")));
	lista->InserirPost(new ElementoListaPost(new Post("Paes e o prefeito mais feliz do mundo, que dirige a cidade mais importante do mundo e da galaxia. Por que da galaxia? Porque a galaxia e o Rio de Janeiro. A via Lactea e fichinha perto da galaxia que o nosso querido Eduardo Paes tem a honra de ser prefeito.", "@Dilma_Rousseff")));
	lista->InserirPost(new ElementoListaPost(new Post("So nao vou te estupra por que voce nao merece..", "@Bolsonaro2018")));
	lista->InserirPost(new ElementoListaPost(new Post("E lugar de bandido, senhora presidente? Onde e? Livre, nas ruas para barbarizar o cidadao de bem impunemente?", "@Rachel_Sheherazade")));
	lista->InserirPost(new ElementoListaPost(new Post("Lugar de bandido e saudando a mandioca, o que me lembra que por traz de uma crianca sempre tem um cachorro.", "@Dilma_Rousseff")));
	lista->InserirPost(new ElementoListaPost(new Post("Sentiu esse cheiro?", "@Aecio_Neves")));
	lista->InserirPost(new ElementoListaPost(new Post("Eu nao sou mulher de aturar sermao, me encara, se prepara, que eu vou jogar bem na sua cara", "@Pabllo_Vittar")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Marcelo_Rezende"," ", "Marcelo Rezende", " ", "Masculino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@William_Shakespeare", " ", "William Shakespeare", " ", "Masculino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Wikipedia", " ", "Wikipedia", " ", "Outro")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Dilma_Rousseff", " ", "Dilma Rousseff", " ", "Feminino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Bolsonaro2018", " ", "Jair Bolsonaro", " ", "Masculino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Rachel_Sheherazade", " ", "Rachel Sheherazade", " ", "Feminino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Aecio_Neves", " ", "Aecio Neves", " ", "Masculino")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Pabllo_Vittar", " ", "Pabllo Vittar", " ", "Outros")));
	lista->InserirUsuario(new ElementoListaUsuario(new Usuario("@Prof_Andre", "123", "Andre M Santana", " ", "Masculino")));
}

#endif

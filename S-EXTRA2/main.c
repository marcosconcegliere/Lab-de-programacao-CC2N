#include <stdio.h>
#include <string.h>
#define TAMANHO 3000
int main(void) {
  char texto[TAMANHO] = {"50 Anos da Universidade Vila Velha - UVV: Uma Trajet�ria de Excel�ncia e Inova��o\n\n\tA UVV completa 50 anos de hist�ria, consolidando-se como uma das institui��es de ensino superior mais respeitadas do Esp�rito Santo e do Brasil.\nDesde sua funda��o, a UVV tem sido s�mbolo de transforma��o, inova��o e compromisso com o conhecimento. \nO nascimento da UVV marcou um novo tempo para a educa��o capixaba, oferecendo oportunidades de forma��o de qualidade e contribuindo para o desenvolvimento regional.\n\n\tNos primeiros anos, a UVV enfrentou desafios comuns a qualquer institui��o nascente, mas sua vis�o ousada e seu corpo docente comprometido fizeram da UVV um polo de refer�ncia em ensino, pesquisa e extens�o.\nA UVV cresceu, expandiu cursos, criou laborat�rios modernos e consolidou parcerias nacionais e internacionais.\nA cada d�cada, a UVV reafirmou seu prop�sito de formar cidad�os cr�ticos e profissionais �ticos.\nHoje, a UVV � reconhecida por sua infraestrutura exemplar e por programas inovadores que unem teoria e pr�tica.\nA UVV tamb�m se destaca por incentivar a inicia��o cient�fica e por valorizar o impacto social de seus projetos.\n\n\tEm meio s�culo, a UVV tornou-se um espa�o de transforma��o de vidas, inova��o tecnol�gica e responsabilidade social.\nAs comemora��es dos 50 anos da UVV refletem o orgulho de toda a comunidade acad�mica.\nA UVV celebra sua trajet�ria com eventos culturais, cient�ficos e institucionais que resgatam sua mem�ria e projetam seu futuro. Cada conquista da UVV � fruto da dedica��o de seus professores, alunos e colaboradores.\nA UVV olha para o passado com gratid�o e para o futuro com esperan�a.\n\tA UVV � hoje sin�nimo de qualidade, inova��o e pertencimento.\nAo longo de cinco d�cadas, a UVV construiu um legado de credibilidade e excel�ncia.\nOs 50 anos da UVV representam o reconhecimento de uma hist�ria que inspirou gera��es e continuar� a inspirar muitas outras.\nCom orgulho e emo��o, a UVV reafirma seu compromisso de continuar crescendo, evoluindo e transformando o conhecimento em futuro.\n\n\tParab�ns, UVV, pelos 50 anos de conquistas e pela dedica��o em formar um mundo melhor."};
  printf("\n\n\t%s (Tamanho: %u caracteres)\n", texto, (unsigned) strlen(texto));
  int i, contUVV = 0;
  for(i = 0; i < strlen(texto) - 3; i++){
    if(texto[i] == 'U' && texto[i + 1] == 'V' && texto[i + 2] == 'V') contUVV++;
  }
  printf("Contador UVV: %i\n", contUVV);
  return 0;
}

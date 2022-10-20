#include "Pessoa.h"
#include "Aluno.h"
#include "Professor.h"

main()
{
	Professor professor(6666, "Doutor", "joniscleyde", "(24) 96666-6666");
	Aluno aluno(12345, 8.5, "maria", "(24) 99999-9999");
	
	professor.mostraProfessor();
	aluno.mostraAluno();
}

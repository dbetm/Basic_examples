Sacar un archivo del área de preparación, ya que no nos interesa que se le haga track todavía. Cuanto éste todava no ha sido trackeado o se ha modificado.

`$ git reset HEAD file.extension`

Para mantener un fork sincronizado con el proyecto original:

`$ git remote add upstream <original_repo_url>`

  > Actualizar (2 pasos):
  1. `$ git pull upstream master`
  2. `$ git push origin master`

Generar una rama de seguimiento remota (tiene relación directa con la rama local):
`$ git push -u origin mi-rama`

De la anterior, si se olvida poner `-u`
`$ git branch --set-upstream-to=origin/mi-rama mi-rama`

Si creamos una rama de seguimiento en GitHub, para traerla localmente hacemos:
`$ git fetch origin`
`$ git checkout mi-nueva-rama`

>> Stashing << Herramienta de Git que permite almacenar temporalmente los cambios al workspace sin necesidad de hacer commit.
`$ git add .`
`$ git stash`
-- Nos movemos a la rama donde vayamos a hacer algún cambio, ya que terminemos... 
`$ git checkout rama-donde-estaba`
`$ git stash list`  Listar cambios temporales en stack
`$ git pop`  Nos regresa el estado actual de nuestro espacio de trabajo

>> Advice: Nunca reescribas la historia sobre ramas que hayas publicado al remoto y sobre las que otros ya puedan estar trabajando.
>> Rebase << Se utiliza para actualizar una rama con respecto a la principal u otra (similar a un merge). También permite reescribir la historia de commits...
`$ git rebase -i HEAD~3` Abre el editor, donde podremos editar los mensajes de los commits.
`$ git rebase --abort` Abortar un proceso de rebase con errores.

>> Reflog << Mantiene un registro de todos los cambios sobre las ramas y el HEAD.
Listar historia: `$ git reflog`
Moverse al antepenúltimo commit/cambio hecho: `$ git checkout HEAD@{3}`

### Flujo de trabajo (trabajo en equipo centralizado)
![workflow](https://github.com/dbetm/basic-examples/blob/master/workflow_git_github.png)
Si hay que solucionar un conflicto, agregamos el archivo o archivos afectados, y ponemos el comando:
`$ git rebase --continue`






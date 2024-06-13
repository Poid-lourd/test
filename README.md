Single execution:

cd / exit / unset : 

Will execute whatsoever, with redir or not


export / echo / env / pwd : for now is executing in execve

Echo might be kinda different, and can actually go through an execve, though all the others are just print	
Same here seems


Multi execution:

cd / exit / unset : 

Will “absorb” the input from previous cmd and not execute, and if cmds continues in the pipeline, will keep on executing.

export :

Will never execute, whether at front, back or in the middle of a cmd line.

echo / env / pwd :

Will execute normally just like an “external cmd” ie. ls, since they don’t take any param and will output from env or void.

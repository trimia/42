echo "---------- CHECK AND COMPILE"

echo "---------- NORMINETTE"

norminette -R CheckForbiddenSourceHeader | cat

echo "---------- GCC"

gcc -Wall -Wextra -Werror */*.c | cat
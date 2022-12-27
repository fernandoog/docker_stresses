#include <sys/syscall.h>
#include <unistd.h>

const char message[] =
	"X";

int main() {
	while(1){
	syscall(SYS_write, STDOUT_FILENO, message, sizeof(message) - 1);
	}
	return 0;
}

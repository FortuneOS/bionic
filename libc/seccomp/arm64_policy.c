// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_policy.h"
const struct sock_filter arm64_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5, 0, 35),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 140, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 101, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 32, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 18, 29, 30), //setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|getcwd
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 30, 28, 29), //eventfd2|epoll_create1|epoll_ctl|epoll_pwait|dup|dup3|fcntl|inotify_init1|inotify_add_watch|inotify_rm_watch|ioctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 27, 28), //flock|mknodat|mkdirat|unlinkat|symlinkat|linkat|renameat|umount2|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 59, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 25, 26), //statfs|fstatfs|truncate|ftruncate|fallocate|faccessat|chdir|fchdir|chroot|fchmod|fchmodat|fchownat|fchown|openat|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 24, 25), //pipe2|quotactl|getdents64|lseek|read|write|readv|writev|pread64|pwrite64|preadv|pwritev|sendfile|pselect6|ppoll|signalfd4|vmsplice|splice|tee|readlinkat|newfstatat|fstat|sync|fsync|fdatasync|sync_file_range|timerfd_create|timerfd_settime|timerfd_gettime|utimensat|acct|capget|capset|personality|exit|exit_group|waitid|set_tid_address|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 129, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 105, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 21, 22), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 128, 20, 21), //init_module|delete_module|timer_create|timer_gettime|timer_getoverrun|timer_settime|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|syslog|ptrace|sched_setparam|sched_setscheduler|sched_getscheduler|sched_getparam|sched_setaffinity|sched_getaffinity|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 130, 18, 19), //kill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 139, 17, 18), //tgkill|sigaltstack|rt_sigsuspend|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 242, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 179, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 178, 12, 13), //setpriority|getpriority|reboot|setregid|setgid|setreuid|setuid|setresuid|getresuid|setresgid|getresgid|setfsuid|setfsgid|times|setpgid|getpgid|getsid|setsid|getgroups|setgroups|uname|sethostname|setdomainname|getrlimit|setrlimit|getrusage|umask|prctl|getcpu|gettimeofday|settimeofday|adjtimex|getpid|getppid|getuid|geteuid|getgid|getegid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 180, 11, 12), //sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 202, 10, 11), //socket|socketpair|bind|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 221, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 8, 9), //connect|getsockname|getpeername|sendto|recvfrom|setsockopt|getsockopt|shutdown|sendmsg|recvmsg|readahead|brk|munmap|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 234, 7, 8), //execve|mmap|fadvise64|swapon|swapoff|mprotect|msync|mlock|munlock|mlockall|munlockall|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 266, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 260, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 244, 4, 5), //accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 3, 4), //wait4|prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 268, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 267, 1, 2), //clock_adjtime
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 272, 0, 1), //setns|sendmmsg|process_vm_readv|process_vm_writev
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_TRAP),
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm64_filter_size = sizeof(arm64_filter) / sizeof(struct sock_filter);

# tracer 

A test program using ptrace syscall on x86\_64 architecture to implement a debugger which will breakpoint on a function and print the registers value in the user\_regs\_struct structure. 

```
parallels@ubuntu:~/tracer$ ./tracer ./test print_string 
hmem[0] 7f
hmem[1] ELFBegin analysis of pid: 24829 at 40052d
hit breakpoint at 0x40052d
%rcx: 0
%rdx: 7ffffdb8f0d8
%rbx: 0
%rax: 400547
%rdi: 4005f4
%rsi: 7ffffdb8f0c8
%r8: 7f554034fe80
%r9: 7f5540365560
%r10: 7ffffdb8ee70
%r11: 7f553ffb0dd0
%r12 400440
%r13 7ffffdb8f0c0
%r14: 0
%r15: 0
%rsp: 7ffffdb8efb8
Please hit any key to continue: 
Hello 1
hit breakpoint at 0x40052d
%rcx: ffffffffffffffff
%rdx: 7f55403509e0
%rbx: 0
%rax: 8
%rdi: 4005fc
%rsi: 7f5540574000
%r8: ffffffff
%r9: 0
%r10: 22
%r11: 246
%r12 400440
%r13 7ffffdb8f0c0
%r14: 0
%r15: 0
%rsp: 7ffffdb8efb8
Please hit any key to continue: 
Hello 2
finished tracing
```

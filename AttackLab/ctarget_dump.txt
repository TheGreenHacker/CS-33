
ctarget:     file format elf64-x86-64


Disassembly of section .init:

0000000000400bc8 <_init>:
  400bc8:	48 83 ec 08          	sub    $0x8,%rsp
  400bcc:	48 8b 05 25 34 20 00 	mov    0x203425(%rip),%rax        # 603ff8 <_DYNAMIC+0x1d0>
  400bd3:	48 85 c0             	test   %rax,%rax
  400bd6:	74 05                	je     400bdd <_init+0x15>
  400bd8:	e8 33 01 00 00       	callq  400d10 <__gmon_start__@plt>
  400bdd:	48 83 c4 08          	add    $0x8,%rsp
  400be1:	c3                   	retq   

Disassembly of section .plt:

0000000000400bf0 <strcasecmp@plt-0x10>:
  400bf0:	ff 35 12 34 20 00    	pushq  0x203412(%rip)        # 604008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400bf6:	ff 25 14 34 20 00    	jmpq   *0x203414(%rip)        # 604010 <_GLOBAL_OFFSET_TABLE_+0x10>
  400bfc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400c00 <strcasecmp@plt>:
  400c00:	ff 25 12 34 20 00    	jmpq   *0x203412(%rip)        # 604018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400c06:	68 00 00 00 00       	pushq  $0x0
  400c0b:	e9 e0 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c10 <__errno_location@plt>:
  400c10:	ff 25 0a 34 20 00    	jmpq   *0x20340a(%rip)        # 604020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400c16:	68 01 00 00 00       	pushq  $0x1
  400c1b:	e9 d0 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c20 <srandom@plt>:
  400c20:	ff 25 02 34 20 00    	jmpq   *0x203402(%rip)        # 604028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400c26:	68 02 00 00 00       	pushq  $0x2
  400c2b:	e9 c0 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c30 <strncmp@plt>:
  400c30:	ff 25 fa 33 20 00    	jmpq   *0x2033fa(%rip)        # 604030 <_GLOBAL_OFFSET_TABLE_+0x30>
  400c36:	68 03 00 00 00       	pushq  $0x3
  400c3b:	e9 b0 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c40 <strcpy@plt>:
  400c40:	ff 25 f2 33 20 00    	jmpq   *0x2033f2(%rip)        # 604038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400c46:	68 04 00 00 00       	pushq  $0x4
  400c4b:	e9 a0 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c50 <puts@plt>:
  400c50:	ff 25 ea 33 20 00    	jmpq   *0x2033ea(%rip)        # 604040 <_GLOBAL_OFFSET_TABLE_+0x40>
  400c56:	68 05 00 00 00       	pushq  $0x5
  400c5b:	e9 90 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c60 <write@plt>:
  400c60:	ff 25 e2 33 20 00    	jmpq   *0x2033e2(%rip)        # 604048 <_GLOBAL_OFFSET_TABLE_+0x48>
  400c66:	68 06 00 00 00       	pushq  $0x6
  400c6b:	e9 80 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c70 <mmap@plt>:
  400c70:	ff 25 da 33 20 00    	jmpq   *0x2033da(%rip)        # 604050 <_GLOBAL_OFFSET_TABLE_+0x50>
  400c76:	68 07 00 00 00       	pushq  $0x7
  400c7b:	e9 70 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c80 <printf@plt>:
  400c80:	ff 25 d2 33 20 00    	jmpq   *0x2033d2(%rip)        # 604058 <_GLOBAL_OFFSET_TABLE_+0x58>
  400c86:	68 08 00 00 00       	pushq  $0x8
  400c8b:	e9 60 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400c90 <memset@plt>:
  400c90:	ff 25 ca 33 20 00    	jmpq   *0x2033ca(%rip)        # 604060 <_GLOBAL_OFFSET_TABLE_+0x60>
  400c96:	68 09 00 00 00       	pushq  $0x9
  400c9b:	e9 50 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400ca0 <alarm@plt>:
  400ca0:	ff 25 c2 33 20 00    	jmpq   *0x2033c2(%rip)        # 604068 <_GLOBAL_OFFSET_TABLE_+0x68>
  400ca6:	68 0a 00 00 00       	pushq  $0xa
  400cab:	e9 40 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400cb0 <close@plt>:
  400cb0:	ff 25 ba 33 20 00    	jmpq   *0x2033ba(%rip)        # 604070 <_GLOBAL_OFFSET_TABLE_+0x70>
  400cb6:	68 0b 00 00 00       	pushq  $0xb
  400cbb:	e9 30 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400cc0 <read@plt>:
  400cc0:	ff 25 b2 33 20 00    	jmpq   *0x2033b2(%rip)        # 604078 <_GLOBAL_OFFSET_TABLE_+0x78>
  400cc6:	68 0c 00 00 00       	pushq  $0xc
  400ccb:	e9 20 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400cd0 <__libc_start_main@plt>:
  400cd0:	ff 25 aa 33 20 00    	jmpq   *0x2033aa(%rip)        # 604080 <_GLOBAL_OFFSET_TABLE_+0x80>
  400cd6:	68 0d 00 00 00       	pushq  $0xd
  400cdb:	e9 10 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400ce0 <signal@plt>:
  400ce0:	ff 25 a2 33 20 00    	jmpq   *0x2033a2(%rip)        # 604088 <_GLOBAL_OFFSET_TABLE_+0x88>
  400ce6:	68 0e 00 00 00       	pushq  $0xe
  400ceb:	e9 00 ff ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400cf0 <gethostbyname@plt>:
  400cf0:	ff 25 9a 33 20 00    	jmpq   *0x20339a(%rip)        # 604090 <_GLOBAL_OFFSET_TABLE_+0x90>
  400cf6:	68 0f 00 00 00       	pushq  $0xf
  400cfb:	e9 f0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d00 <fprintf@plt>:
  400d00:	ff 25 92 33 20 00    	jmpq   *0x203392(%rip)        # 604098 <_GLOBAL_OFFSET_TABLE_+0x98>
  400d06:	68 10 00 00 00       	pushq  $0x10
  400d0b:	e9 e0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d10 <__gmon_start__@plt>:
  400d10:	ff 25 8a 33 20 00    	jmpq   *0x20338a(%rip)        # 6040a0 <_GLOBAL_OFFSET_TABLE_+0xa0>
  400d16:	68 11 00 00 00       	pushq  $0x11
  400d1b:	e9 d0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d20 <strtol@plt>:
  400d20:	ff 25 82 33 20 00    	jmpq   *0x203382(%rip)        # 6040a8 <_GLOBAL_OFFSET_TABLE_+0xa8>
  400d26:	68 12 00 00 00       	pushq  $0x12
  400d2b:	e9 c0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d30 <memcpy@plt>:
  400d30:	ff 25 7a 33 20 00    	jmpq   *0x20337a(%rip)        # 6040b0 <_GLOBAL_OFFSET_TABLE_+0xb0>
  400d36:	68 13 00 00 00       	pushq  $0x13
  400d3b:	e9 b0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d40 <time@plt>:
  400d40:	ff 25 72 33 20 00    	jmpq   *0x203372(%rip)        # 6040b8 <_GLOBAL_OFFSET_TABLE_+0xb8>
  400d46:	68 14 00 00 00       	pushq  $0x14
  400d4b:	e9 a0 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d50 <random@plt>:
  400d50:	ff 25 6a 33 20 00    	jmpq   *0x20336a(%rip)        # 6040c0 <_GLOBAL_OFFSET_TABLE_+0xc0>
  400d56:	68 15 00 00 00       	pushq  $0x15
  400d5b:	e9 90 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d60 <_IO_getc@plt>:
  400d60:	ff 25 62 33 20 00    	jmpq   *0x203362(%rip)        # 6040c8 <_GLOBAL_OFFSET_TABLE_+0xc8>
  400d66:	68 16 00 00 00       	pushq  $0x16
  400d6b:	e9 80 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d70 <__isoc99_sscanf@plt>:
  400d70:	ff 25 5a 33 20 00    	jmpq   *0x20335a(%rip)        # 6040d0 <_GLOBAL_OFFSET_TABLE_+0xd0>
  400d76:	68 17 00 00 00       	pushq  $0x17
  400d7b:	e9 70 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d80 <munmap@plt>:
  400d80:	ff 25 52 33 20 00    	jmpq   *0x203352(%rip)        # 6040d8 <_GLOBAL_OFFSET_TABLE_+0xd8>
  400d86:	68 18 00 00 00       	pushq  $0x18
  400d8b:	e9 60 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400d90 <bcopy@plt>:
  400d90:	ff 25 4a 33 20 00    	jmpq   *0x20334a(%rip)        # 6040e0 <_GLOBAL_OFFSET_TABLE_+0xe0>
  400d96:	68 19 00 00 00       	pushq  $0x19
  400d9b:	e9 50 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400da0 <fopen@plt>:
  400da0:	ff 25 42 33 20 00    	jmpq   *0x203342(%rip)        # 6040e8 <_GLOBAL_OFFSET_TABLE_+0xe8>
  400da6:	68 1a 00 00 00       	pushq  $0x1a
  400dab:	e9 40 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400db0 <getopt@plt>:
  400db0:	ff 25 3a 33 20 00    	jmpq   *0x20333a(%rip)        # 6040f0 <_GLOBAL_OFFSET_TABLE_+0xf0>
  400db6:	68 1b 00 00 00       	pushq  $0x1b
  400dbb:	e9 30 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400dc0 <strtoul@plt>:
  400dc0:	ff 25 32 33 20 00    	jmpq   *0x203332(%rip)        # 6040f8 <_GLOBAL_OFFSET_TABLE_+0xf8>
  400dc6:	68 1c 00 00 00       	pushq  $0x1c
  400dcb:	e9 20 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400dd0 <gethostname@plt>:
  400dd0:	ff 25 2a 33 20 00    	jmpq   *0x20332a(%rip)        # 604100 <_GLOBAL_OFFSET_TABLE_+0x100>
  400dd6:	68 1d 00 00 00       	pushq  $0x1d
  400ddb:	e9 10 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400de0 <sprintf@plt>:
  400de0:	ff 25 22 33 20 00    	jmpq   *0x203322(%rip)        # 604108 <_GLOBAL_OFFSET_TABLE_+0x108>
  400de6:	68 1e 00 00 00       	pushq  $0x1e
  400deb:	e9 00 fe ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400df0 <exit@plt>:
  400df0:	ff 25 1a 33 20 00    	jmpq   *0x20331a(%rip)        # 604110 <_GLOBAL_OFFSET_TABLE_+0x110>
  400df6:	68 1f 00 00 00       	pushq  $0x1f
  400dfb:	e9 f0 fd ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400e00 <connect@plt>:
  400e00:	ff 25 12 33 20 00    	jmpq   *0x203312(%rip)        # 604118 <_GLOBAL_OFFSET_TABLE_+0x118>
  400e06:	68 20 00 00 00       	pushq  $0x20
  400e0b:	e9 e0 fd ff ff       	jmpq   400bf0 <_init+0x28>

0000000000400e10 <socket@plt>:
  400e10:	ff 25 0a 33 20 00    	jmpq   *0x20330a(%rip)        # 604120 <_GLOBAL_OFFSET_TABLE_+0x120>
  400e16:	68 21 00 00 00       	pushq  $0x21
  400e1b:	e9 d0 fd ff ff       	jmpq   400bf0 <_init+0x28>

Disassembly of section .text:

0000000000400e20 <_start>:
  400e20:	31 ed                	xor    %ebp,%ebp
  400e22:	49 89 d1             	mov    %rdx,%r9
  400e25:	5e                   	pop    %rsi
  400e26:	48 89 e2             	mov    %rsp,%rdx
  400e29:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400e2d:	50                   	push   %rax
  400e2e:	54                   	push   %rsp
  400e2f:	49 c7 c0 d0 2b 40 00 	mov    $0x402bd0,%r8
  400e36:	48 c7 c1 60 2b 40 00 	mov    $0x402b60,%rcx
  400e3d:	48 c7 c7 e0 10 40 00 	mov    $0x4010e0,%rdi
  400e44:	e8 87 fe ff ff       	callq  400cd0 <__libc_start_main@plt>
  400e49:	f4                   	hlt    
  400e4a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400e50 <deregister_tm_clones>:
  400e50:	b8 b7 44 60 00       	mov    $0x6044b7,%eax
  400e55:	55                   	push   %rbp
  400e56:	48 2d b0 44 60 00    	sub    $0x6044b0,%rax
  400e5c:	48 83 f8 0e          	cmp    $0xe,%rax
  400e60:	48 89 e5             	mov    %rsp,%rbp
  400e63:	77 02                	ja     400e67 <deregister_tm_clones+0x17>
  400e65:	5d                   	pop    %rbp
  400e66:	c3                   	retq   
  400e67:	b8 00 00 00 00       	mov    $0x0,%eax
  400e6c:	48 85 c0             	test   %rax,%rax
  400e6f:	74 f4                	je     400e65 <deregister_tm_clones+0x15>
  400e71:	5d                   	pop    %rbp
  400e72:	bf b0 44 60 00       	mov    $0x6044b0,%edi
  400e77:	ff e0                	jmpq   *%rax
  400e79:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400e80 <register_tm_clones>:
  400e80:	b8 b0 44 60 00       	mov    $0x6044b0,%eax
  400e85:	55                   	push   %rbp
  400e86:	48 2d b0 44 60 00    	sub    $0x6044b0,%rax
  400e8c:	48 c1 f8 03          	sar    $0x3,%rax
  400e90:	48 89 e5             	mov    %rsp,%rbp
  400e93:	48 89 c2             	mov    %rax,%rdx
  400e96:	48 c1 ea 3f          	shr    $0x3f,%rdx
  400e9a:	48 01 d0             	add    %rdx,%rax
  400e9d:	48 d1 f8             	sar    %rax
  400ea0:	75 02                	jne    400ea4 <register_tm_clones+0x24>
  400ea2:	5d                   	pop    %rbp
  400ea3:	c3                   	retq   
  400ea4:	ba 00 00 00 00       	mov    $0x0,%edx
  400ea9:	48 85 d2             	test   %rdx,%rdx
  400eac:	74 f4                	je     400ea2 <register_tm_clones+0x22>
  400eae:	5d                   	pop    %rbp
  400eaf:	48 89 c6             	mov    %rax,%rsi
  400eb2:	bf b0 44 60 00       	mov    $0x6044b0,%edi
  400eb7:	ff e2                	jmpq   *%rdx
  400eb9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400ec0 <__do_global_dtors_aux>:
  400ec0:	80 3d 11 36 20 00 00 	cmpb   $0x0,0x203611(%rip)        # 6044d8 <completed.6354>
  400ec7:	75 11                	jne    400eda <__do_global_dtors_aux+0x1a>
  400ec9:	55                   	push   %rbp
  400eca:	48 89 e5             	mov    %rsp,%rbp
  400ecd:	e8 7e ff ff ff       	callq  400e50 <deregister_tm_clones>
  400ed2:	5d                   	pop    %rbp
  400ed3:	c6 05 fe 35 20 00 01 	movb   $0x1,0x2035fe(%rip)        # 6044d8 <completed.6354>
  400eda:	f3 c3                	repz retq 
  400edc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400ee0 <frame_dummy>:
  400ee0:	48 83 3d 38 2f 20 00 	cmpq   $0x0,0x202f38(%rip)        # 603e20 <__JCR_END__>
  400ee7:	00 
  400ee8:	74 1e                	je     400f08 <frame_dummy+0x28>
  400eea:	b8 00 00 00 00       	mov    $0x0,%eax
  400eef:	48 85 c0             	test   %rax,%rax
  400ef2:	74 14                	je     400f08 <frame_dummy+0x28>
  400ef4:	55                   	push   %rbp
  400ef5:	bf 20 3e 60 00       	mov    $0x603e20,%edi
  400efa:	48 89 e5             	mov    %rsp,%rbp
  400efd:	ff d0                	callq  *%rax
  400eff:	5d                   	pop    %rbp
  400f00:	e9 7b ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f05:	0f 1f 00             	nopl   (%rax)
  400f08:	e9 73 ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f0d:	0f 1f 00             	nopl   (%rax)

0000000000400f10 <usage>:
  400f10:	48 83 ec 08          	sub    $0x8,%rsp
  400f14:	48 89 fe             	mov    %rdi,%rsi
  400f17:	83 3d ea 35 20 00 00 	cmpl   $0x0,0x2035ea(%rip)        # 604508 <is_checker>
  400f1e:	74 39                	je     400f59 <usage+0x49>
  400f20:	bf f0 2b 40 00       	mov    $0x402bf0,%edi
  400f25:	b8 00 00 00 00       	mov    $0x0,%eax
  400f2a:	e8 51 fd ff ff       	callq  400c80 <printf@plt>
  400f2f:	bf 28 2c 40 00       	mov    $0x402c28,%edi
  400f34:	e8 17 fd ff ff       	callq  400c50 <puts@plt>
  400f39:	bf a0 2d 40 00       	mov    $0x402da0,%edi
  400f3e:	e8 0d fd ff ff       	callq  400c50 <puts@plt>
  400f43:	bf 50 2c 40 00       	mov    $0x402c50,%edi
  400f48:	e8 03 fd ff ff       	callq  400c50 <puts@plt>
  400f4d:	bf ba 2d 40 00       	mov    $0x402dba,%edi
  400f52:	e8 f9 fc ff ff       	callq  400c50 <puts@plt>
  400f57:	eb 2d                	jmp    400f86 <usage+0x76>
  400f59:	bf d6 2d 40 00       	mov    $0x402dd6,%edi
  400f5e:	b8 00 00 00 00       	mov    $0x0,%eax
  400f63:	e8 18 fd ff ff       	callq  400c80 <printf@plt>
  400f68:	bf 78 2c 40 00       	mov    $0x402c78,%edi
  400f6d:	e8 de fc ff ff       	callq  400c50 <puts@plt>
  400f72:	bf a0 2c 40 00       	mov    $0x402ca0,%edi
  400f77:	e8 d4 fc ff ff       	callq  400c50 <puts@plt>
  400f7c:	bf f4 2d 40 00       	mov    $0x402df4,%edi
  400f81:	e8 ca fc ff ff       	callq  400c50 <puts@plt>
  400f86:	bf 00 00 00 00       	mov    $0x0,%edi
  400f8b:	e8 60 fe ff ff       	callq  400df0 <exit@plt>

0000000000400f90 <initialize_target>:
  400f90:	55                   	push   %rbp
  400f91:	53                   	push   %rbx
  400f92:	48 81 ec 08 21 00 00 	sub    $0x2108,%rsp
  400f99:	89 f5                	mov    %esi,%ebp
  400f9b:	89 3d 57 35 20 00    	mov    %edi,0x203557(%rip)        # 6044f8 <check_level>
  400fa1:	8b 3d c1 31 20 00    	mov    0x2031c1(%rip),%edi        # 604168 <target_id>
  400fa7:	e8 87 1b 00 00       	callq  402b33 <gencookie>
  400fac:	89 05 52 35 20 00    	mov    %eax,0x203552(%rip)        # 604504 <cookie>
  400fb2:	89 c7                	mov    %eax,%edi
  400fb4:	e8 7a 1b 00 00       	callq  402b33 <gencookie>
  400fb9:	89 05 41 35 20 00    	mov    %eax,0x203541(%rip)        # 604500 <authkey>
  400fbf:	8b 05 a3 31 20 00    	mov    0x2031a3(%rip),%eax        # 604168 <target_id>
  400fc5:	8d 78 01             	lea    0x1(%rax),%edi
  400fc8:	e8 53 fc ff ff       	callq  400c20 <srandom@plt>
  400fcd:	e8 7e fd ff ff       	callq  400d50 <random@plt>
  400fd2:	89 c7                	mov    %eax,%edi
  400fd4:	e8 ca 02 00 00       	callq  4012a3 <scramble>
  400fd9:	89 c3                	mov    %eax,%ebx
  400fdb:	85 ed                	test   %ebp,%ebp
  400fdd:	74 18                	je     400ff7 <initialize_target+0x67>
  400fdf:	bf 00 00 00 00       	mov    $0x0,%edi
  400fe4:	e8 57 fd ff ff       	callq  400d40 <time@plt>
  400fe9:	89 c7                	mov    %eax,%edi
  400feb:	e8 30 fc ff ff       	callq  400c20 <srandom@plt>
  400ff0:	e8 5b fd ff ff       	callq  400d50 <random@plt>
  400ff5:	eb 05                	jmp    400ffc <initialize_target+0x6c>
  400ff7:	b8 00 00 00 00       	mov    $0x0,%eax
  400ffc:	01 c3                	add    %eax,%ebx
  400ffe:	0f b7 db             	movzwl %bx,%ebx
  401001:	8d 04 dd 00 01 00 00 	lea    0x100(,%rbx,8),%eax
  401008:	89 c0                	mov    %eax,%eax
  40100a:	48 89 05 8f 34 20 00 	mov    %rax,0x20348f(%rip)        # 6044a0 <buf_offset>
  401011:	c6 05 10 41 20 00 63 	movb   $0x63,0x204110(%rip)        # 605128 <target_prefix>
  401018:	83 3d 89 34 20 00 00 	cmpl   $0x0,0x203489(%rip)        # 6044a8 <notify>
  40101f:	0f 84 b1 00 00 00    	je     4010d6 <initialize_target+0x146>
  401025:	83 3d dc 34 20 00 00 	cmpl   $0x0,0x2034dc(%rip)        # 604508 <is_checker>
  40102c:	0f 85 a4 00 00 00    	jne    4010d6 <initialize_target+0x146>
  401032:	be 00 01 00 00       	mov    $0x100,%esi
  401037:	48 89 e7             	mov    %rsp,%rdi
  40103a:	e8 91 fd ff ff       	callq  400dd0 <gethostname@plt>
  40103f:	85 c0                	test   %eax,%eax
  401041:	74 25                	je     401068 <initialize_target+0xd8>
  401043:	bf d0 2c 40 00       	mov    $0x402cd0,%edi
  401048:	e8 03 fc ff ff       	callq  400c50 <puts@plt>
  40104d:	bf 08 00 00 00       	mov    $0x8,%edi
  401052:	e8 99 fd ff ff       	callq  400df0 <exit@plt>
  401057:	48 89 e6             	mov    %rsp,%rsi
  40105a:	e8 a1 fb ff ff       	callq  400c00 <strcasecmp@plt>
  40105f:	85 c0                	test   %eax,%eax
  401061:	74 21                	je     401084 <initialize_target+0xf4>
  401063:	83 c3 01             	add    $0x1,%ebx
  401066:	eb 05                	jmp    40106d <initialize_target+0xdd>
  401068:	bb 00 00 00 00       	mov    $0x0,%ebx
  40106d:	48 63 c3             	movslq %ebx,%rax
  401070:	48 8b 3c c5 80 41 60 	mov    0x604180(,%rax,8),%rdi
  401077:	00 
  401078:	48 85 ff             	test   %rdi,%rdi
  40107b:	75 da                	jne    401057 <initialize_target+0xc7>
  40107d:	b8 00 00 00 00       	mov    $0x0,%eax
  401082:	eb 05                	jmp    401089 <initialize_target+0xf9>
  401084:	b8 01 00 00 00       	mov    $0x1,%eax
  401089:	85 c0                	test   %eax,%eax
  40108b:	75 17                	jne    4010a4 <initialize_target+0x114>
  40108d:	48 89 e6             	mov    %rsp,%rsi
  401090:	bf 08 2d 40 00       	mov    $0x402d08,%edi
  401095:	e8 e6 fb ff ff       	callq  400c80 <printf@plt>
  40109a:	bf 08 00 00 00       	mov    $0x8,%edi
  40109f:	e8 4c fd ff ff       	callq  400df0 <exit@plt>
  4010a4:	48 8d bc 24 00 01 00 	lea    0x100(%rsp),%rdi
  4010ab:	00 
  4010ac:	e8 19 18 00 00       	callq  4028ca <init_driver>
  4010b1:	85 c0                	test   %eax,%eax
  4010b3:	79 21                	jns    4010d6 <initialize_target+0x146>
  4010b5:	48 8d b4 24 00 01 00 	lea    0x100(%rsp),%rsi
  4010bc:	00 
  4010bd:	bf 48 2d 40 00       	mov    $0x402d48,%edi
  4010c2:	b8 00 00 00 00       	mov    $0x0,%eax
  4010c7:	e8 b4 fb ff ff       	callq  400c80 <printf@plt>
  4010cc:	bf 08 00 00 00       	mov    $0x8,%edi
  4010d1:	e8 1a fd ff ff       	callq  400df0 <exit@plt>
  4010d6:	48 81 c4 08 21 00 00 	add    $0x2108,%rsp
  4010dd:	5b                   	pop    %rbx
  4010de:	5d                   	pop    %rbp
  4010df:	c3                   	retq   

00000000004010e0 <main>:
  4010e0:	41 56                	push   %r14
  4010e2:	41 55                	push   %r13
  4010e4:	41 54                	push   %r12
  4010e6:	55                   	push   %rbp
  4010e7:	53                   	push   %rbx
  4010e8:	41 89 fc             	mov    %edi,%r12d
  4010eb:	48 89 f3             	mov    %rsi,%rbx
  4010ee:	be f1 1c 40 00       	mov    $0x401cf1,%esi
  4010f3:	bf 0b 00 00 00       	mov    $0xb,%edi
  4010f8:	e8 e3 fb ff ff       	callq  400ce0 <signal@plt>
  4010fd:	be a3 1c 40 00       	mov    $0x401ca3,%esi
  401102:	bf 07 00 00 00       	mov    $0x7,%edi
  401107:	e8 d4 fb ff ff       	callq  400ce0 <signal@plt>
  40110c:	be 3f 1d 40 00       	mov    $0x401d3f,%esi
  401111:	bf 04 00 00 00       	mov    $0x4,%edi
  401116:	e8 c5 fb ff ff       	callq  400ce0 <signal@plt>
  40111b:	83 3d e6 33 20 00 00 	cmpl   $0x0,0x2033e6(%rip)        # 604508 <is_checker>
  401122:	74 20                	je     401144 <main+0x64>
  401124:	be 8d 1d 40 00       	mov    $0x401d8d,%esi
  401129:	bf 0e 00 00 00       	mov    $0xe,%edi
  40112e:	e8 ad fb ff ff       	callq  400ce0 <signal@plt>
  401133:	bf 05 00 00 00       	mov    $0x5,%edi
  401138:	e8 63 fb ff ff       	callq  400ca0 <alarm@plt>
  40113d:	bd 12 2e 40 00       	mov    $0x402e12,%ebp
  401142:	eb 05                	jmp    401149 <main+0x69>
  401144:	bd 0d 2e 40 00       	mov    $0x402e0d,%ebp
  401149:	48 8b 05 70 33 20 00 	mov    0x203370(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401150:	48 89 05 99 33 20 00 	mov    %rax,0x203399(%rip)        # 6044f0 <infile>
  401157:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  40115d:	41 be 00 00 00 00    	mov    $0x0,%r14d
  401163:	e9 b9 00 00 00       	jmpq   401221 <main+0x141>
  401168:	83 e8 61             	sub    $0x61,%eax
  40116b:	3c 10                	cmp    $0x10,%al
  40116d:	0f 87 93 00 00 00    	ja     401206 <main+0x126>
  401173:	0f b6 c0             	movzbl %al,%eax
  401176:	ff 24 c5 58 2e 40 00 	jmpq   *0x402e58(,%rax,8)
  40117d:	48 8b 3b             	mov    (%rbx),%rdi
  401180:	e8 8b fd ff ff       	callq  400f10 <usage>
  401185:	be ed 30 40 00       	mov    $0x4030ed,%esi
  40118a:	48 8b 3d 37 33 20 00 	mov    0x203337(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  401191:	e8 0a fc ff ff       	callq  400da0 <fopen@plt>
  401196:	48 89 05 53 33 20 00 	mov    %rax,0x203353(%rip)        # 6044f0 <infile>
  40119d:	48 85 c0             	test   %rax,%rax
  4011a0:	75 7f                	jne    401221 <main+0x141>
  4011a2:	48 8b 15 1f 33 20 00 	mov    0x20331f(%rip),%rdx        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011a9:	be 1a 2e 40 00       	mov    $0x402e1a,%esi
  4011ae:	48 8b 3d 1b 33 20 00 	mov    0x20331b(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  4011b5:	e8 46 fb ff ff       	callq  400d00 <fprintf@plt>
  4011ba:	b8 01 00 00 00       	mov    $0x1,%eax
  4011bf:	e9 d6 00 00 00       	jmpq   40129a <main+0x1ba>
  4011c4:	ba 10 00 00 00       	mov    $0x10,%edx
  4011c9:	be 00 00 00 00       	mov    $0x0,%esi
  4011ce:	48 8b 3d f3 32 20 00 	mov    0x2032f3(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011d5:	e8 e6 fb ff ff       	callq  400dc0 <strtoul@plt>
  4011da:	41 89 c6             	mov    %eax,%r14d
  4011dd:	eb 42                	jmp    401221 <main+0x141>
  4011df:	ba 0a 00 00 00       	mov    $0xa,%edx
  4011e4:	be 00 00 00 00       	mov    $0x0,%esi
  4011e9:	48 8b 3d d8 32 20 00 	mov    0x2032d8(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011f0:	e8 2b fb ff ff       	callq  400d20 <strtol@plt>
  4011f5:	41 89 c5             	mov    %eax,%r13d
  4011f8:	eb 27                	jmp    401221 <main+0x141>
  4011fa:	c7 05 a4 32 20 00 00 	movl   $0x0,0x2032a4(%rip)        # 6044a8 <notify>
  401201:	00 00 00 
  401204:	eb 1b                	jmp    401221 <main+0x141>
  401206:	40 0f be f6          	movsbl %sil,%esi
  40120a:	bf 37 2e 40 00       	mov    $0x402e37,%edi
  40120f:	b8 00 00 00 00       	mov    $0x0,%eax
  401214:	e8 67 fa ff ff       	callq  400c80 <printf@plt>
  401219:	48 8b 3b             	mov    (%rbx),%rdi
  40121c:	e8 ef fc ff ff       	callq  400f10 <usage>
  401221:	48 89 ea             	mov    %rbp,%rdx
  401224:	48 89 de             	mov    %rbx,%rsi
  401227:	44 89 e7             	mov    %r12d,%edi
  40122a:	e8 81 fb ff ff       	callq  400db0 <getopt@plt>
  40122f:	89 c6                	mov    %eax,%esi
  401231:	3c ff                	cmp    $0xff,%al
  401233:	0f 85 2f ff ff ff    	jne    401168 <main+0x88>
  401239:	be 00 00 00 00       	mov    $0x0,%esi
  40123e:	44 89 ef             	mov    %r13d,%edi
  401241:	e8 4a fd ff ff       	callq  400f90 <initialize_target>
  401246:	83 3d bb 32 20 00 00 	cmpl   $0x0,0x2032bb(%rip)        # 604508 <is_checker>
  40124d:	74 25                	je     401274 <main+0x194>
  40124f:	44 3b 35 aa 32 20 00 	cmp    0x2032aa(%rip),%r14d        # 604500 <authkey>
  401256:	74 1c                	je     401274 <main+0x194>
  401258:	44 89 f6             	mov    %r14d,%esi
  40125b:	bf 70 2d 40 00       	mov    $0x402d70,%edi
  401260:	b8 00 00 00 00       	mov    $0x0,%eax
  401265:	e8 16 fa ff ff       	callq  400c80 <printf@plt>
  40126a:	b8 00 00 00 00       	mov    $0x0,%eax
  40126f:	e8 37 07 00 00       	callq  4019ab <check_fail>
  401274:	8b 35 8a 32 20 00    	mov    0x20328a(%rip),%esi        # 604504 <cookie>
  40127a:	bf 4a 2e 40 00       	mov    $0x402e4a,%edi
  40127f:	b8 00 00 00 00       	mov    $0x0,%eax
  401284:	e8 f7 f9 ff ff       	callq  400c80 <printf@plt>
  401289:	48 8b 3d 10 32 20 00 	mov    0x203210(%rip),%rdi        # 6044a0 <buf_offset>
  401290:	e8 c7 0b 00 00       	callq  401e5c <stable_launch>
  401295:	b8 00 00 00 00       	mov    $0x0,%eax
  40129a:	5b                   	pop    %rbx
  40129b:	5d                   	pop    %rbp
  40129c:	41 5c                	pop    %r12
  40129e:	41 5d                	pop    %r13
  4012a0:	41 5e                	pop    %r14
  4012a2:	c3                   	retq   

00000000004012a3 <scramble>:
  4012a3:	b8 00 00 00 00       	mov    $0x0,%eax
  4012a8:	eb 11                	jmp    4012bb <scramble+0x18>
  4012aa:	69 c8 82 f4 00 00    	imul   $0xf482,%eax,%ecx
  4012b0:	01 f9                	add    %edi,%ecx
  4012b2:	89 c2                	mov    %eax,%edx
  4012b4:	89 4c 94 d0          	mov    %ecx,-0x30(%rsp,%rdx,4)
  4012b8:	83 c0 01             	add    $0x1,%eax
  4012bb:	83 f8 09             	cmp    $0x9,%eax
  4012be:	76 ea                	jbe    4012aa <scramble+0x7>
  4012c0:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4012c4:	69 c0 33 48 00 00    	imul   $0x4833,%eax,%eax
  4012ca:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4012ce:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4012d2:	69 c0 95 04 00 00    	imul   $0x495,%eax,%eax
  4012d8:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4012dc:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4012e0:	69 c0 80 c5 00 00    	imul   $0xc580,%eax,%eax
  4012e6:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4012ea:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4012ee:	69 c0 1b 77 00 00    	imul   $0x771b,%eax,%eax
  4012f4:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4012f8:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4012fc:	69 c0 8c 45 00 00    	imul   $0x458c,%eax,%eax
  401302:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401306:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40130a:	69 c0 ff c6 00 00    	imul   $0xc6ff,%eax,%eax
  401310:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401314:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401318:	69 c0 1b 69 00 00    	imul   $0x691b,%eax,%eax
  40131e:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401322:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401326:	69 c0 7f 80 00 00    	imul   $0x807f,%eax,%eax
  40132c:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401330:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401334:	69 c0 4c ba 00 00    	imul   $0xba4c,%eax,%eax
  40133a:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  40133e:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401342:	69 c0 3c 1e 00 00    	imul   $0x1e3c,%eax,%eax
  401348:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40134c:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401350:	69 c0 e0 13 00 00    	imul   $0x13e0,%eax,%eax
  401356:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  40135a:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40135e:	69 c0 72 39 00 00    	imul   $0x3972,%eax,%eax
  401364:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401368:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  40136c:	69 c0 60 32 00 00    	imul   $0x3260,%eax,%eax
  401372:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401376:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40137a:	69 c0 d0 2c 00 00    	imul   $0x2cd0,%eax,%eax
  401380:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401384:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401388:	69 c0 68 aa 00 00    	imul   $0xaa68,%eax,%eax
  40138e:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401392:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401396:	69 c0 a6 92 00 00    	imul   $0x92a6,%eax,%eax
  40139c:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4013a0:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4013a4:	69 c0 7b 5e 00 00    	imul   $0x5e7b,%eax,%eax
  4013aa:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4013ae:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4013b2:	69 c0 28 4a 00 00    	imul   $0x4a28,%eax,%eax
  4013b8:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4013bc:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4013c0:	69 c0 37 e1 00 00    	imul   $0xe137,%eax,%eax
  4013c6:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4013ca:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4013ce:	69 c0 44 95 00 00    	imul   $0x9544,%eax,%eax
  4013d4:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4013d8:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4013dc:	69 c0 50 66 00 00    	imul   $0x6650,%eax,%eax
  4013e2:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4013e6:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4013ea:	69 c0 07 9d 00 00    	imul   $0x9d07,%eax,%eax
  4013f0:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4013f4:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4013f8:	69 c0 97 d4 00 00    	imul   $0xd497,%eax,%eax
  4013fe:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401402:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401406:	69 c0 a4 dc 00 00    	imul   $0xdca4,%eax,%eax
  40140c:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401410:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401414:	69 c0 1e b4 00 00    	imul   $0xb41e,%eax,%eax
  40141a:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  40141e:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401422:	69 c0 d6 e1 00 00    	imul   $0xe1d6,%eax,%eax
  401428:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40142c:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401430:	69 c0 9e de 00 00    	imul   $0xde9e,%eax,%eax
  401436:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40143a:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40143e:	69 c0 ee bb 00 00    	imul   $0xbbee,%eax,%eax
  401444:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401448:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40144c:	69 c0 b2 b3 00 00    	imul   $0xb3b2,%eax,%eax
  401452:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401456:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40145a:	69 c0 22 af 00 00    	imul   $0xaf22,%eax,%eax
  401460:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401464:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401468:	69 c0 dc 4e 00 00    	imul   $0x4edc,%eax,%eax
  40146e:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401472:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401476:	69 c0 b5 50 00 00    	imul   $0x50b5,%eax,%eax
  40147c:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401480:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401484:	69 c0 04 d9 00 00    	imul   $0xd904,%eax,%eax
  40148a:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40148e:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401492:	69 c0 54 d1 00 00    	imul   $0xd154,%eax,%eax
  401498:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  40149c:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4014a0:	69 c0 21 5c 00 00    	imul   $0x5c21,%eax,%eax
  4014a6:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4014aa:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4014ae:	69 c0 ff e0 00 00    	imul   $0xe0ff,%eax,%eax
  4014b4:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4014b8:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4014bc:	69 c0 db c2 00 00    	imul   $0xc2db,%eax,%eax
  4014c2:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4014c6:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4014ca:	69 c0 dd 91 00 00    	imul   $0x91dd,%eax,%eax
  4014d0:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4014d4:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4014d8:	69 c0 8d 9b 00 00    	imul   $0x9b8d,%eax,%eax
  4014de:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4014e2:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4014e6:	69 c0 56 26 00 00    	imul   $0x2656,%eax,%eax
  4014ec:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4014f0:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4014f4:	69 c0 62 69 00 00    	imul   $0x6962,%eax,%eax
  4014fa:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4014fe:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401502:	69 c0 a9 17 00 00    	imul   $0x17a9,%eax,%eax
  401508:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40150c:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401510:	69 c0 75 23 00 00    	imul   $0x2375,%eax,%eax
  401516:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40151a:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40151e:	69 c0 fe 58 00 00    	imul   $0x58fe,%eax,%eax
  401524:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401528:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  40152c:	69 c0 55 bc 00 00    	imul   $0xbc55,%eax,%eax
  401532:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  401536:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  40153a:	69 c0 42 35 00 00    	imul   $0x3542,%eax,%eax
  401540:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401544:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401548:	69 c0 ea 49 00 00    	imul   $0x49ea,%eax,%eax
  40154e:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401552:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401556:	69 c0 89 b8 00 00    	imul   $0xb889,%eax,%eax
  40155c:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401560:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401564:	69 c0 d6 20 00 00    	imul   $0x20d6,%eax,%eax
  40156a:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  40156e:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401572:	69 c0 2a dd 00 00    	imul   $0xdd2a,%eax,%eax
  401578:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40157c:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401580:	69 c0 75 f0 00 00    	imul   $0xf075,%eax,%eax
  401586:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40158a:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  40158e:	69 c0 69 3f 00 00    	imul   $0x3f69,%eax,%eax
  401594:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  401598:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40159c:	69 c0 2f 3c 00 00    	imul   $0x3c2f,%eax,%eax
  4015a2:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4015a6:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4015aa:	69 c0 c3 4a 00 00    	imul   $0x4ac3,%eax,%eax
  4015b0:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4015b4:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4015b8:	69 c0 c7 3f 00 00    	imul   $0x3fc7,%eax,%eax
  4015be:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4015c2:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4015c6:	69 c0 67 27 00 00    	imul   $0x2767,%eax,%eax
  4015cc:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4015d0:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4015d4:	69 c0 46 79 00 00    	imul   $0x7946,%eax,%eax
  4015da:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4015de:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4015e2:	69 c0 2a f1 00 00    	imul   $0xf12a,%eax,%eax
  4015e8:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4015ec:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4015f0:	69 c0 a7 12 00 00    	imul   $0x12a7,%eax,%eax
  4015f6:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4015fa:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4015fe:	69 c0 e3 73 00 00    	imul   $0x73e3,%eax,%eax
  401604:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401608:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  40160c:	69 c0 4a 52 00 00    	imul   $0x524a,%eax,%eax
  401612:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401616:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40161a:	69 c0 2e da 00 00    	imul   $0xda2e,%eax,%eax
  401620:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401624:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401628:	69 c0 1e 2f 00 00    	imul   $0x2f1e,%eax,%eax
  40162e:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401632:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401636:	69 c0 22 bf 00 00    	imul   $0xbf22,%eax,%eax
  40163c:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401640:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401644:	69 c0 95 1c 00 00    	imul   $0x1c95,%eax,%eax
  40164a:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  40164e:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401652:	69 c0 eb cc 00 00    	imul   $0xcceb,%eax,%eax
  401658:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  40165c:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401660:	69 c0 75 5a 00 00    	imul   $0x5a75,%eax,%eax
  401666:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40166a:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40166e:	69 c0 5b c0 00 00    	imul   $0xc05b,%eax,%eax
  401674:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401678:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40167c:	69 c0 9a dd 00 00    	imul   $0xdd9a,%eax,%eax
  401682:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401686:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40168a:	69 c0 61 6e 00 00    	imul   $0x6e61,%eax,%eax
  401690:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401694:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401698:	69 c0 38 7c 00 00    	imul   $0x7c38,%eax,%eax
  40169e:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4016a2:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4016a6:	69 c0 8c c6 00 00    	imul   $0xc68c,%eax,%eax
  4016ac:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4016b0:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4016b4:	69 c0 d9 d4 00 00    	imul   $0xd4d9,%eax,%eax
  4016ba:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4016be:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4016c2:	69 c0 3a 92 00 00    	imul   $0x923a,%eax,%eax
  4016c8:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4016cc:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4016d0:	69 c0 df 01 00 00    	imul   $0x1df,%eax,%eax
  4016d6:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4016da:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4016de:	69 c0 7d b6 00 00    	imul   $0xb67d,%eax,%eax
  4016e4:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4016e8:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4016ec:	69 c0 43 af 00 00    	imul   $0xaf43,%eax,%eax
  4016f2:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4016f6:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4016fa:	69 c0 5d f0 00 00    	imul   $0xf05d,%eax,%eax
  401700:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401704:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401708:	69 c0 63 23 00 00    	imul   $0x2363,%eax,%eax
  40170e:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401712:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401716:	69 c0 55 2e 00 00    	imul   $0x2e55,%eax,%eax
  40171c:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401720:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401724:	69 c0 cc 4b 00 00    	imul   $0x4bcc,%eax,%eax
  40172a:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40172e:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401732:	69 c0 02 4d 00 00    	imul   $0x4d02,%eax,%eax
  401738:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  40173c:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401740:	69 c0 95 07 00 00    	imul   $0x795,%eax,%eax
  401746:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40174a:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  40174e:	69 c0 e7 3c 00 00    	imul   $0x3ce7,%eax,%eax
  401754:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401758:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  40175c:	69 c0 7d 18 00 00    	imul   $0x187d,%eax,%eax
  401762:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401766:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  40176a:	69 c0 92 02 00 00    	imul   $0x292,%eax,%eax
  401770:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401774:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  401778:	69 c0 11 41 00 00    	imul   $0x4111,%eax,%eax
  40177e:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401782:	ba 00 00 00 00       	mov    $0x0,%edx
  401787:	b8 00 00 00 00       	mov    $0x0,%eax
  40178c:	eb 0b                	jmp    401799 <scramble+0x4f6>
  40178e:	89 d1                	mov    %edx,%ecx
  401790:	8b 4c 8c d0          	mov    -0x30(%rsp,%rcx,4),%ecx
  401794:	01 c8                	add    %ecx,%eax
  401796:	83 c2 01             	add    $0x1,%edx
  401799:	83 fa 09             	cmp    $0x9,%edx
  40179c:	76 f0                	jbe    40178e <scramble+0x4eb>
  40179e:	f3 c3                	repz retq 

00000000004017a0 <getbuf>:
  4017a0:	48 83 ec 18          	sub    $0x18,%rsp
  4017a4:	48 89 e7             	mov    %rsp,%rdi
  4017a7:	e8 2e 02 00 00       	callq  4019da <Gets>
  4017ac:	b8 01 00 00 00       	mov    $0x1,%eax
  4017b1:	48 83 c4 18          	add    $0x18,%rsp
  4017b5:	c3                   	retq   

00000000004017b6 <touch1>:
  4017b6:	48 83 ec 08          	sub    $0x8,%rsp
  4017ba:	c7 05 38 2d 20 00 01 	movl   $0x1,0x202d38(%rip)        # 6044fc <vlevel>
  4017c1:	00 00 00 
  4017c4:	bf 42 2f 40 00       	mov    $0x402f42,%edi
  4017c9:	e8 82 f4 ff ff       	callq  400c50 <puts@plt>
  4017ce:	bf 01 00 00 00       	mov    $0x1,%edi
  4017d3:	e8 f1 03 00 00       	callq  401bc9 <validate>
  4017d8:	bf 00 00 00 00       	mov    $0x0,%edi
  4017dd:	e8 0e f6 ff ff       	callq  400df0 <exit@plt>

00000000004017e2 <touch2>:
  4017e2:	48 83 ec 08          	sub    $0x8,%rsp
  4017e6:	89 fe                	mov    %edi,%esi
  4017e8:	c7 05 0a 2d 20 00 02 	movl   $0x2,0x202d0a(%rip)        # 6044fc <vlevel>
  4017ef:	00 00 00 
  4017f2:	3b 3d 0c 2d 20 00    	cmp    0x202d0c(%rip),%edi        # 604504 <cookie>
  4017f8:	75 1b                	jne    401815 <touch2+0x33>
  4017fa:	bf 68 2f 40 00       	mov    $0x402f68,%edi
  4017ff:	b8 00 00 00 00       	mov    $0x0,%eax
  401804:	e8 77 f4 ff ff       	callq  400c80 <printf@plt>
  401809:	bf 02 00 00 00       	mov    $0x2,%edi
  40180e:	e8 b6 03 00 00       	callq  401bc9 <validate>
  401813:	eb 19                	jmp    40182e <touch2+0x4c>
  401815:	bf 90 2f 40 00       	mov    $0x402f90,%edi
  40181a:	b8 00 00 00 00       	mov    $0x0,%eax
  40181f:	e8 5c f4 ff ff       	callq  400c80 <printf@plt>
  401824:	bf 02 00 00 00       	mov    $0x2,%edi
  401829:	e8 4d 04 00 00       	callq  401c7b <fail>
  40182e:	bf 00 00 00 00       	mov    $0x0,%edi
  401833:	e8 b8 f5 ff ff       	callq  400df0 <exit@plt>

0000000000401838 <hexmatch>:
  401838:	41 54                	push   %r12
  40183a:	55                   	push   %rbp
  40183b:	53                   	push   %rbx
  40183c:	48 83 ec 70          	sub    $0x70,%rsp
  401840:	41 89 fc             	mov    %edi,%r12d
  401843:	48 89 f5             	mov    %rsi,%rbp
  401846:	e8 05 f5 ff ff       	callq  400d50 <random@plt>
  40184b:	48 89 c1             	mov    %rax,%rcx
  40184e:	48 ba 0b d7 a3 70 3d 	movabs $0xa3d70a3d70a3d70b,%rdx
  401855:	0a d7 a3 
  401858:	48 f7 ea             	imul   %rdx
  40185b:	48 8d 04 0a          	lea    (%rdx,%rcx,1),%rax
  40185f:	48 c1 f8 06          	sar    $0x6,%rax
  401863:	48 89 ce             	mov    %rcx,%rsi
  401866:	48 c1 fe 3f          	sar    $0x3f,%rsi
  40186a:	48 29 f0             	sub    %rsi,%rax
  40186d:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401871:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401875:	48 c1 e0 02          	shl    $0x2,%rax
  401879:	48 29 c1             	sub    %rax,%rcx
  40187c:	48 8d 1c 0c          	lea    (%rsp,%rcx,1),%rbx
  401880:	44 89 e2             	mov    %r12d,%edx
  401883:	be 5f 2f 40 00       	mov    $0x402f5f,%esi
  401888:	48 89 df             	mov    %rbx,%rdi
  40188b:	b8 00 00 00 00       	mov    $0x0,%eax
  401890:	e8 4b f5 ff ff       	callq  400de0 <sprintf@plt>
  401895:	ba 09 00 00 00       	mov    $0x9,%edx
  40189a:	48 89 de             	mov    %rbx,%rsi
  40189d:	48 89 ef             	mov    %rbp,%rdi
  4018a0:	e8 8b f3 ff ff       	callq  400c30 <strncmp@plt>
  4018a5:	85 c0                	test   %eax,%eax
  4018a7:	0f 94 c0             	sete   %al
  4018aa:	0f b6 c0             	movzbl %al,%eax
  4018ad:	48 83 c4 70          	add    $0x70,%rsp
  4018b1:	5b                   	pop    %rbx
  4018b2:	5d                   	pop    %rbp
  4018b3:	41 5c                	pop    %r12
  4018b5:	c3                   	retq   

00000000004018b6 <touch3>:
  4018b6:	53                   	push   %rbx
  4018b7:	48 89 fb             	mov    %rdi,%rbx
  4018ba:	c7 05 38 2c 20 00 03 	movl   $0x3,0x202c38(%rip)        # 6044fc <vlevel>
  4018c1:	00 00 00 
  4018c4:	48 89 fe             	mov    %rdi,%rsi
  4018c7:	8b 3d 37 2c 20 00    	mov    0x202c37(%rip),%edi        # 604504 <cookie>
  4018cd:	e8 66 ff ff ff       	callq  401838 <hexmatch>
  4018d2:	85 c0                	test   %eax,%eax
  4018d4:	74 1e                	je     4018f4 <touch3+0x3e>
  4018d6:	48 89 de             	mov    %rbx,%rsi
  4018d9:	bf b8 2f 40 00       	mov    $0x402fb8,%edi
  4018de:	b8 00 00 00 00       	mov    $0x0,%eax
  4018e3:	e8 98 f3 ff ff       	callq  400c80 <printf@plt>
  4018e8:	bf 03 00 00 00       	mov    $0x3,%edi
  4018ed:	e8 d7 02 00 00       	callq  401bc9 <validate>
  4018f2:	eb 1c                	jmp    401910 <touch3+0x5a>
  4018f4:	48 89 de             	mov    %rbx,%rsi
  4018f7:	bf e0 2f 40 00       	mov    $0x402fe0,%edi
  4018fc:	b8 00 00 00 00       	mov    $0x0,%eax
  401901:	e8 7a f3 ff ff       	callq  400c80 <printf@plt>
  401906:	bf 03 00 00 00       	mov    $0x3,%edi
  40190b:	e8 6b 03 00 00       	callq  401c7b <fail>
  401910:	bf 00 00 00 00       	mov    $0x0,%edi
  401915:	e8 d6 f4 ff ff       	callq  400df0 <exit@plt>

000000000040191a <test>:
  40191a:	48 83 ec 08          	sub    $0x8,%rsp
  40191e:	b8 00 00 00 00       	mov    $0x0,%eax
  401923:	e8 78 fe ff ff       	callq  4017a0 <getbuf>
  401928:	89 c6                	mov    %eax,%esi
  40192a:	bf 08 30 40 00       	mov    $0x403008,%edi
  40192f:	b8 00 00 00 00       	mov    $0x0,%eax
  401934:	e8 47 f3 ff ff       	callq  400c80 <printf@plt>
  401939:	48 83 c4 08          	add    $0x8,%rsp
  40193d:	c3                   	retq   
  40193e:	66 90                	xchg   %ax,%ax

0000000000401940 <save_char>:
  401940:	8b 05 de 37 20 00    	mov    0x2037de(%rip),%eax        # 605124 <gets_cnt>
  401946:	3d ff 03 00 00       	cmp    $0x3ff,%eax
  40194b:	7f 49                	jg     401996 <save_char+0x56>
  40194d:	8d 14 40             	lea    (%rax,%rax,2),%edx
  401950:	89 f9                	mov    %edi,%ecx
  401952:	c0 e9 04             	shr    $0x4,%cl
  401955:	83 e1 0f             	and    $0xf,%ecx
  401958:	0f b6 b1 30 33 40 00 	movzbl 0x403330(%rcx),%esi
  40195f:	48 63 ca             	movslq %edx,%rcx
  401962:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  401969:	8d 4a 01             	lea    0x1(%rdx),%ecx
  40196c:	83 e7 0f             	and    $0xf,%edi
  40196f:	0f b6 b7 30 33 40 00 	movzbl 0x403330(%rdi),%esi
  401976:	48 63 c9             	movslq %ecx,%rcx
  401979:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  401980:	83 c2 02             	add    $0x2,%edx
  401983:	48 63 d2             	movslq %edx,%rdx
  401986:	c6 82 20 45 60 00 20 	movb   $0x20,0x604520(%rdx)
  40198d:	83 c0 01             	add    $0x1,%eax
  401990:	89 05 8e 37 20 00    	mov    %eax,0x20378e(%rip)        # 605124 <gets_cnt>
  401996:	f3 c3                	repz retq 

0000000000401998 <save_term>:
  401998:	8b 05 86 37 20 00    	mov    0x203786(%rip),%eax        # 605124 <gets_cnt>
  40199e:	8d 04 40             	lea    (%rax,%rax,2),%eax
  4019a1:	48 98                	cltq   
  4019a3:	c6 80 20 45 60 00 00 	movb   $0x0,0x604520(%rax)
  4019aa:	c3                   	retq   

00000000004019ab <check_fail>:
  4019ab:	48 83 ec 08          	sub    $0x8,%rsp
  4019af:	0f be 35 72 37 20 00 	movsbl 0x203772(%rip),%esi        # 605128 <target_prefix>
  4019b6:	b9 20 45 60 00       	mov    $0x604520,%ecx
  4019bb:	8b 15 37 2b 20 00    	mov    0x202b37(%rip),%edx        # 6044f8 <check_level>
  4019c1:	bf 2b 30 40 00       	mov    $0x40302b,%edi
  4019c6:	b8 00 00 00 00       	mov    $0x0,%eax
  4019cb:	e8 b0 f2 ff ff       	callq  400c80 <printf@plt>
  4019d0:	bf 01 00 00 00       	mov    $0x1,%edi
  4019d5:	e8 16 f4 ff ff       	callq  400df0 <exit@plt>

00000000004019da <Gets>:
  4019da:	41 54                	push   %r12
  4019dc:	55                   	push   %rbp
  4019dd:	53                   	push   %rbx
  4019de:	49 89 fc             	mov    %rdi,%r12
  4019e1:	c7 05 39 37 20 00 00 	movl   $0x0,0x203739(%rip)        # 605124 <gets_cnt>
  4019e8:	00 00 00 
  4019eb:	48 89 fb             	mov    %rdi,%rbx
  4019ee:	eb 11                	jmp    401a01 <Gets+0x27>
  4019f0:	48 8d 6b 01          	lea    0x1(%rbx),%rbp
  4019f4:	88 03                	mov    %al,(%rbx)
  4019f6:	0f b6 f8             	movzbl %al,%edi
  4019f9:	e8 42 ff ff ff       	callq  401940 <save_char>
  4019fe:	48 89 eb             	mov    %rbp,%rbx
  401a01:	48 8b 3d e8 2a 20 00 	mov    0x202ae8(%rip),%rdi        # 6044f0 <infile>
  401a08:	e8 53 f3 ff ff       	callq  400d60 <_IO_getc@plt>
  401a0d:	83 f8 ff             	cmp    $0xffffffff,%eax
  401a10:	74 05                	je     401a17 <Gets+0x3d>
  401a12:	83 f8 0a             	cmp    $0xa,%eax
  401a15:	75 d9                	jne    4019f0 <Gets+0x16>
  401a17:	c6 03 00             	movb   $0x0,(%rbx)
  401a1a:	b8 00 00 00 00       	mov    $0x0,%eax
  401a1f:	e8 74 ff ff ff       	callq  401998 <save_term>
  401a24:	4c 89 e0             	mov    %r12,%rax
  401a27:	5b                   	pop    %rbx
  401a28:	5d                   	pop    %rbp
  401a29:	41 5c                	pop    %r12
  401a2b:	c3                   	retq   

0000000000401a2c <notify_server>:
  401a2c:	83 3d d5 2a 20 00 00 	cmpl   $0x0,0x202ad5(%rip)        # 604508 <is_checker>
  401a33:	0f 85 8e 01 00 00    	jne    401bc7 <notify_server+0x19b>
  401a39:	53                   	push   %rbx
  401a3a:	48 81 ec 10 40 00 00 	sub    $0x4010,%rsp
  401a41:	89 fb                	mov    %edi,%ebx
  401a43:	8b 05 db 36 20 00    	mov    0x2036db(%rip),%eax        # 605124 <gets_cnt>
  401a49:	83 c0 64             	add    $0x64,%eax
  401a4c:	3d 00 20 00 00       	cmp    $0x2000,%eax
  401a51:	7e 19                	jle    401a6c <notify_server+0x40>
  401a53:	bf 60 31 40 00       	mov    $0x403160,%edi
  401a58:	b8 00 00 00 00       	mov    $0x0,%eax
  401a5d:	e8 1e f2 ff ff       	callq  400c80 <printf@plt>
  401a62:	bf 01 00 00 00       	mov    $0x1,%edi
  401a67:	e8 84 f3 ff ff       	callq  400df0 <exit@plt>
  401a6c:	44 0f be 0d b4 36 20 	movsbl 0x2036b4(%rip),%r9d        # 605128 <target_prefix>
  401a73:	00 
  401a74:	83 3d 2d 2a 20 00 00 	cmpl   $0x0,0x202a2d(%rip)        # 6044a8 <notify>
  401a7b:	74 09                	je     401a86 <notify_server+0x5a>
  401a7d:	44 8b 05 7c 2a 20 00 	mov    0x202a7c(%rip),%r8d        # 604500 <authkey>
  401a84:	eb 06                	jmp    401a8c <notify_server+0x60>
  401a86:	41 b8 ff ff ff ff    	mov    $0xffffffff,%r8d
  401a8c:	85 db                	test   %ebx,%ebx
  401a8e:	74 07                	je     401a97 <notify_server+0x6b>
  401a90:	b9 41 30 40 00       	mov    $0x403041,%ecx
  401a95:	eb 05                	jmp    401a9c <notify_server+0x70>
  401a97:	b9 46 30 40 00       	mov    $0x403046,%ecx
  401a9c:	48 c7 44 24 08 20 45 	movq   $0x604520,0x8(%rsp)
  401aa3:	60 00 
  401aa5:	89 34 24             	mov    %esi,(%rsp)
  401aa8:	8b 15 ba 26 20 00    	mov    0x2026ba(%rip),%edx        # 604168 <target_id>
  401aae:	be 4b 30 40 00       	mov    $0x40304b,%esi
  401ab3:	48 8d bc 24 10 20 00 	lea    0x2010(%rsp),%rdi
  401aba:	00 
  401abb:	b8 00 00 00 00       	mov    $0x0,%eax
  401ac0:	e8 1b f3 ff ff       	callq  400de0 <sprintf@plt>
  401ac5:	83 3d dc 29 20 00 00 	cmpl   $0x0,0x2029dc(%rip)        # 6044a8 <notify>
  401acc:	74 78                	je     401b46 <notify_server+0x11a>
  401ace:	85 db                	test   %ebx,%ebx
  401ad0:	74 68                	je     401b3a <notify_server+0x10e>
  401ad2:	4c 8d 4c 24 10       	lea    0x10(%rsp),%r9
  401ad7:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  401add:	48 8d 8c 24 10 20 00 	lea    0x2010(%rsp),%rcx
  401ae4:	00 
  401ae5:	48 8b 15 84 26 20 00 	mov    0x202684(%rip),%rdx        # 604170 <lab>
  401aec:	48 8b 35 85 26 20 00 	mov    0x202685(%rip),%rsi        # 604178 <course>
  401af3:	48 8b 3d 66 26 20 00 	mov    0x202666(%rip),%rdi        # 604160 <user_id>
  401afa:	e8 94 0f 00 00       	callq  402a93 <driver_post>
  401aff:	85 c0                	test   %eax,%eax
  401b01:	79 1e                	jns    401b21 <notify_server+0xf5>
  401b03:	48 8d 74 24 10       	lea    0x10(%rsp),%rsi
  401b08:	bf 67 30 40 00       	mov    $0x403067,%edi
  401b0d:	b8 00 00 00 00       	mov    $0x0,%eax
  401b12:	e8 69 f1 ff ff       	callq  400c80 <printf@plt>
  401b17:	bf 01 00 00 00       	mov    $0x1,%edi
  401b1c:	e8 cf f2 ff ff       	callq  400df0 <exit@plt>
  401b21:	bf 90 31 40 00       	mov    $0x403190,%edi
  401b26:	e8 25 f1 ff ff       	callq  400c50 <puts@plt>
  401b2b:	bf 73 30 40 00       	mov    $0x403073,%edi
  401b30:	e8 1b f1 ff ff       	callq  400c50 <puts@plt>
  401b35:	e9 85 00 00 00       	jmpq   401bbf <notify_server+0x193>
  401b3a:	bf 7d 30 40 00       	mov    $0x40307d,%edi
  401b3f:	e8 0c f1 ff ff       	callq  400c50 <puts@plt>
  401b44:	eb 79                	jmp    401bbf <notify_server+0x193>
  401b46:	85 db                	test   %ebx,%ebx
  401b48:	74 08                	je     401b52 <notify_server+0x126>
  401b4a:	be 41 30 40 00       	mov    $0x403041,%esi
  401b4f:	90                   	nop
  401b50:	eb 05                	jmp    401b57 <notify_server+0x12b>
  401b52:	be 46 30 40 00       	mov    $0x403046,%esi
  401b57:	bf c8 31 40 00       	mov    $0x4031c8,%edi
  401b5c:	b8 00 00 00 00       	mov    $0x0,%eax
  401b61:	e8 1a f1 ff ff       	callq  400c80 <printf@plt>
  401b66:	48 8b 35 f3 25 20 00 	mov    0x2025f3(%rip),%rsi        # 604160 <user_id>
  401b6d:	bf 84 30 40 00       	mov    $0x403084,%edi
  401b72:	b8 00 00 00 00       	mov    $0x0,%eax
  401b77:	e8 04 f1 ff ff       	callq  400c80 <printf@plt>
  401b7c:	48 8b 35 f5 25 20 00 	mov    0x2025f5(%rip),%rsi        # 604178 <course>
  401b83:	bf 91 30 40 00       	mov    $0x403091,%edi
  401b88:	b8 00 00 00 00       	mov    $0x0,%eax
  401b8d:	e8 ee f0 ff ff       	callq  400c80 <printf@plt>
  401b92:	48 8b 35 d7 25 20 00 	mov    0x2025d7(%rip),%rsi        # 604170 <lab>
  401b99:	bf 9d 30 40 00       	mov    $0x40309d,%edi
  401b9e:	b8 00 00 00 00       	mov    $0x0,%eax
  401ba3:	e8 d8 f0 ff ff       	callq  400c80 <printf@plt>
  401ba8:	48 8d b4 24 10 20 00 	lea    0x2010(%rsp),%rsi
  401baf:	00 
  401bb0:	bf a6 30 40 00       	mov    $0x4030a6,%edi
  401bb5:	b8 00 00 00 00       	mov    $0x0,%eax
  401bba:	e8 c1 f0 ff ff       	callq  400c80 <printf@plt>
  401bbf:	48 81 c4 10 40 00 00 	add    $0x4010,%rsp
  401bc6:	5b                   	pop    %rbx
  401bc7:	f3 c3                	repz retq 

0000000000401bc9 <validate>:
  401bc9:	53                   	push   %rbx
  401bca:	89 fb                	mov    %edi,%ebx
  401bcc:	83 3d 35 29 20 00 00 	cmpl   $0x0,0x202935(%rip)        # 604508 <is_checker>
  401bd3:	74 60                	je     401c35 <validate+0x6c>
  401bd5:	39 3d 21 29 20 00    	cmp    %edi,0x202921(%rip)        # 6044fc <vlevel>
  401bdb:	74 14                	je     401bf1 <validate+0x28>
  401bdd:	bf b2 30 40 00       	mov    $0x4030b2,%edi
  401be2:	e8 69 f0 ff ff       	callq  400c50 <puts@plt>
  401be7:	b8 00 00 00 00       	mov    $0x0,%eax
  401bec:	e8 ba fd ff ff       	callq  4019ab <check_fail>
  401bf1:	8b 35 01 29 20 00    	mov    0x202901(%rip),%esi        # 6044f8 <check_level>
  401bf7:	39 fe                	cmp    %edi,%esi
  401bf9:	74 1b                	je     401c16 <validate+0x4d>
  401bfb:	89 fa                	mov    %edi,%edx
  401bfd:	bf f0 31 40 00       	mov    $0x4031f0,%edi
  401c02:	b8 00 00 00 00       	mov    $0x0,%eax
  401c07:	e8 74 f0 ff ff       	callq  400c80 <printf@plt>
  401c0c:	b8 00 00 00 00       	mov    $0x0,%eax
  401c11:	e8 95 fd ff ff       	callq  4019ab <check_fail>
  401c16:	0f be 35 0b 35 20 00 	movsbl 0x20350b(%rip),%esi        # 605128 <target_prefix>
  401c1d:	b9 20 45 60 00       	mov    $0x604520,%ecx
  401c22:	89 fa                	mov    %edi,%edx
  401c24:	bf d0 30 40 00       	mov    $0x4030d0,%edi
  401c29:	b8 00 00 00 00       	mov    $0x0,%eax
  401c2e:	e8 4d f0 ff ff       	callq  400c80 <printf@plt>
  401c33:	eb 44                	jmp    401c79 <validate+0xb0>
  401c35:	39 3d c1 28 20 00    	cmp    %edi,0x2028c1(%rip)        # 6044fc <vlevel>
  401c3b:	74 18                	je     401c55 <validate+0x8c>
  401c3d:	bf b2 30 40 00       	mov    $0x4030b2,%edi
  401c42:	e8 09 f0 ff ff       	callq  400c50 <puts@plt>
  401c47:	89 de                	mov    %ebx,%esi
  401c49:	bf 00 00 00 00       	mov    $0x0,%edi
  401c4e:	e8 d9 fd ff ff       	callq  401a2c <notify_server>
  401c53:	eb 24                	jmp    401c79 <validate+0xb0>
  401c55:	0f be 15 cc 34 20 00 	movsbl 0x2034cc(%rip),%edx        # 605128 <target_prefix>
  401c5c:	89 fe                	mov    %edi,%esi
  401c5e:	bf 18 32 40 00       	mov    $0x403218,%edi
  401c63:	b8 00 00 00 00       	mov    $0x0,%eax
  401c68:	e8 13 f0 ff ff       	callq  400c80 <printf@plt>
  401c6d:	89 de                	mov    %ebx,%esi
  401c6f:	bf 01 00 00 00       	mov    $0x1,%edi
  401c74:	e8 b3 fd ff ff       	callq  401a2c <notify_server>
  401c79:	5b                   	pop    %rbx
  401c7a:	c3                   	retq   

0000000000401c7b <fail>:
  401c7b:	48 83 ec 08          	sub    $0x8,%rsp
  401c7f:	83 3d 82 28 20 00 00 	cmpl   $0x0,0x202882(%rip)        # 604508 <is_checker>
  401c86:	74 0a                	je     401c92 <fail+0x17>
  401c88:	b8 00 00 00 00       	mov    $0x0,%eax
  401c8d:	e8 19 fd ff ff       	callq  4019ab <check_fail>
  401c92:	89 fe                	mov    %edi,%esi
  401c94:	bf 00 00 00 00       	mov    $0x0,%edi
  401c99:	e8 8e fd ff ff       	callq  401a2c <notify_server>
  401c9e:	48 83 c4 08          	add    $0x8,%rsp
  401ca2:	c3                   	retq   

0000000000401ca3 <bushandler>:
  401ca3:	48 83 ec 08          	sub    $0x8,%rsp
  401ca7:	83 3d 5a 28 20 00 00 	cmpl   $0x0,0x20285a(%rip)        # 604508 <is_checker>
  401cae:	74 14                	je     401cc4 <bushandler+0x21>
  401cb0:	bf e5 30 40 00       	mov    $0x4030e5,%edi
  401cb5:	e8 96 ef ff ff       	callq  400c50 <puts@plt>
  401cba:	b8 00 00 00 00       	mov    $0x0,%eax
  401cbf:	e8 e7 fc ff ff       	callq  4019ab <check_fail>
  401cc4:	bf 50 32 40 00       	mov    $0x403250,%edi
  401cc9:	e8 82 ef ff ff       	callq  400c50 <puts@plt>
  401cce:	bf ef 30 40 00       	mov    $0x4030ef,%edi
  401cd3:	e8 78 ef ff ff       	callq  400c50 <puts@plt>
  401cd8:	be 00 00 00 00       	mov    $0x0,%esi
  401cdd:	bf 00 00 00 00       	mov    $0x0,%edi
  401ce2:	e8 45 fd ff ff       	callq  401a2c <notify_server>
  401ce7:	bf 01 00 00 00       	mov    $0x1,%edi
  401cec:	e8 ff f0 ff ff       	callq  400df0 <exit@plt>

0000000000401cf1 <seghandler>:
  401cf1:	48 83 ec 08          	sub    $0x8,%rsp
  401cf5:	83 3d 0c 28 20 00 00 	cmpl   $0x0,0x20280c(%rip)        # 604508 <is_checker>
  401cfc:	74 14                	je     401d12 <seghandler+0x21>
  401cfe:	bf 05 31 40 00       	mov    $0x403105,%edi
  401d03:	e8 48 ef ff ff       	callq  400c50 <puts@plt>
  401d08:	b8 00 00 00 00       	mov    $0x0,%eax
  401d0d:	e8 99 fc ff ff       	callq  4019ab <check_fail>
  401d12:	bf 70 32 40 00       	mov    $0x403270,%edi
  401d17:	e8 34 ef ff ff       	callq  400c50 <puts@plt>
  401d1c:	bf ef 30 40 00       	mov    $0x4030ef,%edi
  401d21:	e8 2a ef ff ff       	callq  400c50 <puts@plt>
  401d26:	be 00 00 00 00       	mov    $0x0,%esi
  401d2b:	bf 00 00 00 00       	mov    $0x0,%edi
  401d30:	e8 f7 fc ff ff       	callq  401a2c <notify_server>
  401d35:	bf 01 00 00 00       	mov    $0x1,%edi
  401d3a:	e8 b1 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401d3f <illegalhandler>:
  401d3f:	48 83 ec 08          	sub    $0x8,%rsp
  401d43:	83 3d be 27 20 00 00 	cmpl   $0x0,0x2027be(%rip)        # 604508 <is_checker>
  401d4a:	74 14                	je     401d60 <illegalhandler+0x21>
  401d4c:	bf 18 31 40 00       	mov    $0x403118,%edi
  401d51:	e8 fa ee ff ff       	callq  400c50 <puts@plt>
  401d56:	b8 00 00 00 00       	mov    $0x0,%eax
  401d5b:	e8 4b fc ff ff       	callq  4019ab <check_fail>
  401d60:	bf 98 32 40 00       	mov    $0x403298,%edi
  401d65:	e8 e6 ee ff ff       	callq  400c50 <puts@plt>
  401d6a:	bf ef 30 40 00       	mov    $0x4030ef,%edi
  401d6f:	e8 dc ee ff ff       	callq  400c50 <puts@plt>
  401d74:	be 00 00 00 00       	mov    $0x0,%esi
  401d79:	bf 00 00 00 00       	mov    $0x0,%edi
  401d7e:	e8 a9 fc ff ff       	callq  401a2c <notify_server>
  401d83:	bf 01 00 00 00       	mov    $0x1,%edi
  401d88:	e8 63 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401d8d <sigalrmhandler>:
  401d8d:	48 83 ec 08          	sub    $0x8,%rsp
  401d91:	83 3d 70 27 20 00 00 	cmpl   $0x0,0x202770(%rip)        # 604508 <is_checker>
  401d98:	74 14                	je     401dae <sigalrmhandler+0x21>
  401d9a:	bf 2c 31 40 00       	mov    $0x40312c,%edi
  401d9f:	e8 ac ee ff ff       	callq  400c50 <puts@plt>
  401da4:	b8 00 00 00 00       	mov    $0x0,%eax
  401da9:	e8 fd fb ff ff       	callq  4019ab <check_fail>
  401dae:	be 05 00 00 00       	mov    $0x5,%esi
  401db3:	bf c8 32 40 00       	mov    $0x4032c8,%edi
  401db8:	b8 00 00 00 00       	mov    $0x0,%eax
  401dbd:	e8 be ee ff ff       	callq  400c80 <printf@plt>
  401dc2:	be 00 00 00 00       	mov    $0x0,%esi
  401dc7:	bf 00 00 00 00       	mov    $0x0,%edi
  401dcc:	e8 5b fc ff ff       	callq  401a2c <notify_server>
  401dd1:	bf 01 00 00 00       	mov    $0x1,%edi
  401dd6:	e8 15 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401ddb <launch>:
  401ddb:	55                   	push   %rbp
  401ddc:	48 89 e5             	mov    %rsp,%rbp
  401ddf:	48 89 fa             	mov    %rdi,%rdx
  401de2:	48 8d 47 1e          	lea    0x1e(%rdi),%rax
  401de6:	48 83 e0 f0          	and    $0xfffffffffffffff0,%rax
  401dea:	48 29 c4             	sub    %rax,%rsp
  401ded:	48 8d 7c 24 0f       	lea    0xf(%rsp),%rdi
  401df2:	48 83 e7 f0          	and    $0xfffffffffffffff0,%rdi
  401df6:	be f4 00 00 00       	mov    $0xf4,%esi
  401dfb:	e8 90 ee ff ff       	callq  400c90 <memset@plt>
  401e00:	48 8b 05 b9 26 20 00 	mov    0x2026b9(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401e07:	48 39 05 e2 26 20 00 	cmp    %rax,0x2026e2(%rip)        # 6044f0 <infile>
  401e0e:	75 0f                	jne    401e1f <launch+0x44>
  401e10:	bf 34 31 40 00       	mov    $0x403134,%edi
  401e15:	b8 00 00 00 00       	mov    $0x0,%eax
  401e1a:	e8 61 ee ff ff       	callq  400c80 <printf@plt>
  401e1f:	c7 05 d3 26 20 00 00 	movl   $0x0,0x2026d3(%rip)        # 6044fc <vlevel>
  401e26:	00 00 00 
  401e29:	b8 00 00 00 00       	mov    $0x0,%eax
  401e2e:	e8 e7 fa ff ff       	callq  40191a <test>
  401e33:	83 3d ce 26 20 00 00 	cmpl   $0x0,0x2026ce(%rip)        # 604508 <is_checker>
  401e3a:	74 14                	je     401e50 <launch+0x75>
  401e3c:	bf 41 31 40 00       	mov    $0x403141,%edi
  401e41:	e8 0a ee ff ff       	callq  400c50 <puts@plt>
  401e46:	b8 00 00 00 00       	mov    $0x0,%eax
  401e4b:	e8 5b fb ff ff       	callq  4019ab <check_fail>
  401e50:	bf 4c 31 40 00       	mov    $0x40314c,%edi
  401e55:	e8 f6 ed ff ff       	callq  400c50 <puts@plt>
  401e5a:	c9                   	leaveq 
  401e5b:	c3                   	retq   

0000000000401e5c <stable_launch>:
  401e5c:	53                   	push   %rbx
  401e5d:	48 89 3d 84 26 20 00 	mov    %rdi,0x202684(%rip)        # 6044e8 <global_offset>
  401e64:	41 b9 00 00 00 00    	mov    $0x0,%r9d
  401e6a:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  401e70:	b9 32 01 00 00       	mov    $0x132,%ecx
  401e75:	ba 07 00 00 00       	mov    $0x7,%edx
  401e7a:	be 00 00 10 00       	mov    $0x100000,%esi
  401e7f:	bf 00 60 58 55       	mov    $0x55586000,%edi
  401e84:	e8 e7 ed ff ff       	callq  400c70 <mmap@plt>
  401e89:	48 89 c3             	mov    %rax,%rbx
  401e8c:	48 3d 00 60 58 55    	cmp    $0x55586000,%rax
  401e92:	74 32                	je     401ec6 <stable_launch+0x6a>
  401e94:	be 00 00 10 00       	mov    $0x100000,%esi
  401e99:	48 89 c7             	mov    %rax,%rdi
  401e9c:	e8 df ee ff ff       	callq  400d80 <munmap@plt>
  401ea1:	ba 00 60 58 55       	mov    $0x55586000,%edx
  401ea6:	be 00 33 40 00       	mov    $0x403300,%esi
  401eab:	48 8b 3d 1e 26 20 00 	mov    0x20261e(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401eb2:	b8 00 00 00 00       	mov    $0x0,%eax
  401eb7:	e8 44 ee ff ff       	callq  400d00 <fprintf@plt>
  401ebc:	bf 01 00 00 00       	mov    $0x1,%edi
  401ec1:	e8 2a ef ff ff       	callq  400df0 <exit@plt>
  401ec6:	48 8d 90 f8 ff 0f 00 	lea    0xffff8(%rax),%rdx
  401ecd:	48 89 15 5c 32 20 00 	mov    %rdx,0x20325c(%rip)        # 605130 <stack_top>
  401ed4:	48 89 e0             	mov    %rsp,%rax
  401ed7:	48 89 d4             	mov    %rdx,%rsp
  401eda:	48 89 c2             	mov    %rax,%rdx
  401edd:	48 89 15 fc 25 20 00 	mov    %rdx,0x2025fc(%rip)        # 6044e0 <global_save_stack>
  401ee4:	48 8b 3d fd 25 20 00 	mov    0x2025fd(%rip),%rdi        # 6044e8 <global_offset>
  401eeb:	e8 eb fe ff ff       	callq  401ddb <launch>
  401ef0:	48 8b 05 e9 25 20 00 	mov    0x2025e9(%rip),%rax        # 6044e0 <global_save_stack>
  401ef7:	48 89 c4             	mov    %rax,%rsp
  401efa:	be 00 00 10 00       	mov    $0x100000,%esi
  401eff:	48 89 df             	mov    %rbx,%rdi
  401f02:	e8 79 ee ff ff       	callq  400d80 <munmap@plt>
  401f07:	5b                   	pop    %rbx
  401f08:	c3                   	retq   
  401f09:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000401f10 <rio_readinitb>:
  401f10:	89 37                	mov    %esi,(%rdi)
  401f12:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
  401f19:	48 8d 47 10          	lea    0x10(%rdi),%rax
  401f1d:	48 89 47 08          	mov    %rax,0x8(%rdi)
  401f21:	c3                   	retq   

0000000000401f22 <sigalrm_handler>:
  401f22:	48 83 ec 08          	sub    $0x8,%rsp
  401f26:	ba 00 00 00 00       	mov    $0x0,%edx
  401f2b:	be 40 33 40 00       	mov    $0x403340,%esi
  401f30:	48 8b 3d 99 25 20 00 	mov    0x202599(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401f37:	b8 00 00 00 00       	mov    $0x0,%eax
  401f3c:	e8 bf ed ff ff       	callq  400d00 <fprintf@plt>
  401f41:	bf 01 00 00 00       	mov    $0x1,%edi
  401f46:	e8 a5 ee ff ff       	callq  400df0 <exit@plt>

0000000000401f4b <urlencode>:
  401f4b:	41 54                	push   %r12
  401f4d:	55                   	push   %rbp
  401f4e:	53                   	push   %rbx
  401f4f:	48 83 ec 10          	sub    $0x10,%rsp
  401f53:	48 89 fb             	mov    %rdi,%rbx
  401f56:	48 89 f5             	mov    %rsi,%rbp
  401f59:	b8 00 00 00 00       	mov    $0x0,%eax
  401f5e:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  401f65:	f2 ae                	repnz scas %es:(%rdi),%al
  401f67:	48 f7 d1             	not    %rcx
  401f6a:	8d 41 ff             	lea    -0x1(%rcx),%eax
  401f6d:	e9 93 00 00 00       	jmpq   402005 <urlencode+0xba>
  401f72:	0f b6 13             	movzbl (%rbx),%edx
  401f75:	80 fa 2a             	cmp    $0x2a,%dl
  401f78:	0f 94 c1             	sete   %cl
  401f7b:	80 fa 2d             	cmp    $0x2d,%dl
  401f7e:	0f 94 c0             	sete   %al
  401f81:	08 c1                	or     %al,%cl
  401f83:	75 1f                	jne    401fa4 <urlencode+0x59>
  401f85:	80 fa 2e             	cmp    $0x2e,%dl
  401f88:	74 1a                	je     401fa4 <urlencode+0x59>
  401f8a:	80 fa 5f             	cmp    $0x5f,%dl
  401f8d:	74 15                	je     401fa4 <urlencode+0x59>
  401f8f:	8d 42 d0             	lea    -0x30(%rdx),%eax
  401f92:	3c 09                	cmp    $0x9,%al
  401f94:	76 0e                	jbe    401fa4 <urlencode+0x59>
  401f96:	8d 42 bf             	lea    -0x41(%rdx),%eax
  401f99:	3c 19                	cmp    $0x19,%al
  401f9b:	76 07                	jbe    401fa4 <urlencode+0x59>
  401f9d:	8d 42 9f             	lea    -0x61(%rdx),%eax
  401fa0:	3c 19                	cmp    $0x19,%al
  401fa2:	77 09                	ja     401fad <urlencode+0x62>
  401fa4:	88 55 00             	mov    %dl,0x0(%rbp)
  401fa7:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401fab:	eb 51                	jmp    401ffe <urlencode+0xb3>
  401fad:	80 fa 20             	cmp    $0x20,%dl
  401fb0:	75 0a                	jne    401fbc <urlencode+0x71>
  401fb2:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  401fb6:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401fba:	eb 42                	jmp    401ffe <urlencode+0xb3>
  401fbc:	8d 42 e0             	lea    -0x20(%rdx),%eax
  401fbf:	3c 5f                	cmp    $0x5f,%al
  401fc1:	0f 96 c1             	setbe  %cl
  401fc4:	80 fa 09             	cmp    $0x9,%dl
  401fc7:	0f 94 c0             	sete   %al
  401fca:	08 c1                	or     %al,%cl
  401fcc:	74 45                	je     402013 <urlencode+0xc8>
  401fce:	0f b6 d2             	movzbl %dl,%edx
  401fd1:	be d8 33 40 00       	mov    $0x4033d8,%esi
  401fd6:	48 89 e7             	mov    %rsp,%rdi
  401fd9:	b8 00 00 00 00       	mov    $0x0,%eax
  401fde:	e8 fd ed ff ff       	callq  400de0 <sprintf@plt>
  401fe3:	0f b6 04 24          	movzbl (%rsp),%eax
  401fe7:	88 45 00             	mov    %al,0x0(%rbp)
  401fea:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
  401fef:	88 45 01             	mov    %al,0x1(%rbp)
  401ff2:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
  401ff7:	88 45 02             	mov    %al,0x2(%rbp)
  401ffa:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  401ffe:	48 83 c3 01          	add    $0x1,%rbx
  402002:	44 89 e0             	mov    %r12d,%eax
  402005:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
  402009:	85 c0                	test   %eax,%eax
  40200b:	0f 85 61 ff ff ff    	jne    401f72 <urlencode+0x27>
  402011:	eb 05                	jmp    402018 <urlencode+0xcd>
  402013:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402018:	48 83 c4 10          	add    $0x10,%rsp
  40201c:	5b                   	pop    %rbx
  40201d:	5d                   	pop    %rbp
  40201e:	41 5c                	pop    %r12
  402020:	c3                   	retq   

0000000000402021 <rio_writen>:
  402021:	41 55                	push   %r13
  402023:	41 54                	push   %r12
  402025:	55                   	push   %rbp
  402026:	53                   	push   %rbx
  402027:	48 83 ec 08          	sub    $0x8,%rsp
  40202b:	41 89 fc             	mov    %edi,%r12d
  40202e:	48 89 f5             	mov    %rsi,%rbp
  402031:	49 89 d5             	mov    %rdx,%r13
  402034:	48 89 d3             	mov    %rdx,%rbx
  402037:	eb 28                	jmp    402061 <rio_writen+0x40>
  402039:	48 89 da             	mov    %rbx,%rdx
  40203c:	48 89 ee             	mov    %rbp,%rsi
  40203f:	44 89 e7             	mov    %r12d,%edi
  402042:	e8 19 ec ff ff       	callq  400c60 <write@plt>
  402047:	48 85 c0             	test   %rax,%rax
  40204a:	7f 0f                	jg     40205b <rio_writen+0x3a>
  40204c:	e8 bf eb ff ff       	callq  400c10 <__errno_location@plt>
  402051:	83 38 04             	cmpl   $0x4,(%rax)
  402054:	75 15                	jne    40206b <rio_writen+0x4a>
  402056:	b8 00 00 00 00       	mov    $0x0,%eax
  40205b:	48 29 c3             	sub    %rax,%rbx
  40205e:	48 01 c5             	add    %rax,%rbp
  402061:	48 85 db             	test   %rbx,%rbx
  402064:	75 d3                	jne    402039 <rio_writen+0x18>
  402066:	4c 89 e8             	mov    %r13,%rax
  402069:	eb 07                	jmp    402072 <rio_writen+0x51>
  40206b:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402072:	48 83 c4 08          	add    $0x8,%rsp
  402076:	5b                   	pop    %rbx
  402077:	5d                   	pop    %rbp
  402078:	41 5c                	pop    %r12
  40207a:	41 5d                	pop    %r13
  40207c:	c3                   	retq   

000000000040207d <rio_read>:
  40207d:	41 56                	push   %r14
  40207f:	41 55                	push   %r13
  402081:	41 54                	push   %r12
  402083:	55                   	push   %rbp
  402084:	53                   	push   %rbx
  402085:	48 89 fb             	mov    %rdi,%rbx
  402088:	49 89 f6             	mov    %rsi,%r14
  40208b:	49 89 d5             	mov    %rdx,%r13
  40208e:	4c 8d 67 10          	lea    0x10(%rdi),%r12
  402092:	eb 2a                	jmp    4020be <rio_read+0x41>
  402094:	ba 00 20 00 00       	mov    $0x2000,%edx
  402099:	4c 89 e6             	mov    %r12,%rsi
  40209c:	8b 3b                	mov    (%rbx),%edi
  40209e:	e8 1d ec ff ff       	callq  400cc0 <read@plt>
  4020a3:	89 43 04             	mov    %eax,0x4(%rbx)
  4020a6:	85 c0                	test   %eax,%eax
  4020a8:	79 0c                	jns    4020b6 <rio_read+0x39>
  4020aa:	e8 61 eb ff ff       	callq  400c10 <__errno_location@plt>
  4020af:	83 38 04             	cmpl   $0x4,(%rax)
  4020b2:	74 0a                	je     4020be <rio_read+0x41>
  4020b4:	eb 37                	jmp    4020ed <rio_read+0x70>
  4020b6:	85 c0                	test   %eax,%eax
  4020b8:	74 3c                	je     4020f6 <rio_read+0x79>
  4020ba:	4c 89 63 08          	mov    %r12,0x8(%rbx)
  4020be:	8b 6b 04             	mov    0x4(%rbx),%ebp
  4020c1:	85 ed                	test   %ebp,%ebp
  4020c3:	7e cf                	jle    402094 <rio_read+0x17>
  4020c5:	89 e8                	mov    %ebp,%eax
  4020c7:	4c 39 e8             	cmp    %r13,%rax
  4020ca:	72 03                	jb     4020cf <rio_read+0x52>
  4020cc:	44 89 ed             	mov    %r13d,%ebp
  4020cf:	4c 63 e5             	movslq %ebp,%r12
  4020d2:	48 8b 73 08          	mov    0x8(%rbx),%rsi
  4020d6:	4c 89 e2             	mov    %r12,%rdx
  4020d9:	4c 89 f7             	mov    %r14,%rdi
  4020dc:	e8 4f ec ff ff       	callq  400d30 <memcpy@plt>
  4020e1:	4c 01 63 08          	add    %r12,0x8(%rbx)
  4020e5:	29 6b 04             	sub    %ebp,0x4(%rbx)
  4020e8:	4c 89 e0             	mov    %r12,%rax
  4020eb:	eb 0e                	jmp    4020fb <rio_read+0x7e>
  4020ed:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  4020f4:	eb 05                	jmp    4020fb <rio_read+0x7e>
  4020f6:	b8 00 00 00 00       	mov    $0x0,%eax
  4020fb:	5b                   	pop    %rbx
  4020fc:	5d                   	pop    %rbp
  4020fd:	41 5c                	pop    %r12
  4020ff:	41 5d                	pop    %r13
  402101:	41 5e                	pop    %r14
  402103:	c3                   	retq   

0000000000402104 <rio_readlineb>:
  402104:	41 55                	push   %r13
  402106:	41 54                	push   %r12
  402108:	55                   	push   %rbp
  402109:	53                   	push   %rbx
  40210a:	48 83 ec 18          	sub    $0x18,%rsp
  40210e:	49 89 fd             	mov    %rdi,%r13
  402111:	48 89 f5             	mov    %rsi,%rbp
  402114:	49 89 d4             	mov    %rdx,%r12
  402117:	bb 01 00 00 00       	mov    $0x1,%ebx
  40211c:	eb 3d                	jmp    40215b <rio_readlineb+0x57>
  40211e:	ba 01 00 00 00       	mov    $0x1,%edx
  402123:	48 8d 74 24 0f       	lea    0xf(%rsp),%rsi
  402128:	4c 89 ef             	mov    %r13,%rdi
  40212b:	e8 4d ff ff ff       	callq  40207d <rio_read>
  402130:	83 f8 01             	cmp    $0x1,%eax
  402133:	75 12                	jne    402147 <rio_readlineb+0x43>
  402135:	48 8d 55 01          	lea    0x1(%rbp),%rdx
  402139:	0f b6 44 24 0f       	movzbl 0xf(%rsp),%eax
  40213e:	88 45 00             	mov    %al,0x0(%rbp)
  402141:	3c 0a                	cmp    $0xa,%al
  402143:	75 0f                	jne    402154 <rio_readlineb+0x50>
  402145:	eb 1b                	jmp    402162 <rio_readlineb+0x5e>
  402147:	85 c0                	test   %eax,%eax
  402149:	75 23                	jne    40216e <rio_readlineb+0x6a>
  40214b:	48 83 fb 01          	cmp    $0x1,%rbx
  40214f:	90                   	nop
  402150:	75 13                	jne    402165 <rio_readlineb+0x61>
  402152:	eb 23                	jmp    402177 <rio_readlineb+0x73>
  402154:	48 83 c3 01          	add    $0x1,%rbx
  402158:	48 89 d5             	mov    %rdx,%rbp
  40215b:	4c 39 e3             	cmp    %r12,%rbx
  40215e:	72 be                	jb     40211e <rio_readlineb+0x1a>
  402160:	eb 03                	jmp    402165 <rio_readlineb+0x61>
  402162:	48 89 d5             	mov    %rdx,%rbp
  402165:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
  402169:	48 89 d8             	mov    %rbx,%rax
  40216c:	eb 0e                	jmp    40217c <rio_readlineb+0x78>
  40216e:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402175:	eb 05                	jmp    40217c <rio_readlineb+0x78>
  402177:	b8 00 00 00 00       	mov    $0x0,%eax
  40217c:	48 83 c4 18          	add    $0x18,%rsp
  402180:	5b                   	pop    %rbx
  402181:	5d                   	pop    %rbp
  402182:	41 5c                	pop    %r12
  402184:	41 5d                	pop    %r13
  402186:	c3                   	retq   

0000000000402187 <submitr>:
  402187:	41 57                	push   %r15
  402189:	41 56                	push   %r14
  40218b:	41 55                	push   %r13
  40218d:	41 54                	push   %r12
  40218f:	55                   	push   %rbp
  402190:	53                   	push   %rbx
  402191:	48 81 ec 48 a0 00 00 	sub    $0xa048,%rsp
  402198:	49 89 fc             	mov    %rdi,%r12
  40219b:	89 74 24 04          	mov    %esi,0x4(%rsp)
  40219f:	49 89 d7             	mov    %rdx,%r15
  4021a2:	49 89 ce             	mov    %rcx,%r14
  4021a5:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
  4021aa:	4d 89 cd             	mov    %r9,%r13
  4021ad:	48 8b 9c 24 80 a0 00 	mov    0xa080(%rsp),%rbx
  4021b4:	00 
  4021b5:	c7 84 24 1c 20 00 00 	movl   $0x0,0x201c(%rsp)
  4021bc:	00 00 00 00 
  4021c0:	ba 00 00 00 00       	mov    $0x0,%edx
  4021c5:	be 01 00 00 00       	mov    $0x1,%esi
  4021ca:	bf 02 00 00 00       	mov    $0x2,%edi
  4021cf:	e8 3c ec ff ff       	callq  400e10 <socket@plt>
  4021d4:	89 c5                	mov    %eax,%ebp
  4021d6:	85 c0                	test   %eax,%eax
  4021d8:	79 4e                	jns    402228 <submitr+0xa1>
  4021da:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4021e1:	3a 20 43 
  4021e4:	48 89 03             	mov    %rax,(%rbx)
  4021e7:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4021ee:	20 75 6e 
  4021f1:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4021f5:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4021fc:	74 6f 20 
  4021ff:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402203:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  40220a:	65 20 73 
  40220d:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402211:	c7 43 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbx)
  402218:	66 c7 43 24 74 00    	movw   $0x74,0x24(%rbx)
  40221e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402223:	e9 68 06 00 00       	jmpq   402890 <submitr+0x709>
  402228:	4c 89 e7             	mov    %r12,%rdi
  40222b:	e8 c0 ea ff ff       	callq  400cf0 <gethostbyname@plt>
  402230:	48 85 c0             	test   %rax,%rax
  402233:	75 67                	jne    40229c <submitr+0x115>
  402235:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40223c:	3a 20 44 
  40223f:	48 89 03             	mov    %rax,(%rbx)
  402242:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  402249:	20 75 6e 
  40224c:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402250:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402257:	74 6f 20 
  40225a:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40225e:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  402265:	76 65 20 
  402268:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40226c:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  402273:	72 20 61 
  402276:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40227a:	c7 43 28 64 64 72 65 	movl   $0x65726464,0x28(%rbx)
  402281:	66 c7 43 2c 73 73    	movw   $0x7373,0x2c(%rbx)
  402287:	c6 43 2e 00          	movb   $0x0,0x2e(%rbx)
  40228b:	89 ef                	mov    %ebp,%edi
  40228d:	e8 1e ea ff ff       	callq  400cb0 <close@plt>
  402292:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402297:	e9 f4 05 00 00       	jmpq   402890 <submitr+0x709>
  40229c:	48 c7 84 24 30 a0 00 	movq   $0x0,0xa030(%rsp)
  4022a3:	00 00 00 00 00 
  4022a8:	48 c7 84 24 38 a0 00 	movq   $0x0,0xa038(%rsp)
  4022af:	00 00 00 00 00 
  4022b4:	66 c7 84 24 30 a0 00 	movw   $0x2,0xa030(%rsp)
  4022bb:	00 02 00 
  4022be:	48 8b 48 18          	mov    0x18(%rax),%rcx
  4022c2:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4022c6:	48 8d b4 24 34 a0 00 	lea    0xa034(%rsp),%rsi
  4022cd:	00 
  4022ce:	48 8b 39             	mov    (%rcx),%rdi
  4022d1:	e8 ba ea ff ff       	callq  400d90 <bcopy@plt>
  4022d6:	0f b7 44 24 04       	movzwl 0x4(%rsp),%eax
  4022db:	66 c1 c8 08          	ror    $0x8,%ax
  4022df:	66 89 84 24 32 a0 00 	mov    %ax,0xa032(%rsp)
  4022e6:	00 
  4022e7:	ba 10 00 00 00       	mov    $0x10,%edx
  4022ec:	48 8d b4 24 30 a0 00 	lea    0xa030(%rsp),%rsi
  4022f3:	00 
  4022f4:	89 ef                	mov    %ebp,%edi
  4022f6:	e8 05 eb ff ff       	callq  400e00 <connect@plt>
  4022fb:	85 c0                	test   %eax,%eax
  4022fd:	79 59                	jns    402358 <submitr+0x1d1>
  4022ff:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  402306:	3a 20 55 
  402309:	48 89 03             	mov    %rax,(%rbx)
  40230c:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  402313:	20 74 6f 
  402316:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40231a:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402321:	65 63 74 
  402324:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402328:	48 b8 20 74 6f 20 74 	movabs $0x20656874206f7420,%rax
  40232f:	68 65 20 
  402332:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402336:	c7 43 20 73 65 72 76 	movl   $0x76726573,0x20(%rbx)
  40233d:	66 c7 43 24 65 72    	movw   $0x7265,0x24(%rbx)
  402343:	c6 43 26 00          	movb   $0x0,0x26(%rbx)
  402347:	89 ef                	mov    %ebp,%edi
  402349:	e8 62 e9 ff ff       	callq  400cb0 <close@plt>
  40234e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402353:	e9 38 05 00 00       	jmpq   402890 <submitr+0x709>
  402358:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  40235f:	4c 89 ef             	mov    %r13,%rdi
  402362:	b8 00 00 00 00       	mov    $0x0,%eax
  402367:	48 89 d1             	mov    %rdx,%rcx
  40236a:	f2 ae                	repnz scas %es:(%rdi),%al
  40236c:	48 f7 d1             	not    %rcx
  40236f:	48 89 ce             	mov    %rcx,%rsi
  402372:	4c 89 ff             	mov    %r15,%rdi
  402375:	48 89 d1             	mov    %rdx,%rcx
  402378:	f2 ae                	repnz scas %es:(%rdi),%al
  40237a:	48 f7 d1             	not    %rcx
  40237d:	49 89 c8             	mov    %rcx,%r8
  402380:	4c 89 f7             	mov    %r14,%rdi
  402383:	48 89 d1             	mov    %rdx,%rcx
  402386:	f2 ae                	repnz scas %es:(%rdi),%al
  402388:	49 29 c8             	sub    %rcx,%r8
  40238b:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  402390:	48 89 d1             	mov    %rdx,%rcx
  402393:	f2 ae                	repnz scas %es:(%rdi),%al
  402395:	49 29 c8             	sub    %rcx,%r8
  402398:	48 8d 44 76 fd       	lea    -0x3(%rsi,%rsi,2),%rax
  40239d:	49 8d 44 00 7b       	lea    0x7b(%r8,%rax,1),%rax
  4023a2:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  4023a8:	76 72                	jbe    40241c <submitr+0x295>
  4023aa:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  4023b1:	3a 20 52 
  4023b4:	48 89 03             	mov    %rax,(%rbx)
  4023b7:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  4023be:	20 73 74 
  4023c1:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4023c5:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  4023cc:	74 6f 6f 
  4023cf:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4023d3:	48 b8 20 6c 61 72 67 	movabs $0x202e656772616c20,%rax
  4023da:	65 2e 20 
  4023dd:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4023e1:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  4023e8:	61 73 65 
  4023eb:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4023ef:	48 b8 20 53 55 42 4d 	movabs $0x5254494d42555320,%rax
  4023f6:	49 54 52 
  4023f9:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4023fd:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  402404:	55 46 00 
  402407:	48 89 43 30          	mov    %rax,0x30(%rbx)
  40240b:	89 ef                	mov    %ebp,%edi
  40240d:	e8 9e e8 ff ff       	callq  400cb0 <close@plt>
  402412:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402417:	e9 74 04 00 00       	jmpq   402890 <submitr+0x709>
  40241c:	48 8d b4 24 20 40 00 	lea    0x4020(%rsp),%rsi
  402423:	00 
  402424:	b9 00 04 00 00       	mov    $0x400,%ecx
  402429:	b8 00 00 00 00       	mov    $0x0,%eax
  40242e:	48 89 f7             	mov    %rsi,%rdi
  402431:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  402434:	4c 89 ef             	mov    %r13,%rdi
  402437:	e8 0f fb ff ff       	callq  401f4b <urlencode>
  40243c:	85 c0                	test   %eax,%eax
  40243e:	0f 89 8a 00 00 00    	jns    4024ce <submitr+0x347>
  402444:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  40244b:	3a 20 52 
  40244e:	48 89 03             	mov    %rax,(%rbx)
  402451:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  402458:	20 73 74 
  40245b:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40245f:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  402466:	63 6f 6e 
  402469:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40246d:	48 b8 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rax
  402474:	20 61 6e 
  402477:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40247b:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  402482:	67 61 6c 
  402485:	48 89 43 20          	mov    %rax,0x20(%rbx)
  402489:	48 b8 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rax
  402490:	6e 70 72 
  402493:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402497:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  40249e:	6c 65 20 
  4024a1:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4024a5:	48 b8 63 68 61 72 61 	movabs $0x6574636172616863,%rax
  4024ac:	63 74 65 
  4024af:	48 89 43 38          	mov    %rax,0x38(%rbx)
  4024b3:	66 c7 43 40 72 2e    	movw   $0x2e72,0x40(%rbx)
  4024b9:	c6 43 42 00          	movb   $0x0,0x42(%rbx)
  4024bd:	89 ef                	mov    %ebp,%edi
  4024bf:	e8 ec e7 ff ff       	callq  400cb0 <close@plt>
  4024c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4024c9:	e9 c2 03 00 00       	jmpq   402890 <submitr+0x709>
  4024ce:	4d 89 e1             	mov    %r12,%r9
  4024d1:	4c 8d 84 24 20 40 00 	lea    0x4020(%rsp),%r8
  4024d8:	00 
  4024d9:	4c 89 f9             	mov    %r15,%rcx
  4024dc:	4c 89 f2             	mov    %r14,%rdx
  4024df:	be 68 33 40 00       	mov    $0x403368,%esi
  4024e4:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  4024eb:	00 
  4024ec:	b8 00 00 00 00       	mov    $0x0,%eax
  4024f1:	e8 ea e8 ff ff       	callq  400de0 <sprintf@plt>
  4024f6:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  4024fd:	00 
  4024fe:	b8 00 00 00 00       	mov    $0x0,%eax
  402503:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  40250a:	f2 ae                	repnz scas %es:(%rdi),%al
  40250c:	48 f7 d1             	not    %rcx
  40250f:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
  402513:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40251a:	00 
  40251b:	89 ef                	mov    %ebp,%edi
  40251d:	e8 ff fa ff ff       	callq  402021 <rio_writen>
  402522:	48 85 c0             	test   %rax,%rax
  402525:	79 6e                	jns    402595 <submitr+0x40e>
  402527:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40252e:	3a 20 43 
  402531:	48 89 03             	mov    %rax,(%rbx)
  402534:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40253b:	20 75 6e 
  40253e:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402542:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402549:	74 6f 20 
  40254c:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402550:	48 b8 77 72 69 74 65 	movabs $0x6f74206574697277,%rax
  402557:	20 74 6f 
  40255a:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40255e:	48 b8 20 74 68 65 20 	movabs $0x7365722065687420,%rax
  402565:	72 65 73 
  402568:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40256c:	48 b8 75 6c 74 20 73 	movabs $0x7672657320746c75,%rax
  402573:	65 72 76 
  402576:	48 89 43 28          	mov    %rax,0x28(%rbx)
  40257a:	66 c7 43 30 65 72    	movw   $0x7265,0x30(%rbx)
  402580:	c6 43 32 00          	movb   $0x0,0x32(%rbx)
  402584:	89 ef                	mov    %ebp,%edi
  402586:	e8 25 e7 ff ff       	callq  400cb0 <close@plt>
  40258b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402590:	e9 fb 02 00 00       	jmpq   402890 <submitr+0x709>
  402595:	89 ee                	mov    %ebp,%esi
  402597:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  40259e:	00 
  40259f:	e8 6c f9 ff ff       	callq  401f10 <rio_readinitb>
  4025a4:	ba 00 20 00 00       	mov    $0x2000,%edx
  4025a9:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  4025b0:	00 
  4025b1:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  4025b8:	00 
  4025b9:	e8 46 fb ff ff       	callq  402104 <rio_readlineb>
  4025be:	48 85 c0             	test   %rax,%rax
  4025c1:	7f 7d                	jg     402640 <submitr+0x4b9>
  4025c3:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4025ca:	3a 20 43 
  4025cd:	48 89 03             	mov    %rax,(%rbx)
  4025d0:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4025d7:	20 75 6e 
  4025da:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4025de:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4025e5:	74 6f 20 
  4025e8:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4025ec:	48 b8 72 65 61 64 20 	movabs $0x7269662064616572,%rax
  4025f3:	66 69 72 
  4025f6:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4025fa:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  402601:	61 64 65 
  402604:	48 89 43 20          	mov    %rax,0x20(%rbx)
  402608:	48 b8 72 20 66 72 6f 	movabs $0x72206d6f72662072,%rax
  40260f:	6d 20 72 
  402612:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402616:	48 b8 65 73 75 6c 74 	movabs $0x657320746c757365,%rax
  40261d:	20 73 65 
  402620:	48 89 43 30          	mov    %rax,0x30(%rbx)
  402624:	c7 43 38 72 76 65 72 	movl   $0x72657672,0x38(%rbx)
  40262b:	c6 43 3c 00          	movb   $0x0,0x3c(%rbx)
  40262f:	89 ef                	mov    %ebp,%edi
  402631:	e8 7a e6 ff ff       	callq  400cb0 <close@plt>
  402636:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40263b:	e9 50 02 00 00       	jmpq   402890 <submitr+0x709>
  402640:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
  402645:	48 8d 8c 24 1c 20 00 	lea    0x201c(%rsp),%rcx
  40264c:	00 
  40264d:	48 8d 94 24 20 20 00 	lea    0x2020(%rsp),%rdx
  402654:	00 
  402655:	be df 33 40 00       	mov    $0x4033df,%esi
  40265a:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  402661:	00 
  402662:	b8 00 00 00 00       	mov    $0x0,%eax
  402667:	e8 04 e7 ff ff       	callq  400d70 <__isoc99_sscanf@plt>
  40266c:	e9 98 00 00 00       	jmpq   402709 <submitr+0x582>
  402671:	ba 00 20 00 00       	mov    $0x2000,%edx
  402676:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40267d:	00 
  40267e:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  402685:	00 
  402686:	e8 79 fa ff ff       	callq  402104 <rio_readlineb>
  40268b:	48 85 c0             	test   %rax,%rax
  40268e:	7f 79                	jg     402709 <submitr+0x582>
  402690:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402697:	3a 20 43 
  40269a:	48 89 03             	mov    %rax,(%rbx)
  40269d:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4026a4:	20 75 6e 
  4026a7:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4026ab:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4026b2:	74 6f 20 
  4026b5:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4026b9:	48 b8 72 65 61 64 20 	movabs $0x6165682064616572,%rax
  4026c0:	68 65 61 
  4026c3:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4026c7:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  4026ce:	66 72 6f 
  4026d1:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4026d5:	48 b8 6d 20 74 68 65 	movabs $0x657220656874206d,%rax
  4026dc:	20 72 65 
  4026df:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4026e3:	48 b8 73 75 6c 74 20 	movabs $0x72657320746c7573,%rax
  4026ea:	73 65 72 
  4026ed:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4026f1:	c7 43 38 76 65 72 00 	movl   $0x726576,0x38(%rbx)
  4026f8:	89 ef                	mov    %ebp,%edi
  4026fa:	e8 b1 e5 ff ff       	callq  400cb0 <close@plt>
  4026ff:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402704:	e9 87 01 00 00       	jmpq   402890 <submitr+0x709>
  402709:	0f b6 84 24 20 60 00 	movzbl 0x6020(%rsp),%eax
  402710:	00 
  402711:	83 e8 0d             	sub    $0xd,%eax
  402714:	75 15                	jne    40272b <submitr+0x5a4>
  402716:	0f b6 84 24 21 60 00 	movzbl 0x6021(%rsp),%eax
  40271d:	00 
  40271e:	83 e8 0a             	sub    $0xa,%eax
  402721:	75 08                	jne    40272b <submitr+0x5a4>
  402723:	0f b6 84 24 22 60 00 	movzbl 0x6022(%rsp),%eax
  40272a:	00 
  40272b:	85 c0                	test   %eax,%eax
  40272d:	0f 85 3e ff ff ff    	jne    402671 <submitr+0x4ea>
  402733:	ba 00 20 00 00       	mov    $0x2000,%edx
  402738:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40273f:	00 
  402740:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  402747:	00 
  402748:	e8 b7 f9 ff ff       	callq  402104 <rio_readlineb>
  40274d:	48 85 c0             	test   %rax,%rax
  402750:	0f 8f 83 00 00 00    	jg     4027d9 <submitr+0x652>
  402756:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40275d:	3a 20 43 
  402760:	48 89 03             	mov    %rax,(%rbx)
  402763:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40276a:	20 75 6e 
  40276d:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402771:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402778:	74 6f 20 
  40277b:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40277f:	48 b8 72 65 61 64 20 	movabs $0x6174732064616572,%rax
  402786:	73 74 61 
  402789:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40278d:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  402794:	65 73 73 
  402797:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40279b:	48 b8 61 67 65 20 66 	movabs $0x6d6f726620656761,%rax
  4027a2:	72 6f 6d 
  4027a5:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4027a9:	48 b8 20 72 65 73 75 	movabs $0x20746c7573657220,%rax
  4027b0:	6c 74 20 
  4027b3:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4027b7:	c7 43 38 73 65 72 76 	movl   $0x76726573,0x38(%rbx)
  4027be:	66 c7 43 3c 65 72    	movw   $0x7265,0x3c(%rbx)
  4027c4:	c6 43 3e 00          	movb   $0x0,0x3e(%rbx)
  4027c8:	89 ef                	mov    %ebp,%edi
  4027ca:	e8 e1 e4 ff ff       	callq  400cb0 <close@plt>
  4027cf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4027d4:	e9 b7 00 00 00       	jmpq   402890 <submitr+0x709>
  4027d9:	8b 94 24 1c 20 00 00 	mov    0x201c(%rsp),%edx
  4027e0:	81 fa c8 00 00 00    	cmp    $0xc8,%edx
  4027e6:	74 28                	je     402810 <submitr+0x689>
  4027e8:	48 8d 4c 24 10       	lea    0x10(%rsp),%rcx
  4027ed:	be a8 33 40 00       	mov    $0x4033a8,%esi
  4027f2:	48 89 df             	mov    %rbx,%rdi
  4027f5:	b8 00 00 00 00       	mov    $0x0,%eax
  4027fa:	e8 e1 e5 ff ff       	callq  400de0 <sprintf@plt>
  4027ff:	89 ef                	mov    %ebp,%edi
  402801:	e8 aa e4 ff ff       	callq  400cb0 <close@plt>
  402806:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40280b:	e9 80 00 00 00       	jmpq   402890 <submitr+0x709>
  402810:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  402817:	00 
  402818:	48 89 df             	mov    %rbx,%rdi
  40281b:	e8 20 e4 ff ff       	callq  400c40 <strcpy@plt>
  402820:	89 ef                	mov    %ebp,%edi
  402822:	e8 89 e4 ff ff       	callq  400cb0 <close@plt>
  402827:	0f b6 03             	movzbl (%rbx),%eax
  40282a:	83 e8 4f             	sub    $0x4f,%eax
  40282d:	75 18                	jne    402847 <submitr+0x6c0>
  40282f:	0f b6 53 01          	movzbl 0x1(%rbx),%edx
  402833:	83 ea 4b             	sub    $0x4b,%edx
  402836:	75 11                	jne    402849 <submitr+0x6c2>
  402838:	0f b6 53 02          	movzbl 0x2(%rbx),%edx
  40283c:	83 ea 0a             	sub    $0xa,%edx
  40283f:	75 08                	jne    402849 <submitr+0x6c2>
  402841:	0f b6 53 03          	movzbl 0x3(%rbx),%edx
  402845:	eb 02                	jmp    402849 <submitr+0x6c2>
  402847:	89 c2                	mov    %eax,%edx
  402849:	85 d2                	test   %edx,%edx
  40284b:	74 30                	je     40287d <submitr+0x6f6>
  40284d:	bf f0 33 40 00       	mov    $0x4033f0,%edi
  402852:	b9 05 00 00 00       	mov    $0x5,%ecx
  402857:	48 89 de             	mov    %rbx,%rsi
  40285a:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  40285c:	0f 97 c1             	seta   %cl
  40285f:	0f 92 c2             	setb   %dl
  402862:	38 d1                	cmp    %dl,%cl
  402864:	74 1e                	je     402884 <submitr+0x6fd>
  402866:	85 c0                	test   %eax,%eax
  402868:	75 0d                	jne    402877 <submitr+0x6f0>
  40286a:	0f b6 43 01          	movzbl 0x1(%rbx),%eax
  40286e:	83 e8 4b             	sub    $0x4b,%eax
  402871:	75 04                	jne    402877 <submitr+0x6f0>
  402873:	0f b6 43 02          	movzbl 0x2(%rbx),%eax
  402877:	85 c0                	test   %eax,%eax
  402879:	75 10                	jne    40288b <submitr+0x704>
  40287b:	eb 13                	jmp    402890 <submitr+0x709>
  40287d:	b8 00 00 00 00       	mov    $0x0,%eax
  402882:	eb 0c                	jmp    402890 <submitr+0x709>
  402884:	b8 00 00 00 00       	mov    $0x0,%eax
  402889:	eb 05                	jmp    402890 <submitr+0x709>
  40288b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402890:	48 81 c4 48 a0 00 00 	add    $0xa048,%rsp
  402897:	5b                   	pop    %rbx
  402898:	5d                   	pop    %rbp
  402899:	41 5c                	pop    %r12
  40289b:	41 5d                	pop    %r13
  40289d:	41 5e                	pop    %r14
  40289f:	41 5f                	pop    %r15
  4028a1:	c3                   	retq   

00000000004028a2 <init_timeout>:
  4028a2:	53                   	push   %rbx
  4028a3:	89 fb                	mov    %edi,%ebx
  4028a5:	85 ff                	test   %edi,%edi
  4028a7:	74 1f                	je     4028c8 <init_timeout+0x26>
  4028a9:	85 ff                	test   %edi,%edi
  4028ab:	79 05                	jns    4028b2 <init_timeout+0x10>
  4028ad:	bb 00 00 00 00       	mov    $0x0,%ebx
  4028b2:	be 22 1f 40 00       	mov    $0x401f22,%esi
  4028b7:	bf 0e 00 00 00       	mov    $0xe,%edi
  4028bc:	e8 1f e4 ff ff       	callq  400ce0 <signal@plt>
  4028c1:	89 df                	mov    %ebx,%edi
  4028c3:	e8 d8 e3 ff ff       	callq  400ca0 <alarm@plt>
  4028c8:	5b                   	pop    %rbx
  4028c9:	c3                   	retq   

00000000004028ca <init_driver>:
  4028ca:	55                   	push   %rbp
  4028cb:	53                   	push   %rbx
  4028cc:	48 83 ec 18          	sub    $0x18,%rsp
  4028d0:	48 89 fd             	mov    %rdi,%rbp
  4028d3:	be 01 00 00 00       	mov    $0x1,%esi
  4028d8:	bf 0d 00 00 00       	mov    $0xd,%edi
  4028dd:	e8 fe e3 ff ff       	callq  400ce0 <signal@plt>
  4028e2:	be 01 00 00 00       	mov    $0x1,%esi
  4028e7:	bf 1d 00 00 00       	mov    $0x1d,%edi
  4028ec:	e8 ef e3 ff ff       	callq  400ce0 <signal@plt>
  4028f1:	be 01 00 00 00       	mov    $0x1,%esi
  4028f6:	bf 1d 00 00 00       	mov    $0x1d,%edi
  4028fb:	e8 e0 e3 ff ff       	callq  400ce0 <signal@plt>
  402900:	ba 00 00 00 00       	mov    $0x0,%edx
  402905:	be 01 00 00 00       	mov    $0x1,%esi
  40290a:	bf 02 00 00 00       	mov    $0x2,%edi
  40290f:	e8 fc e4 ff ff       	callq  400e10 <socket@plt>
  402914:	89 c3                	mov    %eax,%ebx
  402916:	85 c0                	test   %eax,%eax
  402918:	79 4f                	jns    402969 <init_driver+0x9f>
  40291a:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402921:	3a 20 43 
  402924:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402928:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40292f:	20 75 6e 
  402932:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402936:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40293d:	74 6f 20 
  402940:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402944:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  40294b:	65 20 73 
  40294e:	48 89 45 18          	mov    %rax,0x18(%rbp)
  402952:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  402959:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  40295f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402964:	e9 23 01 00 00       	jmpq   402a8c <init_driver+0x1c2>
  402969:	bf fd 2e 40 00       	mov    $0x402efd,%edi
  40296e:	e8 7d e3 ff ff       	callq  400cf0 <gethostbyname@plt>
  402973:	48 85 c0             	test   %rax,%rax
  402976:	75 68                	jne    4029e0 <init_driver+0x116>
  402978:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40297f:	3a 20 44 
  402982:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402986:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  40298d:	20 75 6e 
  402990:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402994:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40299b:	74 6f 20 
  40299e:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4029a2:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  4029a9:	76 65 20 
  4029ac:	48 89 45 18          	mov    %rax,0x18(%rbp)
  4029b0:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  4029b7:	72 20 61 
  4029ba:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4029be:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  4029c5:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4029cb:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4029cf:	89 df                	mov    %ebx,%edi
  4029d1:	e8 da e2 ff ff       	callq  400cb0 <close@plt>
  4029d6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4029db:	e9 ac 00 00 00       	jmpq   402a8c <init_driver+0x1c2>
  4029e0:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  4029e7:	00 
  4029e8:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  4029ef:	00 00 
  4029f1:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  4029f7:	48 8b 48 18          	mov    0x18(%rax),%rcx
  4029fb:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4029ff:	48 8d 74 24 04       	lea    0x4(%rsp),%rsi
  402a04:	48 8b 39             	mov    (%rcx),%rdi
  402a07:	e8 84 e3 ff ff       	callq  400d90 <bcopy@plt>
  402a0c:	66 c7 44 24 02 47 26 	movw   $0x2647,0x2(%rsp)
  402a13:	ba 10 00 00 00       	mov    $0x10,%edx
  402a18:	48 89 e6             	mov    %rsp,%rsi
  402a1b:	89 df                	mov    %ebx,%edi
  402a1d:	e8 de e3 ff ff       	callq  400e00 <connect@plt>
  402a22:	85 c0                	test   %eax,%eax
  402a24:	79 50                	jns    402a76 <init_driver+0x1ac>
  402a26:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  402a2d:	3a 20 55 
  402a30:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402a34:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  402a3b:	20 74 6f 
  402a3e:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402a42:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402a49:	65 63 74 
  402a4c:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402a50:	48 b8 20 74 6f 20 73 	movabs $0x76726573206f7420,%rax
  402a57:	65 72 76 
  402a5a:	48 89 45 18          	mov    %rax,0x18(%rbp)
  402a5e:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
  402a64:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
  402a68:	89 df                	mov    %ebx,%edi
  402a6a:	e8 41 e2 ff ff       	callq  400cb0 <close@plt>
  402a6f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402a74:	eb 16                	jmp    402a8c <init_driver+0x1c2>
  402a76:	89 df                	mov    %ebx,%edi
  402a78:	e8 33 e2 ff ff       	callq  400cb0 <close@plt>
  402a7d:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  402a83:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  402a87:	b8 00 00 00 00       	mov    $0x0,%eax
  402a8c:	48 83 c4 18          	add    $0x18,%rsp
  402a90:	5b                   	pop    %rbx
  402a91:	5d                   	pop    %rbp
  402a92:	c3                   	retq   

0000000000402a93 <driver_post>:
  402a93:	53                   	push   %rbx
  402a94:	48 83 ec 10          	sub    $0x10,%rsp
  402a98:	4c 89 cb             	mov    %r9,%rbx
  402a9b:	45 85 c0             	test   %r8d,%r8d
  402a9e:	74 22                	je     402ac2 <driver_post+0x2f>
  402aa0:	48 89 ce             	mov    %rcx,%rsi
  402aa3:	bf f5 33 40 00       	mov    $0x4033f5,%edi
  402aa8:	b8 00 00 00 00       	mov    $0x0,%eax
  402aad:	e8 ce e1 ff ff       	callq  400c80 <printf@plt>
  402ab2:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402ab7:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402abb:	b8 00 00 00 00       	mov    $0x0,%eax
  402ac0:	eb 39                	jmp    402afb <driver_post+0x68>
  402ac2:	48 85 ff             	test   %rdi,%rdi
  402ac5:	74 26                	je     402aed <driver_post+0x5a>
  402ac7:	80 3f 00             	cmpb   $0x0,(%rdi)
  402aca:	74 21                	je     402aed <driver_post+0x5a>
  402acc:	4c 89 0c 24          	mov    %r9,(%rsp)
  402ad0:	49 89 c9             	mov    %rcx,%r9
  402ad3:	49 89 d0             	mov    %rdx,%r8
  402ad6:	48 89 f9             	mov    %rdi,%rcx
  402ad9:	48 89 f2             	mov    %rsi,%rdx
  402adc:	be 26 47 00 00       	mov    $0x4726,%esi
  402ae1:	bf fd 2e 40 00       	mov    $0x402efd,%edi
  402ae6:	e8 9c f6 ff ff       	callq  402187 <submitr>
  402aeb:	eb 0e                	jmp    402afb <driver_post+0x68>
  402aed:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402af2:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402af6:	b8 00 00 00 00       	mov    $0x0,%eax
  402afb:	48 83 c4 10          	add    $0x10,%rsp
  402aff:	5b                   	pop    %rbx
  402b00:	c3                   	retq   

0000000000402b01 <check>:
  402b01:	89 f8                	mov    %edi,%eax
  402b03:	c1 e8 1c             	shr    $0x1c,%eax
  402b06:	85 c0                	test   %eax,%eax
  402b08:	74 1d                	je     402b27 <check+0x26>
  402b0a:	b9 00 00 00 00       	mov    $0x0,%ecx
  402b0f:	eb 0b                	jmp    402b1c <check+0x1b>
  402b11:	89 f8                	mov    %edi,%eax
  402b13:	d3 e8                	shr    %cl,%eax
  402b15:	3c 0a                	cmp    $0xa,%al
  402b17:	74 14                	je     402b2d <check+0x2c>
  402b19:	83 c1 08             	add    $0x8,%ecx
  402b1c:	83 f9 1f             	cmp    $0x1f,%ecx
  402b1f:	7e f0                	jle    402b11 <check+0x10>
  402b21:	b8 01 00 00 00       	mov    $0x1,%eax
  402b26:	c3                   	retq   
  402b27:	b8 00 00 00 00       	mov    $0x0,%eax
  402b2c:	c3                   	retq   
  402b2d:	b8 00 00 00 00       	mov    $0x0,%eax
  402b32:	c3                   	retq   

0000000000402b33 <gencookie>:
  402b33:	53                   	push   %rbx
  402b34:	83 c7 01             	add    $0x1,%edi
  402b37:	e8 e4 e0 ff ff       	callq  400c20 <srandom@plt>
  402b3c:	e8 0f e2 ff ff       	callq  400d50 <random@plt>
  402b41:	89 c3                	mov    %eax,%ebx
  402b43:	89 c7                	mov    %eax,%edi
  402b45:	e8 b7 ff ff ff       	callq  402b01 <check>
  402b4a:	85 c0                	test   %eax,%eax
  402b4c:	74 ee                	je     402b3c <gencookie+0x9>
  402b4e:	89 d8                	mov    %ebx,%eax
  402b50:	5b                   	pop    %rbx
  402b51:	c3                   	retq   
  402b52:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402b59:	00 00 00 
  402b5c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000402b60 <__libc_csu_init>:
  402b60:	41 57                	push   %r15
  402b62:	41 89 ff             	mov    %edi,%r15d
  402b65:	41 56                	push   %r14
  402b67:	49 89 f6             	mov    %rsi,%r14
  402b6a:	41 55                	push   %r13
  402b6c:	49 89 d5             	mov    %rdx,%r13
  402b6f:	41 54                	push   %r12
  402b71:	4c 8d 25 98 12 20 00 	lea    0x201298(%rip),%r12        # 603e10 <__frame_dummy_init_array_entry>
  402b78:	55                   	push   %rbp
  402b79:	48 8d 2d 98 12 20 00 	lea    0x201298(%rip),%rbp        # 603e18 <__init_array_end>
  402b80:	53                   	push   %rbx
  402b81:	4c 29 e5             	sub    %r12,%rbp
  402b84:	31 db                	xor    %ebx,%ebx
  402b86:	48 c1 fd 03          	sar    $0x3,%rbp
  402b8a:	48 83 ec 08          	sub    $0x8,%rsp
  402b8e:	e8 35 e0 ff ff       	callq  400bc8 <_init>
  402b93:	48 85 ed             	test   %rbp,%rbp
  402b96:	74 1e                	je     402bb6 <__libc_csu_init+0x56>
  402b98:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  402b9f:	00 
  402ba0:	4c 89 ea             	mov    %r13,%rdx
  402ba3:	4c 89 f6             	mov    %r14,%rsi
  402ba6:	44 89 ff             	mov    %r15d,%edi
  402ba9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  402bad:	48 83 c3 01          	add    $0x1,%rbx
  402bb1:	48 39 eb             	cmp    %rbp,%rbx
  402bb4:	75 ea                	jne    402ba0 <__libc_csu_init+0x40>
  402bb6:	48 83 c4 08          	add    $0x8,%rsp
  402bba:	5b                   	pop    %rbx
  402bbb:	5d                   	pop    %rbp
  402bbc:	41 5c                	pop    %r12
  402bbe:	41 5d                	pop    %r13
  402bc0:	41 5e                	pop    %r14
  402bc2:	41 5f                	pop    %r15
  402bc4:	c3                   	retq   
  402bc5:	90                   	nop
  402bc6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402bcd:	00 00 00 

0000000000402bd0 <__libc_csu_fini>:
  402bd0:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000402bd4 <_fini>:
  402bd4:	48 83 ec 08          	sub    $0x8,%rsp
  402bd8:	48 83 c4 08          	add    $0x8,%rsp
  402bdc:	c3                   	retq   

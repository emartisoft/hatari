/*
 * natfeats.h - NatFeats API header file
 *
 * Copyright (c) 2014 by Eero Tamminen
 * - simplification for Hatari example
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#ifndef _NATFEAT_H
#define _NATFEAT_H

/* AHCC uses registers to pass arguments, but
 * NatFeats calls expect arguments to be in stack.
 * "cdecl" can be used to declare that arguments
 * should be passed in stack.
 */
#if __AHCC__
#define CDECL cdecl
#else
#define CDECL
#endif

/* nf_asm.s ASM helper interface for natfeats.c */
long CDECL nf_id(const char *);
long CDECL nf_call(long ID, ...);
/* call only from Supervisor mode */
int CDECL detect_nf(void);


/* natfeats.c public prototypes */

/* detect & initialize native features, returns zero for fail */
extern int nf_init(void);

/* print string to emulator console, return number of chars output */
extern long nf_print(const char *text);

/* terminate the execution of the emulation if possible,
 * available only from supervisor mode
 */
extern void nf_shutdown(void);

/* terminate the execution of the emulation with exit code */
extern void nf_exit(int exitval);

#endif /* _NATFEAT_H */
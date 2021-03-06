/*
  Hatari - debugInfo.h

  This file is distributed under the GNU General Public License, version 2
  or at your option any later version. Read the file gpl.txt for details.

  Public atari components debugging infos header.
*/

#ifndef HATARI_DEBUGINFO_H
#define HATARI_DEBUGINFO_H

/* for breakcond.c & profile.c */
extern Uint32 DebugInfo_GetTEXT(void);
extern Uint32 DebugInfo_GetTEXTEnd(void);
extern Uint32 DebugInfo_GetDATA(void);
extern Uint32 DebugInfo_GetBSS(void);
extern Uint32 DebugInfo_GetBASEPAGE(void);

/* for debugui.c */
extern void DebugInfo_ShowSessionInfo(void);
extern char *DebugInfo_MatchInfo(const char *text, int state);
extern char *DebugInfo_MatchLock(const char *text, int state);
extern int DebugInfo_Command(int nArgc, char *psArgs[]);

/* for breakpoint ":info" callbacks */
typedef void (*info_func_t)(FILE *fp, Uint32 arg);
extern info_func_t DebugInfo_GetInfoFunc(const char *name);

#endif /* HATARI_DEBUGINFO_H */

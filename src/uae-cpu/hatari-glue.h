

extern int illegal_mem;
extern int address_space_24;
extern int cpu_level;
extern int cpu_compatible;

long STmem_size;
long TTmem_size;

int Init680x0(void);
void Exit680x0(void);
void Start680x0(void);
void customreset(void);
void check_prefs_changed_cpu(int new_level, int new_compatible);

unsigned long OpCode_ConnectedDrive(uae_u32 opcode);
unsigned long OpCode_TimerD(uae_u32 opcode);
unsigned long OpCode_GemDos(uae_u32 opcode);
unsigned long OpCode_OldGemDos(uae_u32 opcode);


#define write_log printf

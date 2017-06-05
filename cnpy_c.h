#include <stdint.h>
#ifdef __cplusplus 
extern "C" {
#endif

int npy_save_int(const char *fname, int *data, unsigned int *shape, unsigned int dims, const char *mode);
int npy_save_uint32_t(const char *fname, uint32_t *data, unsigned int *shape, unsigned int dims, const char *mode);
int npy_save_int32_t(const char *fname, int32_t *data, unsigned int *shape, unsigned int dims, const char *mode);

int npz_save_int(const char *zipname, const char *fname, int *data, unsigned int *shape, unsigned int dims, const char *mode);
int npz_save_uint32_t(const char *zipname, const char *fname, uint32_t *data, unsigned int *shape, unsigned int dims, const char *mode);
int npz_save_int32_t(const char *zipname, const char *fname, int32_t *data, unsigned int *shape, unsigned int dims, const char *mode);

#ifdef __cplusplus
}
#endif

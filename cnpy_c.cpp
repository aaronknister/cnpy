#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"cnpy.h"
#include"cnpy_c.h"

extern "C" {

int npy_save_int(const char *fname, int *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npy_save(fname, data, shape, dims, mode);
}

int npy_save_uint32_t(const char *fname, uint32_t *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npy_save(fname, data, shape, dims, mode);
}

int npy_save_int32_t(const char *fname, int32_t *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npy_save(fname, data, shape, dims, mode);
}



int npz_save_int(const char *zipname, const char *fname, int *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npz_save(zipname, fname, data, shape, dims, mode);
}

int npz_save_uint32_t(const char *zipname, const char *fname, uint32_t *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npz_save(zipname, fname, data, shape, dims, mode);
}

int npz_save_int32_t(const char *zipname, const char *fname, int32_t *data, unsigned int *shape, unsigned int dims, const char *mode) {
    cnpy::npz_save(zipname, fname, data, shape, dims, mode);
}

}



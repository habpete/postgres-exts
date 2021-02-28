#include <postgresql/server/postgres.h>

#ifdef PG_MODULE_MAGIC
    PG_MODULE_MAGIC;
#endif

PG_FUNCTION_INFO_V1(castIntToString)

Datum castIntToString (PG_FUNCTION_ARGS) {
    int tmpValue = PG_GETARG_INT32(0)
    itoa()
}
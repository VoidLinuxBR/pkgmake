/* /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/bin/default/third_party/heimdal/lib/wind/map_table.h */
/* Automatically generated at 2026-01-18T11:39:37.786595 */

#ifndef MAP_TABLE_H
#define MAP_TABLE_H 1

#include "windlocl.h"

struct translation {
  uint32_t key;
  unsigned short val_len;
  unsigned short val_offset;
  wind_profile_flags flags;
};

extern const struct translation _wind_map_table[];

extern const size_t _wind_map_table_size;

extern const uint32_t _wind_map_table_val[];

#endif /* MAP_TABLE_H */

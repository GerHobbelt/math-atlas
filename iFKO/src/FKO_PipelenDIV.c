/*
 * Copyright (C) 2015 R. Clint Whaley.
 */
#include "fko_info.h"

int FKO_PipelenDIVC(fko_archinfo_t *ap, int typ)
{
   assert(typ >= 0 && typ < FKO_NTYPES);
   return(ap->pipelen_div[typ]);
}

int FKO_PipelenDIV(int typ)
{
   return(FKO_PipelenDIVC(FKO_ARCHINF, typ));
}

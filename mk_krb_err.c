/**********************************************************************
 * Error table generator for kerberos
 *
 * $Id: mk_krb_err.c,v 1.1 1999-09-28 22:07:23 danw Exp $
 *
 * Copyright 1989, 1990 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 **********************************************************************/

#include <mit-copyright.h>
#include "krb.h"

main()
{
  int i;
  const char *msg;

  printf("############################################################\n");
  printf("# File Exchange kerberos error table\n");
  printf("# This file is automatically generated.  Do not edit it.\n");
  printf("############################################################\n\n");

  printf("error_table\tkrb\n\n");

  for (i=0; i < MAX_KRB_ERRORS; i++) {
    msg = krb_err_txt[i];
    if (!msg) msg = "";
    printf("error_code\tERR_KRB_%d,\n\t\t\"%s\"\n\n", i, msg);
  }
  printf("end\n");
  exit(0);
}

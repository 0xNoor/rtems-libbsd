/* generated by userspace-header-gen.py */
#include <rtems/linkersets.h>
#include "rtems-bsd-ifconfig-data.h"
/* af_inet.c */
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static char addr_buf[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct afswtch af_inet);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct ifreq in_ridreq);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct in_aliasreq in_addreq);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct sockaddr_in *sintab[]);

/* capture.h
 * Definitions for packet capture windows
 *
 * $Id: capture.h,v 1.10 1999/07/28 20:17:16 deniel Exp $
 *
 * Ethereal - Network traffic analyzer
 * By Gerald Combs <gerald@zing.org>
 * Copyright 1998 Gerald Combs
 *
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __CAPTURE_H__
#define __CAPTURE_H__

#ifdef HAVE_LIBPCAP

#ifndef lib_pcap_h
#include <pcap.h>
#endif

typedef struct _loop_data {
  gint           go;
  gint           max;
  gint           linktype;
  gint           sync_packets;
  time_t         sync_time;
  packet_counts  counts;
  pcap_dumper_t *pdh;
} loop_data;

void   capture_prep_cb(GtkWidget *, gpointer);
void   capture(void);

#endif /* HAVE_LIBPCAP */
#endif /* capture.h */

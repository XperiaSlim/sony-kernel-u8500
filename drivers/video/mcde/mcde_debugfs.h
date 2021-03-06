/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * ST-Ericsson MCDE base driver
 *
 * Author: Marcus Lorentzon <marcus.xm.lorentzon@stericsson.com>
 * for ST-Ericsson.
 *
 * License terms: GNU General Public License (GPL), version 2.
 */

#ifndef __MCDE_DEBUGFS__H__
#define __MCDE_DEBUGFS__H__

#include <video/mcde.h>

int mcde_debugfs_create(struct device *dev);
int mcde_debugfs_channel_create(u8 chnl_id, struct mcde_chnl_state *chnl);
int mcde_debugfs_overlay_create(u8 chnl_id, u8 ovly_id,
						struct mcde_ovly_state *ovly);

void mcde_debugfs_channel_update(u8 chnl_id);
void mcde_debugfs_overlay_update(u8 chnl_id, u8 ovly_id);

#endif /* __MCDE_DEBUGFS__H__ */


#! make -f
#----------------------------------------------------------------------------
# Project:  NitroSDK - SPI - demos - tp-1
# File:     Makefile
#
# Copyright 2003-2005 Nintendo.  All rights reserved.
#
# These coded instructions, statements, and computer programs contain
# proprietary information of Nintendo of America Inc. and/or Nintendo
# Company Ltd., and are protected by Federal copyright law.  They may
# not be disclosed to third parties or copied or duplicated in any form,
# in whole or in part, without the prior written consent of Nintendo.
#
# $Log: Makefile,v $
# Revision 1.9  2005/02/22 08:42:00  takano_makoto
# TEGのサポート終了
#
# Revision 1.8  2004/11/02 08:56:07  takano_makoto
# fix comment.
#
# Revision 1.7  2004/07/31 08:16:22  terui
# Change to use default component.
#
# Revision 1.6  2004/07/01 02:25:48  yasu
# .bin -> .srl
#
# Revision 1.5  2004/05/21 09:56:44  takano_makoto
# NVRAMからキャリブレーション値を取得
#
# Revision 1.4  2004/05/14 00:04:23  terui
# Delete explicit appointment of SPI library.
#
# Revision 1.3  2004/05/12 10:57:19  terui
# Change component from "spi/sub.nef" to "ferret/ferret_sub.nef"
#
# Revision 1.2  2004/05/06 10:18:18  yasu
# fix typo
#
# Revision 1.1  2004/04/21 12:17:24  takano_makoto
# Initial Update.
#
# Initial Update.
#
# $NoKeywords: $
#----------------------------------------------------------------------------

SUBDIRS		=

#----------------------------------------------------------------------------

SRCS		= main.c
TARGET_NEF 	= main.nef
TARGET_BIN	= main.srl

include	$(NITROSDK_ROOT)/build/buildtools/commondefs

#----------------------------------------------------------------------------

do-build:	$(TARGETS)


include	$(NITROSDK_ROOT)/build/buildtools/modulerules


#===== End of Makefile =====

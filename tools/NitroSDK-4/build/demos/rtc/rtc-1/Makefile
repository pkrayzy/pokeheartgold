#! make -f
#----------------------------------------------------------------------------
# Project:  NitroSDK - RTC - demos
# File:     Makefile
#
# Copyright 2003,2004 Nintendo.  All rights reserved.
#
# These coded instructions, statements, and computer programs contain
# proprietary information of Nintendo of America Inc. and/or Nintendo
# Company Ltd., and are protected by Federal copyright law.  They may
# not be disclosed to third parties or copied or duplicated in any form,
# in whole or in part, without the prior written consent of Nintendo.
#
# $Log: Makefile,v $
# Revision 1.6  2004/08/19 11:14:52  terui
# デフォルトのコンポーネントを使用するよう変更。
#
# Revision 1.5  2004/07/01 02:25:48  yasu
# .bin -> .srl
#
# Revision 1.4  2004/06/29 00:03:42  terui
# Delete TARGET_NEF definition.
# Delete LLIBRARIES definition.
#
# Revision 1.3  2004/06/18 10:22:02  yasu
# fix typo
#
# Revision 1.2  2004/05/12 10:57:33  terui
# Change component from "spi/sub.nef" to "ferret/ferret_sub.nef"
#
# Revision 1.1  2004/05/12 02:38:33  terui
# initial upload
#
# $NoKeywords: $
#----------------------------------------------------------------------------

SUBDIRS		=

#----------------------------------------------------------------------------

SRCS		=	main.c font.c

TARGET_BIN	=	main.srl

include	$(NITROSDK_ROOT)/build/buildtools/commondefs


#----------------------------------------------------------------------------

do-build:		$(TARGETS)

include	$(NITROSDK_ROOT)/build/buildtools/modulerules


#===== End of Makefile =====

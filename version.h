// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <config/bitcoin-config.h>

#ifdef BTCDEB_STR
#error "BTCDEB_STR already defined"
#endif

#define BTCDEB_STR(s) #s

#define _VERSION(maj, min, rev) BTCDEB_STR(maj) "." BTCDEB_STR(min) "." BTCDEB_STR(rev)
#define VERSION() _VERSION(CLIENT_VERSION_MAJOR, CLIENT_VERSION_MINOR, CLIENT_VERSION_REVISION)

#endif // BITCOIN_VERSION_H

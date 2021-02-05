#!/usr/bin/env bash
#
# Copyright (c) 2019-2020 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

. 00_setup_env_native_valgrind.sh

export BITCOIN_CONFIG="--enable-dangerous $BITCOIN_CONFIG"

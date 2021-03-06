#!/usr/bin/env bash

# Test to check there are output streams separated
#
# Author:
#   Marek Haicman <mhaicman@redhat.com>

. $builddir/tests/test_common.sh

set -e -o pipefail

function test_sce_streams_fill {
    local xccdf_file=${srcdir}/$1
    local stderr=$(mktemp)
    local result=$(mktemp)

    # the test is actually pretty slow, which means it takes ~10 seconds on
    # my laptop. 100s is safe margin in case of slow virtual jenkins nodes
    timeout "100s" $OSCAP xccdf eval --results "$result" "$xccdf_file" 2> $stderr
    echo "===== result ====="
    # zero is generated into stdout, 1 is stderr
    grep "001999990" $result && grep "101999990" $result
}

# Testing.
test_init

test_run "SCE stream filling up" test_sce_streams_fill test_sce_streams_fill.xccdf.xml

test_exit

#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "The value is: $pid_max"

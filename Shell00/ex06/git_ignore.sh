#!/bin/sh
find . | git check-ignore --stdin | sed 's/.\///g'

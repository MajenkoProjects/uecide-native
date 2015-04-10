#
# Regular cron jobs for the native package
#
0 4	* * *	root	[ -x /usr/bin/native_maintenance ] && /usr/bin/native_maintenance

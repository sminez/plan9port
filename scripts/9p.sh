# Some simple helper commands for writing bash scripts to control acme.
# Modified from the acme.rc script.

function newwindow {
    winid=$(9p read acme/new/ctl)[0]
}

function winctl {
    echo $* | 9p write acme/$winid/ctl
}

function winread {
	9p read acme/$winid/$1
}

function winwrite {
	9p write acme/$winid/$1
}

function setwinname {
	winctl name $1
}

function winwriteevent {
	echo $1$2$3 $4 | winwrite event
}

#function wineventloop {
#	. <{winread event 2> /dev/null | acmeevent}
#}


function getwinname {
    echo $(winread tag | awk '{ print $1 }' | sed 's/\//#/g')
}
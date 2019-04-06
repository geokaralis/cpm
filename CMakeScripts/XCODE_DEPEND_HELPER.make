# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.cpm.Debug:
/Users/george/Desktop/cpm/Debug/cpm:
	/bin/rm -f /Users/george/Desktop/cpm/Debug/cpm


PostBuild.cpm.Release:
/Users/george/Desktop/cpm/Release/cpm:
	/bin/rm -f /Users/george/Desktop/cpm/Release/cpm


PostBuild.cpm.MinSizeRel:
/Users/george/Desktop/cpm/MinSizeRel/cpm:
	/bin/rm -f /Users/george/Desktop/cpm/MinSizeRel/cpm


PostBuild.cpm.RelWithDebInfo:
/Users/george/Desktop/cpm/RelWithDebInfo/cpm:
	/bin/rm -f /Users/george/Desktop/cpm/RelWithDebInfo/cpm




# For each target create a dummy ruleso the target does not have to exist

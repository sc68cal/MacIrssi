# MacIrssi

This is a fork of [Matt Wright's MacIrssi](https://github.com/daagaak/MacIrssi), which is currently unmaintained. While I'm trying to get in touch with him to possibly get co-maintainership of the original repo, I'll be pushing my changes here. Issue reports and pull requests are very much welcome :)

## Not-really-nightlies

You can download a binary version of my fork [here](http://x3ro.de/downloads/MacIrssi/). These are currently updated whenever I get something worthwhile done, or if a bug gets fixed. If you encounter any issues, please let me know over at the [issue tracker](https://github.com/x3ro/MacIrssi/issues).

## Checking Out ##

To check out the MacIrssi code base, do the following

	# git clone <clone url>
	# git checkout <desired branch>
	# git submodule init
	# git submodule update


## Compiling ##

Compiling MacIrssi is a tricky beast. The plain Irssi core that powers MacIrssi requires glib in order to function. This means compiling up a bunch of GNU libraries in order to build the glib dylib, amongst others, needed to run MacIrssi.

To this end, there is a submodule in MacIrssi called MILibs. There is a target in the main project called "Build MILibs", this target does not get run automatically. You need to forcibly invoke this target, from the top level Xcode project, to build the required libraries. After that, you never need to run it again unless the version of MILibs changes.

Keep an eye out, if the Frameworks/MILibs subproject starts showing up in your diffs after you've checked out then you likely need to update the submodule checkout for that branch.

	# git submodule update

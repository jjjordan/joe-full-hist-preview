# Historical JOE release

This revision contains a historical release of JOE.  These versions predated
widespread use of source control and were distributed primarily on USENET
and FTP servers.  As such, these do not represent *real* commits, but are
included in the git repository for the sake of completeness.

---

## JOE 2.3
**Released: 1994-12-24**

Source recovered from Redhat 1.1 (Mother's Day Release) source RPP, also from https://ftp.nice.ch/pub/next/unix/editor

Changelog:

```
- Search & Replace bugs fixed
   - replace would mess up the end mark of a marked block
   - a search would trash ^KB if only ^KB was set
   - regex problem with \*

- Was using TCSANOW in posix driver.  Should have been using TCSADRAIN

- Format paragraph now correctly formats quoted news articles

- Attempted fix for SCO

- Fix for coherent

- Fix for old IRIX/SGI

- Fixed bug where if you used search & replace in a macro, and exiting the
  search & replace loop with right arrow key, then when you played the macro
  you got an extra ^[ in the input queue

- Added file hooks

- Added function to insert current keyboard macro into current file

- Added range checks to numeric option settings
```

Original announcement:
```
Path: bga.com!news.sprintlink.net!pipex!uunet!gatekeeper.us.oracle.com!barrnet.net!yggdrasil.com!news
From: jhallen@world.std.com (Joseph H Allen)
Newsgroups: comp.archives
Subject: [comp.editors] Announce: Joe version 2.3
Followup-To: comp.editors
Date: 25 Dec 1994 03:24:43 GMT
Organization: The World Public Access UNIX, Brookline, MA
Lines: 52
Sender: ad...@yggdrasil.com
Approved: ad...@yggdrasil.com
Distribution: world
Message-ID: <3diolr$u0h@yggdrasil.com>
References: <D17qBo.JJw@world.std.com>
NNTP-Posting-Host: adam.yggdrasil.com
X-Original-Newsgroups: comp.editors
X-Original-Date: Thu, 22 Dec 1994 12:50:12 GMT

Archive-name: auto/comp.editors/Announce_Joe_version_2_3


Version 2.3 of my editor is ready.  You can get it by anonymous ftp from
ftp.std.com, file: src/editors/joe2.3.tar.Z.  It should be there later today
or tomorrow, depending on when the operator installs it.

New features:

Paragraph format and word-wrap now work for quoted news articles, C
comments, and other text which begins with a common non-alpha indentation
string.

You can set file-name dependant macros to be executed for each case of: new
file being created, existing file being loaded, new file being stored, and
existing file being stored.  This is useful for loading a standard header
for C files or for appending news signatures.

A new command, ESC D, dumps the currently defined keyboard macros into the
current file.  They are formatted the same way as macros in the joerc file,
and can easily be incorperated into it.

Bugs fixed:

Search & replace would eliminate ^KB if it was set and ^KK wasn't.

Replace would mess-up the ^KK of a marked block.

The \* regular expression wasn't working correctly in regular expressions
which crossed lines.

An obscure bug where exiting a search and replace loop during a macro
record would cause extra characters to be typed when that macro was
played.

Was using TCSANOW in the posix driver instead of TCSADRAIN: this caused
typeahead lossage when entering and existing joe.

Invalid numeric (^T) options would eventually crash the editor.

Portability:

Joe should work without change on SCO UNIX, Coherent and old versions
IRIX/SGI.  I would appreciate if people with these systems could confirm
that they have joe working.

-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 2.2
**Released: 1994-10-06**

Source recovered from Slackware 2.1 source archive

*Archival notes: This version was included with Slackware 2.1-3.4*

Author's comments:

```
I got this version of JOE to work in MS-DOS.
```

Changelog:

```
- First attempt at MS-DOS version of joe
   - Direct screen write
   - Modifications for dos file/drive names
   - Use TEMP variable to figure out where to store temporary file
   - Smaller virtual memory page size
   - Backslashes in file name problem
   - CR before an LF looks like an LF
- Backward search ignore-case was not working
- Scalable window height was not working fully
- Spaces in file-names gave a problem with backup file creation
- TILDE option is not available in all versions of BSD
- Allow : as seperate for termcap filename list
- Next error / Prev. error was not tracking right
- tabs not displayed right in nxterr/prverr messages
- Block moves where the cursor was to the right of the block was broken
```

---

## JOE 2.1
**Released: 1994-09-23**

*The source for this release has been lost*

Changelog:

```
- rc file wasn't giving correct error messages for missing options
- the '-nobackups' options was mispelled: '- nobackups'
- editor was crashing because of problem in undo
- update bypass in utype has a problem when wordwrapping and scrolling
```

Original announcement:
```
Newsgroups: comp.editors,comp.emacs,alt.os.linux,comp.unix.misc,comp.unix.admin
Path: bga.com!news.sprintlink.net!howland.reston.ans.net!cs.utexas.edu!uunet!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: Re: JOE 2.0 - Major new version
Message-ID: <CwKMnt.DLz@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
References: <CwItC9.A22@world.std.com>
Date: Fri, 23 Sep 1994 07:11:52 GMT
Lines: 15
Xref: bga.com comp.editors:2711 comp.emacs:3586 alt.os.linux:305 comp.unix.misc:4030 comp.unix.admin:8546

In article <CwIt...@world.std.com>,
Joseph H Allen <jhallen@world.std.com> wrote:
>
>A major new version of my editor JOE is ready.  It should appear in
>ftp.std.com, file: src/editors/joe2.0.tar.Z some time tomorrow.

Actually, get version joe2.1.tar.Z.  A bunch of minor bugs were fixed and
also a problem where joe core dumped after a short time.  This is a new
major release, so there will probably be a slew of new minor versions
over the next few days, so keep checking ftp.std.com.
-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 2.0
*Release date unknown*

*Archival notes: Release date was probably 1994-09-22 or 1994-09-23*

*The source for this release has been lost*

---

## JOE 1.0.13
**Released: 1994-08-24**

*The source for this release has been lost*

---

## JOE 1.0.12
**Released: 1994-08-18**

Source recovered from Slackware 2.3 source archive

*Archival notes: This version was included with Slackware 2.1-2.3*

Changelog:

```
1.0.10 - 1.0.12:

- A bug where only two bytes would get written to a file is fixed
- A bug where JOE wouldn't work on AT&T 3B2s is fixed and screwed up on
  other computers is fixed
- Spell check macros are now included with JOE
- ESC w and ESC x emulate the WordStar ^W and ^X functions
```

---

## JOE 1.0.11
**Released: 1994-08-10**

*The source for this release has been lost*

Original announcement:
```
Newsgroups: comp.editors
Path: bga.com!news.sprintlink.net!hookup!usc!math.ohio-state.edu!jussieu.fr!univ-lyon1.fr!swidir.switch.ch!newsfeed.ACO.net!Austria.EU.net!EU.net!uunet!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: Re: New version of JOE: 1.0.10
Message-ID: <CuC8sK.70s@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
References: <Cu9I3s.Juu@world.std.com>
Date: Wed, 10 Aug 1994 21:24:20 GMT
Lines: 12

In article <Cu9I...@world.std.com>,
Joseph H Allen <jhallen@world.std.com> wrote:
>A new version of my editor JOE is available by anonymous ftp from
>ftp.std.com, file: src/editors/joe1.0.10.tar.Z.

Please look for joe1.0.11, not joe1.0.10.  I made a minor mistake when I
made the joe1.0.10 archive which causes it to scroll slowly on X-terms.
-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.10
**Released: 1994-08-09**

*The source for this release has been lost*

Original announcement:
```
Newsgroups: comp.editors
Path: bga.com!news.sprintlink.net!hookup!usc!nic-nac.CSU.net!charnel.ecst.csuchico.edu!olivea!uunet!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: New version of JOE: 1.0.10
Message-ID: <Cu9I3s.Juu@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
Date: Tue, 9 Aug 1994 09:52:39 GMT
Lines: 27

A new version of my editor JOE is available by anonymous ftp from
ftp.std.com, file: src/editors/joe1.0.10.tar.Z.

All JOE users should update to this version since it includes some important
bug fixes:

	* The '-force' option was broken.  When used, the save file command
	  ^K D would write only two bytes to your file.

	* A mistake where I was giving C's '%' operator signed instead of
	  unsigned integers was causing JOE to occasionally crash on some
	  systems (most notebly AT&T 3B2s).

I've also added some functions for die-hard wordstar users:

	* ESC-w and ESC-z do WordStar style line scrolling

	* ESC-b and ESC-k move the cursor to the beginning or end of the
	  marked block.  ESC-g swaps the cursor between the two.

	(these keybinding should not be considered standardized yet)

-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.9
**Released: 1994-04-24**

*The source for this release has been lost*

Changelog:

```
1.0.9:

- Works for DEC Alpha
- Works for AIX on RS/6000
- Autoindent enable/disable message problem is fixed
```

Original announcement:
```
Newsgroups: comp.editors
Path: gmd.de!nntp.gmd.de!xlink.net!howland.reston.ans.net!cs.utexas.edu!uunet!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: Re: New version of JOE soon ?
Message-ID: <Cor78z.8Kv@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
References: <CoqKH9.Lyx@un.seqeb.gov.au>
Date: Sun, 24 Apr 1994 07:53:23 GMT
Lines: 34

In article <CoqK...@un.seqeb.gov.au> fer...@fuzzy.seqeb.gov.au writes:
>I read a post from Mr. Allen saying that joe 1.0.9 (with Alpha fixes) would
>be out in a few days and a new major release in about 2 weeks. That was over
>a month ago and I haven't heard/seen anything since. 

I just told the sys admin. here to install joe 1.0.9 into the ftp directory
(anonymous ftp from world.std.com, file src/editors/joe1.0.9.tar.Z).
It should be there tomorrow.

The new version includes:

  - works for DEC Alpha
  - works for AIX 3.2 on RS/6000
  - The cut-off for eliminating output delays has been changed to 9600
  - The Autoindent messages have been fixed

I would appreciate if someone could verify that the Alpha version compiles. 
I got it to work, but I don't remember if the linker needs -Bstatic or
-non_shared (it only works if it doesn't used the shared libraries).

I'm also working on an even newer version of JOE.  Unfortunately it's ending
up being almost a complete rewrite and it will be some time before it's
done.  In the mean time, I will maintain the old version a bit more, so keep
sending me bug reports.

I would especially like any data concerning line numbers going out of sync,
garbage appearing in the file or ^K S not saving properly.  There's is a
difficult to find pointer problem causing these bugs on some systems, and I
would like to fix it.
-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.8
**Released: 1992-12-19**

Source recovered from http://www.nic.funet.fi/index/unix/editors/joe - also in MCC-1.0 archive on ibiblio

*Archival notes: This version was included with Slackware 2.0.1, MCC 1.0, and SLS*

Author's comments:

```
Here is the rewrite of JOE.  It now uses the linked-list of gap buffers.  I
went nuts writing libraries, so for example this one has its own version
malloc!
```

Original announcement:
```
Newsgroups: comp.editors
Path: sparky!uunet!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: JOE 1.0.8
Message-ID: <BzI94r.D2@world.std.com>
Keywords: brief
Organization: The World Public Access UNIX, Brookline, MA
Date: Sat, 19 Dec 1992 11:55:38 GMT
Lines: 37

A new release of Joe's Own Editor is now available by anonymous ftp from
world.std.com, file: editors/joe1.0.8.tar.Z.  This release only contains
some minor changes.  If you have a working joe1.0.7, you probably don't need
this version.

Here's a list of the chanegs:

- Don't need the patch for the bug with ` anymore

- Added a make option so that 'struct dirent' can be used instead of
  'struct direct'

- Added some more joerc global options:

  -topskip nnn      editor doesn't touch top n lines of screen
  -exask            ^K X always confirms the file name to save
  -lightoff         block highlighting gets shut off after block operations
  -nobackups        no backup files are made when this is set

- Choose a name other than 'hz', so that systems with hz defined in the
  wrong include files will work

- Eliminated some more compile warnings

These bugs still exist:

- problem with saving files on some systems
- occasionally line numbers get out of sync
- 16-bit chinese characters still don't work

The next release will have lots of changes for getting joe to work on
segmented 80X86 systems.
-- 
/*  jhallen@world.std.com (192.74.137.5) */               /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.7
**Released: 1992-11-26**

Source recovered from ftp://nic.funet.fi/index/Linux/util/editors

Original announcement:
```
Xref: sparky comp.editors:2876 alt.religion.emacs:477 comp.unix.admin:6390 comp.unix.xenix.misc:251 comp.os.linux:18044
Newsgroups: comp.editors,alt.religion.emacs,comp.unix.admin,comp.unix.xenix.misc,comp.os.linux
Path: sparky!uunet!spool.mu.edu!sol.ctr.columbia.edu!eff!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: New release: JOE 1.0.7
Message-ID: <ByBvGL.1D6@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
Date: Thu, 26 Nov 1992 14:41:08 GMT
Lines: 68

An new release of JOE is ready.  Get it by anonymous ftp from 
world.std.com, file 'src/editors/joe1.0.7.tar.Z'.  Might have to wait a day 
as it's a holiday here and the operators might not be in.

Features/fixes for this version:
-------------------------------

Shell windows - JOE now has shell windows.  They only work if your computer 
has ptys.  I'm not entirely sure that the code is completely portable, so 
I'll see how much mail I get...  

NOXON - if this environment variable is set, joe will attempt to turn off 
^Q/^S processing.

Direct keys to access menus.  If you hit the first letter of a menu item, it 
gets selected immediatly.

Characters above 127 should now get typed in correctly.  'asis' mode will 
show all characters above 127 as-is.

Window size changes will now immediatly take effect instead of after a 
key-stroke.

Center line will work if there's only a single character on the line

'Loose' is now spelled correctly :-)

I changed the way the tty driver is compiled.  Now there's one file, tty.c, 
with lots of conditional compiling.  So now you choose a makefile to use.
I'm hoping that people will send me better makefiles for SCO UNIX, ESIX and 
Interactive.

If both insert character and insert mode are defined for the terminal, 
only one will be used :-)

If a termcap key sequence is only a single character and that character is 
less than 128, it's not used.  People were complaining about ADM 3A 
terminals, which have ^H, ^J, ^K and ^L set for the arrow keys.  

Tabs are displayed correctly in prompts

README file now suggests to try '-ltermlib' to get terminfo working on HPUX

Put ^K Q back in joerc file

Caught a few extra =* and =& which need to be space seperated.

If you kill joe, it tries to restore the tty to the shell state

'make install' tries to create the WHEREJOE and WHERERC directories if they 
don't exist 

I don't bother setting ospeed, BC, UP and PC in terminfo.c any longer

Not fixed yet
-------------

Long delay in SCO UNIX using vt100s.  I have no idea what the problem is.

Manual page still doesn't exist

Someone reported that files sometimes don't get written with ^K D.  I 
haven't been able to reproduce this.  
-- 
/*  jhallen@world.std.com */     /* Amazing */            /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.6
**Released: 1992-11-21**

Source recovered from http.pl.scene.org/pub/unix/editors/old

---

## JOE 1.0.5
**Released: 1992-11-21**

Source recovered from usenet

Original announcement:
```
Newsgroups: alt.sources
Path: sparky!uunet!spool.mu.edu!sol.ctr.columbia.edu!eff!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: JOE 1.0.5 Part 1 of 10
Message-ID: <By2ME0.KoH@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
Date: Sat, 21 Nov 1992 14:46:48 GMT
Lines: 2353

Submitted-by: jhallen@world.std.com
Archive-name: joe1.0.5part1

To unpack the archive:  strip the news headers and trailers off of each 
posting and concatenate them into a single file.  then execute the shell 
archive with 'sh filename'


A new version of Joe's Own Editor is complete.  Get is by anonymous ftp to 
world.std.com, file: src/editors/joe1.0.5.tar.Z.  Also look for it on 
'alt.sources' This has a number of fixes and new features: 

- Rectangle/Column mode.  I think I've made a very good implementation of 
this stuff.  It's really neat, I could have used this earlier.  When this 
mode is selected, the normal block commands (including filter block through 
unix command) and insert file work on rectangles.  Also if overtype mode is 
set, these commands overtype instead.  Also when rectangle mode is set, 
indent and unindent will work with the insertion/deletion point as the 
left side of the rectangle instead of the beginning of the lines.

- Can set tab width

- Can set indent/unindent step column-width and fill character

- ^K ;  now does a tags file search

- if there's only one help screen defined, then ^KH immediatly turns on help
instead of giving a menu

- same deal with TAB completion- if only one item matches, it does a simple
completion

- unnamed files get the name first given to save file ^K D

- joe is now in a subdirectory in the tar archive.  Also as you can see,
I'm including the version number along with the name

- the problems with the optimizer on Xenix and with back-tab on SCO UNIX are
fixed.  You still have to use 'ttysv' with SCO UNIX- I need to get access to
a SCO UNIX machine to make a tty interface for it.  I think the posix tty 
interface is probably pretty close.

- string searches were crashing when they got to the end of the file.  this 
is fixed now.  

Hex dump edit mode, fixed record length edit more and a new 'man' page are 
on the way.

The only major features which I feel are still missing are shell windows and 
background loading/demand loading.  These are going to be mess as far as 
portability so they'll probably take a while.
```

---

## JOE 1.0.4
*Release date unknown*

*The source for this release has been lost*

---

## JOE 1.0.3
**Released: 1992-11-18**

*The source for this release has been lost*

Original announcement:
```
Xref: sparky comp.editors:2811 alt.religion.emacs:462 comp.unix.admin:6265 comp.unix.xenix.misc:227 comp.os.linux:17161
Newsgroups: comp.editors,alt.religion.emacs,comp.unix.admin,comp.unix.xenix.misc,comp.os.linux
Path: sparky!uunet!iWarp.intel.com|eff!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: JOE 1.0.3
Message-ID: <BxyA0w.JIu@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
Date: Thu, 19 Nov 1992 06:29:19 GMT
Lines: 33

With version 1.0.3 I think Joe's Own Editor is beta tested enough so that it 
will be useable.  I fixed some minor bugs involving the windows, the modifed 
flag, word wrap, and braindead termcap entries (it turns out that 'al' and 
'dl' get parameters and that people actually build 'al' and 'dl' out of 
scrolling regions).  

You can get it by anonymous ftp from: world.std.com, file: 
src/editors/joe.tar.Z.  Wait until 10 or so EST today to give the operator 
time to install it.  

Oh also JOE will use the insert and delete character termcap capabilities.
It's really nice now at low baud rates.

I rearranged the help windows so that all the most basic editing commands 
are on the first one.  This should be good for when JOE is set up to start 
with the help on.  This is what it looks like: 

CURSOR           GO TO            BLOCK      DELETE   MISC         EXIT
^B left ^F right ^U  prev. screen ^KB begin  ^D char. ^KJ reformat ^KX save
^P up   ^N down  ^V  next screen  ^KK end    ^Y line  ^TT overtype ^C  abort
^Z previous word ^A  beg. of line ^KM move   ^W >word `   Ctrl-    ^KZ shell
^X next word     ^E  end of line  ^KC copy   ^O word< ^  Meta-     FILE
SEARCH           ^KU top of file  ^KW file   ^J >line ^R  retype   ^KE new
^KF find text    ^KV end of file  ^KY delete ^_ undo  ^@  insert   ^KR insert
^L  find next    ^KL to line No.  ^K/ filter ^^ redo               ^KD save

I think it's complete enough for most basic editing without being too 
cryptic.
-- 
/*  jhallen@world.std.com */     /* Amazing */            /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.2
*Release date unknown*

*The source for this release has been lost*

---

## JOE 1.0.1
**Released: 1992-11-17**

*The source for this release has been lost*

Original announcement:
```
Xref: sparky comp.editors:2782 comp.os.linux:16946 alt.religion.emacs:461
Newsgroups: comp.editors,comp.os.linux,alt.religion.emacs
Path: sparky!uunet!destroyer!sol.ctr.columbia.edu!eff!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Subject: Re: JOE 1.0.0 IS FINALLY DONE
Message-ID: <BxuqM2.1zs@world.std.com>
Organization: The World Public Access UNIX, Brookline, MA
References: <Bxty5C.CL1@world.std.com>
Date: Tue, 17 Nov 1992 08:37:14 GMT
Lines: 14

In article <Bxty...@world.std.com> jhallen@world.std.com (Joseph H Allen) writes:
>The rewrite of Joe's Own Editor is finally done.  JOE Version 1.0.0 is here!

>I'll post again as soon as I know where it is exactly :-)

Get joe by anonymous ftp from 'world.std.com', file 'src/editors/joe.tar.Z'

Be sure that joe comes up with version 1.0.1.  There were a few minor bugs I 
had to fix.
-- 
/*  jhallen@world.std.com */     /* Amazing */            /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 1.0.0
**Released: 1992-11-16**

Source recovered from tsx-11 ftp archive on ibiblio

*Archival notes: This version was included in SLS 1.02*

Original announcement:
```
Xref: sparky comp.editors:2776 comp.os.linux:16902 alt.religion.emacs:460
Path: sparky!uunet!ferkel.ucsb.edu!taco!rock!stanford.edu!agate!biosci!uwm.edu!cs.utexas.edu!zaphod.mps.ohio-state.edu!darwin.sura.net!wupost!usc!sol.ctr.columbia.edu!eff!world!jhallen
From: jhallen@world.std.com (Joseph H Allen)
Newsgroups: comp.editors,comp.os.linux,alt.religion.emacs
Subject: JOE 1.0.0 IS FINALLY DONE
Message-ID: <Bxty5C.CL1@world.std.com>
Date: 16 Nov 92 22:22:24 GMT
Organization: The World Public Access UNIX, Brookline, MA
Lines: 115

The rewrite of JOE is finally done.  JOE Version 1.0.0 is here!

You can get it from:

	tsx-11.mit.edu in pud/linux someplace
	world.std.com  in the incomming directory
	VWIS Linux BBS (508)793-9568  in packages/joe.tar.Z

I'll post again as soon as I know where it is exactly :-)

Send email to 'jhallen@word.std.com' or to 'rcarter' on the VWIS Linux BBS

I apologize to all those people who I promised that joe would be done
real-soon-now.  I knew that it only take me a few weeks to finish it, but I
could never seem to get down to it... things like work school and
procrastination kept interfering...  2000 lines of JOE took a year and a
half and the remaining 18000 took the last month. 

This release is kind of a beta test of the rewrite.  Not everything I
promised to implement is done yet, but most things are.

These are the new features:

	TERMCAP/TERMINFO support

		Joe will now work on any termcap terminal (except for
overstrike terminals).  A new termcap library is supplied which can use an
index file to make it faster than terminfo.  A number of terminfo extensions
are supported and the GNU extensions to the termcap language are supported.
JOE is not picky about the completeness of the termcap entries.  It should
work even better than vi in this respect.

	Improved scrolling

		Necessary scrolling is detected at a lower level in the
editor.  All edit commands will scroll if they need to.

	Better UNIX integration

		Every place in joe which accepts a file name (including the
command line) will also accept:

		!command		to pipe into or out of a command
		>>filename		to append to a file
		filename,start,size	to edit a portion of a file/device
		-			to use stdin or stdout

		Also, filenames on the command line may be preceeded by +nnn
to start editing at a specified line.

	Improved orthoganality

		Each prompt is actually a normal edit buffer and a copy of a
history buffer.  You can use all of the normal edit commands to edit the
file names and search strings.  You can use the up arrow key (and search
backwards or any other normal edit command) to get back previous responses.

	New buffering system

		Joe now uses a doubly linked list of gap buffers which can
spill into /tmp directory files.  You can edit files of any size up to the
amount of free disk space and there are no line length restrictions.

	16-bit system support

		This is not quite done, but joe was written so that it will
eventually work well on xenix 286 and msdos.

	File name selection menus

		If you hit tab in a file name prompt, a menu of matching
names will appear.

	New help system

		When you ask for help, you get a menu of help screens to
choose from (all definable in the .joerc file).  Also in certain places
the help is context sensitive.

	The edit commands are improved:

		- search and replace system uses powerful regular expressions
		  including matching of balanced C expressions

		- undo and redo now apply to complete edit commands.  If you
		  accidently reformat paragraph on your C code, you only
		  have to hit undo once.

		- a position history is supplied so you can to next/prev. place

		- multiple keyboard macros can be defined

	Many options are supplied:

		row and column numbers can be shown on status line
		emacs style cursor recentering on scrolls
		characters between 160-254 can be shown as-is
		Ctrl and Meta chars can be displayed in joe or emacs style
		Final newline can be forced on end of file
		Can start with help on
		No. pgup/pgdn lines to keep can be specified
		Left margin as well as right margin can be specified

	Joe will soon have:

		Hex dump edit mode
		Fixed record length edit mode
		Rectangular blocks
		Tag search and goto line with error
		and maybe xedit style folding commands

/*  jhallen@world.std.com */     /* Amazing */            /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 0.1.5
**Released: 1992-02-01**

Source recovered from joe-hist archive

*Archival notes: Release date is an estimate. It is probably before Mar 26 and definitely before Jun 12.*

Author's comments:

```
Here is the last version before the big joe1.0 rewrite.  It got the be quite
sophisticated.  It now has macros and a real undo system.
```

Changelog:

```
Release 0.1.5 of JOE

FIXES

	* No longer looses single character of typehead when exiting

	* Strcat to a block not guarenteed to contain a zero fixed.  This
	  may have caused core dumps or may have messed up the help screen.

	* posix driver fixed
```

---

## JOE 0.1.4
**Released: 1992-01-30**

*The source for this release has been lost*

Changelog:

```
Release 0.1.4 of JOE

FIXES

	* Control characters in prompts now handled correctly

	* Detection for recursive macros added

	* Stdout/stderr set properly for pipe-block-through-shell-command

	* Generic SVR3 async file added

	* Spelling errors in man page fixed :-)
```

Original announcement:
```
Xref: sparky comp.editors:917 alt.religion.emacs:44 comp.unix.misc:1115 alt.os.linux:346
Newsgroups: comp.editors,alt.religion.emacs,comp.unix.misc,alt.os.linux
Path: sparky!uunet!zaphod.mps.ohio-state.edu!qt.cs.utexas.edu!news!noc.near.net!wpi.WPI.EDU!rcarter
From: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Subject: Joe Editor version 0.1.4 (you might know it as E or J)
Message-ID: <1992Jan30.191900.5741@wpi.WPI.EDU>
Sender: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Organization: Kadath Tours, Inc.
Date: Thu, 30 Jan 1992 19:19:00 GMT
Lines: 28


Well I said that the last release was going to be the last before the
rewrite, but people found enough minor bugs so that I have to make another. 
But good news!  I finally have an anonymous ftp archive site (yeah! no more
stupid uuencoding or people complaining that I posted it wrong):

	ftp 		wpi.wpi.edu   (130.215.24.1)
	login:		anonymous
	password: 	<your user name>
	cd		stusrc
	binary
	get		joe.tar.Z

The fixes for this version:

	Recursive macros detected

	Control characters typed in prompts are properly handled

	stdout/stderr are set right for the 'pipe block through shell
	command' function

	A new version of async for SVR3 (actually generic system V I think)
-- 
/*  rcarter@wpi.wpi.edu */      /* Amazing */             /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 0.1.3
*Release date unknown*

*The source for this release has been lost*

---

## JOE 0.1.2
**Released: 1992-01-23**

Source recovered from usenet

Original announcement:
```
Xref: funic comp.editors:3128 alt.sources:3045 alt.os.linux:131 comp.unix.xenix.misc:337
Path: funic!fuug!mcsun!uunet!caen!garbo.ucc.umass.edu!m2c!wpi.WPI.EDU!rcarter
From: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Newsgroups: comp.editors,alt.sources,alt.os.linux,comp.unix.xenix.misc
Subject: JOE Version 0.1.2
Message-ID: <1992Jan23.112219.60@wpi.WPI.EDU>
Date: 23 Jan 92 11:22:19 GMT
Sender: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Organization: Kadath Tours, Inc.
Lines: 35


Here (well on alt.sources, anyway) is what I think (hope) will be the last
version of JOE before the rewrite (version 1.0.0).  This version includes
some quick fixes and additions to the previous one: 

	* undo/redo are now a real undo system instead of undelete

	* keyboard macros added

	* repeat prefix added

	* capture shell output and pipe block through shell command added

	* A version for Linux is now included

	* Simple macros may be specified in the .joerc file

	* Some bugs in the paragraph reformat routine were fixed

	* The right margin may be specified in the .joerc file

	* A bug where strange things would happen if you typed \ in the
          search & replace prompt is fixed

I have time now so I should be able to come out with the rewrite real-soon. 
Oh, and it looks like it will have a macro language.  It's going to be C
except that the C pointers will be buffer pointers.  This won't make it more
complicated to use- the only change I envision beyond what's in 0.1.2 is
that ^K L will be able to take vi-style regular expressions and editor
commands.
-- 
/*  rcarter@wpi.wpi.edu */      /* Amazing */             /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## JOE 0.1.1
*Release date unknown*

*The source for this release has been lost*

Changelog:

```
FIXES AND NEW FEATURES FOR THIS VERSION

	* Left arrow jumping fixed

	* No longer touches the IXON IXOFF setting

	* Reference to Gnu EMACS removed from the copyright notice :-)

	* The patch for Undo and Redo is not needed for this version.

	* Name of initialization file changed to '.joerc'

	* Versions for ESIX and POSIX now included
	  (think you Mike Lijewski for the POSIX driver)

	* Users can now customize the help text.  The help text is now placed
	  in the initialization file

	* A compile option for passing characters with bit 7 set has been
	  added.  This is for Iceland

	* Added kill line function for the emacs people.  See 'killlin' in
          the .joerc file

	* The ioctls TIOCGSIZE and TIOCGWINSZ are used to get the
	  screen/window size.  If the window changes size, JOE resizes the
	  screen on the next key press

	* Prompts and messages wider than the screen width are now handled
	  properly
```

---

## JOE 0.1.0
**Released: 1991-09-03**

Source recovered from usenet

Original announcement:
```
Xref: funic comp.editors:2222 alt.sources:2355 alt.religion.emacs:878 comp.unix.xenix.sco:3131 comp.unix.sysv386:10434
Path: funic!fuug!mcsun!uunet!wupost!udel!sbcs.sunysb.edu!libserv1.ic.sunysb.edu!jallen
From: jallen@libserv1.ic.sunysb.edu (Joseph Allen)
Newsgroups: comp.editors,alt.sources,alt.religion.emacs,comp.unix.xenix.sco,comp.unix.sysv386
Subject: JOE Version 0.1.0
Message-ID: <1991Sep3.204511.10482@sbcs.sunysb.edu>
Date: 3 Sep 91 20:45:11 GMT
Sender: rcarter@wpi.wpi.edu
Organization: State University of New York at Stony Brook
Lines: 92
Originator: jallen@libserv1.ic.sunysb.edu
Nntp-Posting-Host: libserv1.ic.sunysb.edu

Release 0.1.0 of JOE (Joe's Own Editor):  Note that this program was
previously called 'E' (which turned out to be the RAND EDITOR and one of the
synonyms for vi) and 'J' (which turned out to be a language and the name of
another UNIX editor).  See below for list of big fixes and new features. 
Find the source for this release in 'alt.sources'

FIXES AND NEW FEATURES FOR THIS VERSION

	* Left arrow jumping fixed

	* No longer touches the IXON IXOFF setting

	* Reference to Gnu EMACS removed from the copyright notice :-)

	* The patch for Undo and Redo is not needed for this version.

	* Name of initialization file changed to '.joerc'

	* Versions for ESIX and POSIX (AIX) now included
	  (thank you Mike Lijewski for the POSIX driver)

	* Users can now customize the help text.  The help text is now placed
	  in the initialization file

	* A compile option for passing characters with bit 7 set has been
	  added.  This is for Iceland

	* Added kill line function for the emacs people.  See 'killlin' in
          the .joerc file

	* The ioctls TIOCGSIZE and TIOCGWINSZ are used to get the
	  screen/window size.  If the window changes size, JOE resizes the
	  screen on the next key press

	* Prompts and messages wider than the screen width are now handled
	  properly

Introduction

	'JOE' is a small screen editor which was designed to be easy to use
for novice users but also to be powerful and complete enough for experienced
users.  Several elements of its design are unique innovations.  Here is a copy
of the on-line help text to give you a feel for this editor: 

GO TO              DELETE    MISC      BLOCK    FIND     QUOTE    WINDOW
^B left  ^F right ^D single ^T  mode   ^KB mark ^KF text `  Ctrl  ^KO split
^Z word  ^X word  ^W >word  ^R  retype ^KK end  ^L  next ^\ bit-7 ^KI 1 / all
^A edge  ^E edge  ^O word<  ^KA center ^KC copy ^KL line FILE     ^KP up
^P up    ^N down  ^J >line  ^KJ format ^KM move EXIT     ^KD save ^KN down
^U page  ^V page  ^Y line   ^KZ shell  ^KW save ^KX save ^KR read ^KG grow
^KU top ^KV end   ^K- undo  ^K, indnt< ^KY kill ^C abort/         ^KT shrink
^G matching ([<{` ^K+ redo  ^K. indnt>             close window  ^KE get file

Other relevent features:

	* Extremely small - the XENIX version is only 58K

	* Help text can be left on while editing

	* Key layout designed to eliminate headaches: ^Q and ^S are not used,
	  both ^H and DEL are backspace.  Also, each user may customize
	  his key layout by modifying a simple initialization file

	* Versions for BSD, HPUX, POSIX (AIX), ESIX and XENIX 386 are included
	  A simple driver is also provided to ease porting to other systems

	* Currently only VT100/ANSI terminals are supported.  If the terminal
	  has scrolling regions, JOE uses them.  Has well-tuned interruptable
	  screen update algorithm

	* Has: autoindent, word-wrap, overtype/insert, picture mode (right-
	  arrow makes space past ends of lines), right margin (for paragraph
	  formatting and center), and magic tabs (the column number of text
	  after tab stops is preserved when inserting and deleting)

	* The cursor column doesn't 'jump' when you move between long and
	  short lines.  Instead the cursor column only jumps when you try to
	  edit in an invalid place or if picture mode is set, the invalid
	  place is made real by space filling

	* Editor modes can be set depending on file extension

	* No line length restrictions.  Binary files can be edited without
	  difficulty

	* Long lines are truncated, not wrapped (I.E., the screen scrolls to
	  the right to get to the truncated parts)
-- 
/*  rcarter@wpi.wpi.edu */      /* Amazing */             /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## J 0.0.1
**Released: 1991-08-23**

Source recovered from usenet

*Archival notes: Small patch to J*

Original announcement:
```
Xref: funic comp.editors:2115 alt.religion.emacs:840 alt.sources:2279 comp.unix.xenix.sco:3033
Path: funic!fuug!mcsun!uunet!bu.edu!m2c!wpi.WPI.EDU!rcarter
From: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Newsgroups: comp.editors,alt.religion.emacs,alt.sources,comp.unix.xenix.sco
Subject: Patch for Joe's Editor
Message-ID: <1991Aug23.012009.820@wpi.WPI.EDU>
Date: 23 Aug 91 01:20:09 GMT
Sender: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Organization: Kadath Tours, Inc.
Lines: 52


So much for my testing abilities... I work hard to test all these weird cases
and then only one day after posting the source someone finds a bug.  Oh well.

The Bug:  Running Undo or Redo before having done any deleting crashes the
editor

The fix:  Place the following lines in a file called 'patch0.0.1', change to
the directory containing the file 'j.c' and type this command:

	ed - j.c <patch0.0.1

--- Cut Here ---
/undo(/
+
a
if(!undorecs) return;
.
/redo(/
+
a
if(!undorecs) return;
.
/version/
s/0.0.0/0.0.1/
w
q
--- Cut Here ---

Then remake the editor.  The release number will be changed to 0.0.1

Also, feel free to change the name of the editor to 'JOE - Joe's Own Editor'
in case 'j' is already taken on your computer (if you have the language from
1989 or the editor from 1980).  This will be the name for the next complete
release of the editor, unless it to is taken :-)

Finally, feel free to change the name of 'keymap.j' file to '.joerc' in case
you like your initialization files hidden.  To do this, change the line

#define KEYMAP "keymap.j"

 to 

#define KEYMAP ".joerc"

This line can be found right at the beginning of the file j.h (remake the
editor after you do this).
-- 
/*  rcarter@wpi.wpi.edu */      /* Amazing */             /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## J 0.0.0
**Released: 1991-08-21**

Source recovered from usenet

Author's comments:

```
Here is 'J', which is not the first version of "E" released on the net, but
is pretty close.  It shows the result of some critical influence from people
on the net.  This version has:

* gap buffer

* K&R C, because it was more portable.

* multiple windows

* ~ expansion of file names

* A man page! (complete with embarrassing spelling errors :)

* Compile with 'make cruddy'.

* Still only works in 80x24 terminal

* Undelete
```

Original announcement:
```
Xref: funic alt.sources:2271 comp.editors:2096 comp.unix.xenix.sco:3018 alt.religion.emacs:834
Path: funic!fuug!mcsun!uunet!elroy.jpl.nasa.gov!usc!samsung!crackers!m2c!wpi.WPI.EDU!rcarter
From: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Newsgroups: alt.sources,comp.editors,comp.unix.xenix.sco,alt.religion.emacs
Subject: J (Joe's Editor) New Release
Message-ID: <1991Aug22.043934.1087@wpi.WPI.EDU>
Date: 22 Aug 91 04:39:34 GMT
Sender: rcarter@wpi.WPI.EDU (Randolph Carter (nee. Joseph H. Allen))
Organization: Kadath Tours, Inc.
Lines: 138



Release 0.0.0 of 'J' (Joe's Editor):  This release supersedes all previous
versions which lack a release number.  Note that this program was previously
called 'E' but the name has been changed ('E' turns out to be one of the
synonyms for 'vi').  See below for list of bug fixes and new features.
Find the 3 posts in alt.sources for the source

Introduction

	'J' is a small screen editor which was designed to be easy to use for
novice users but also to be powerful and complete enough for experienced
users.  Several elements of its design are unique innovations.  Here is a
copy of the on-line help text to give you a feel for this editor:

GO TO              DELETE    MISC      BLOCK    FIND     QUOTE    WINDOW
^B left  ^F right ^D single ^T  mode   ^KB mark ^KF text `  Ctrl  ^KO split
^Z word  ^X word  ^W >word  ^R  retype ^KK end  ^L  next ^\ bit-7 ^KI 1 / all
^A edge  ^E edge  ^O word<  ^KA center ^KC copy ^KL line FILE     ^KP up
^P up    ^N down  ^J >line  ^KJ format ^KM move EXIT     ^KD save ^KN down
^U page  ^V page  ^Y line   ^KZ shell  ^KW save ^KX save ^KR read ^KG grow
^KU top ^KV end   ^K- undo  ^K, indnt< ^KY kill ^C abort/         ^KT shrink
^G matching ([<{` ^K+ redo  ^K. indnt>             close window  ^KE get file

Other relevent features:

	* Extremely small - the XENIX version is only 58K

	* Help text can be left on while editing

	* Key layout designed to eliminate headaches: ^Q and ^S are not used,
	  both ^H and DEL are backspace.  Also, each user may customize
	  his key layout by modifying a simple initialization file

	* Versions for BSD, HPUX and XENIX 386 are included.  A simple tty
	  driver is also provided to ease porting to other systems

	* Currently only VT100/ANSI terminals are supported.  If the terminal
	  has scrolling regions, J uses them.  Has well-tuned interruptable
	  screen update algorithm

	* Has: autoindent, word-wrap, overtype/insert, picture mode (right-
	  arrow makes space past ends of lines), right margin (for paragraph
	  formatting and center), and magic tabs (the column number of text
	  after tab stops is preserved when inserting and deleting)

	* The cursor column doesn't 'jump' when you move between long and
	  short lines.  Instead the cursor column only jumps when you try to
	  edit in an invalid place or if picture mode is set, the invalid
	  place is made real by space filling

	* Editor modes can be set depending on file extension

	* No line length restrictions.  Binary files can be edited without
	  difficulty

	* Long lines are truncated, not wrapped (I.E., the screen scrolls to
	  the right to get to the truncated parts)

FIXES FOR THIS VERSION

	* Shell escape lock-ups are fixed

	* Paragraph reformat glitch is fixed

	* Cursor update screwynesses fixed for picture mode

	* Goto next word/Goto previous word/Delete word left and Delete word
	  right were made more consistant

NEW FEATURES FOR THIS VERSION

	* ~ can be used at file name prompts to expand user home directories

	* J now has undelete and redelete (you can go backwards and forewards
	  through the delete buffer to select which text you want to undelete)

	* J now has indent functions.  A marked block can be indented more
	  or less. If you use an indent function outside a marked block, the
	  lines with the same or greater indent level surrounding the cursor
	  are marked

	* Right margin was added for paragraph format and center line

	* Goto matching parenthasis (or [ { ` < )

	* ` was made the quote control character key because ^_ is not easy
	  generate on many keyboard.  `` gets `

	* tty drivers were rewritten.  This made the screen update faster
	  (now the screen update is instantaneous on 20MHz 386s).  Screen
	  update preempting also works better

THE PLAN

	Version 1.0.0 will be a complete rewrite.  It should be done sometime
before january.  These are my goals for it:

	* Block oriented software virtual memory support (for less thrashing
	  and elimination of file size limits caused by the system's process
	  size limit)

	* MS-DOS support

	* X windows support

	* Better integration with UNIX:  J will be able to process text
	  through pipes (like vi), will have standard unix regular expressions,
	  and will be usable as a 'more' program.

	* Will be terminal independant and use termcap and terminfo

	* Will have a ASCII/HEX dump display mode

	* Will have complete program developement support (save&make, next
	  error/previous error, tags file support)

	* Will have a much more powerful scrolling algorithm.  I have a
	  methode which is simpler and faster than even GNU-EMACS' Gosling
	  algorithm

	* All of this will require no changes to the basic keyboard layout-
	  maybe one more added line of help text for new things

	* It will probably have keyboard macros but it won't have much of
	  an extension language.  Maybe in version 2.0.0

	* I expect all of this not to add more than 30 or 40% to the size

		Joseph H. Allen
		28 Dale Lane
		Smithtown, N.Y. 11787

-- 
/*  rcarter@wpi.wpi.edu */      /* Amazing */             /* Joseph H. Allen */
int a[1817];main(z,p,q,r){for(p=80;q+p-80;p-=2*a[p])for(z=9;z--;)q=3&(r=time(0)
+r*57)/7,q=q?q-1?q-2?1-p%79?-1:0:p%79-77?1:0:p<1659?79:0:p>158?-79:0,q?!a[p+q*2
]?a[p+=a[p+=q]=q]=q:0:0;for(;q++-1817;)printf(q%79?"%c":"%c\n"," #"[!a[q-1]]);}
```

---

## E 0.0
**Released: 1988-09-20**

Source recovered from joe-hist archive

Author's comments:

```
This is close to the very first version of JOE (or E as it was first
called).  It has:

 * Only a single window.

 * No ~ expansion of file names.

 * Block selection is not quite like WordStar.  You set the mark with ^KB
   and then hit ^KM to cut the text between the mark and the cursor.  In
   this case, the cut text is saved in a file called "cut.c".  You hit ^T to
   insert the cut.e file at the cursor.

 * The terminal screen must be 80 x 24.

 * VT52 terminals are handled, but you have to recompile.

 * It does have word wrap, paragraph reformat, autoindent and
   picture mode.

 * No status line.

 * It does have a single page of on-line help: hit ^K H to toggle it.

 * The entire editor is a single 2800 line C file: e.c

 * Does not have gap buffer yet.

 * Note that E is ANSI-C!  I later reverted it to K&R C for more
   enhanced portability.
```
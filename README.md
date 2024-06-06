# ROOT Summer Student Course
This course targets young scientists and engineers with little or no experience of ROOT.
The basics of the package are covered as well as high level concepts of C++ and
Python.

<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution 4.0 International License</a>.

## Slides of the Course

You can find the slides of the course [here](https://docs.google.com/presentation/d/1AdyF2uaYVw7Bc8oazC75NkWz6agl4gHnKCVRd4oth4k/edit?usp=sharing).

## Using ROOT

Participants of the ROOT Summer Student course at CERN may use a ROOT installation available via lxplus or SWAN. See following paragraphs for instructions. Every participant should have a working ROOT installation **prior to the course**.

### ROOT on SWAN

[![SWAN](https://swan.web.cern.ch/sites/swan.web.cern.ch/files/pictures/open_in_swan.svg)](https://cern.ch/swanserver/cgi-bin/go?projurl=https://github.com/root-project/summer-student-course.git)

[SWAN](https://swan.cern.ch) (Service for Web-based ANalysis) is a CERN service offering a web-based platform for interactive computations and workflows. It provides access to user storage and a complete software stack, including ROOT.

In order to be able to connect and use the SWAN service during the course, participants need to make sure that:
* They have a CERN account that is associated to a computing group. They can check if they belong to a computing group at https://account.cern.ch/account/CERNAccount/AccountStatus.aspx. If a participant does not belong to any computing group, she can subscribe to the default computing group following these instructions: https://resources.web.cern.ch/resources/Help/?kbid=067030
* They have created a CERNBox account. In order to create it, they just need to connect and authenticate with their CERN username and password at https://cernbox.cern.ch
* They can log in to SWAN with their CERN username and password: https://swan.cern.ch

### ROOT on lxplus

ROOT is available on any lxplus instance at CERN. Please make sure you can establish a graphics ssh connection to `lxplus.cern.ch` using your CERN account (`ssh -XY youruser@lxplus.cern.ch`).

Different ROOT versions may be sourced via [LCG releases](https://lcgdocs.web.cern.ch/lcgdocs/lcgreleases/introduction/#setup), for example:

```
source /cvmfs/sft.cern.ch/lcg/views/LCG_103/x86_64-centos7-gcc12-opt/setup.sh
```

### Manual installation (not recommended)

ROOT can be installed on the local machine on different platforms. Installation instructions are available at https://root.cern/install


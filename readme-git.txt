Want to use a git working copy for the yosys source code?
Open "Git Bash" in this directory and run:

	mv yosys yosys.bak
	git clone https://github.com/cliffordwolf/yosys.git yosys
	cd yosys
	git checkout -B master 61f6811627
	unzip ../genfiles.zip

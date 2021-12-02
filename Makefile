.PHONY: all clean send

all:
	@$(MAKE) -C Plutonium/
	@$(MAKE) -C RsmLauncher/

clean:
	@$(MAKE) -C Plutonium/ clean
	@$(MAKE) -C RsmLauncher/ clean

send: all
	nxlink -a $(IP) RsmLauncher/RsmLauncher.nro
ifeq ($(strip $(IP)),)
	$(error "Please set IP in your environment.")
endif


# dmenu

Fork of dmenu with some patches applied and personal modifications.

## Applied patches

* [center](https://tools.suckless.org/dmenu/patches/center/): adds -c to center dmenu in the middle of the screen
* [border](https://tools.suckless.org/dmenu/patches/border/): adds border around the window, adjust border width with -bw
* [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch/): adds fuzzy-matching, toggle in config and with -F
* [fuzzyhighlight](https://tools.suckless.org/dmenu/patches/fuzzyhighlight/): adds highlighting to fuzzy-matching
* [instant](https://tools.suckless.org/dmenu/patches/instant/): with -n dmenu will auto select if only one matching option is left
* [numbers](https://tools.suckless.org/dmenu/patches/numbers/): displays number of matched and total items

## Personal modifications

### Keymaps

* Tab and Shift+Tab selects next/prev item (Tab used to complete prompt with selection)
* Right button completes prompt with current selection (used to select next item)
* Left/Up/Down buttons unchanged (Up/Down selects prev/next, Left selects prev when horizontal and moves cursor to left when vertical)


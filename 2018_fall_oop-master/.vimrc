set number
set ignorecase
set background=dark
nnoremap <F2> :w
set backspace=indent,eol,start
set cin
nnoremap <F3> :wq
set autoindent
function! ToggleNumber()
	if(&relativenumber == 1)
		set norelativenumber
		set number
	else
		set relativenumber
	end if
endfunc

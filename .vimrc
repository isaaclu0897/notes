" The Configuration File for VIM
" Optimized for C development
" Author: Isaac Lu

" disable vi compatibility
set nocompatible

" turn the line numbers on
set number

" turn the cursor line on
set cursorline

" turn the ruler on
" set ruler

" set syntax on
syntax on

" auto indent
set cindent
" set autoindent
" set smartindent

" configure tabwidth and insert spaces instead of tabs
set tabstop=4        " tab width is 4 spaces
set shiftwidth=4     " indent also with 4 spaces
set expandtab        " expand tabs to spaces

" stress search
set incsearch

" ignore case sensitive
set ignorecase

" Switch on highlighting the last used search pattern.
set hlsearch


" stress status
set laststatus=2
set statusline=[%{expand('%:p')}][%{strlen(&fenc)?&fenc:&enc},\ %{&ff},\ %{strlen(&filetype)?&filetype:'plain'}]%{FileSize()}%{IsBinary()}%=%c,%l/%L\ [%3p%%]
set showcmd



" =====personal=====

" Autofix some mistakes
cab W  w 
cab Wq wq  
cab wQ wq
cab WQ wq
cab Q  q

    
    
" =====func=====
function IsBinary()
    if (&binary == 0)
        return ""
    else
        return "[Binary]"
    endif
endfunction

function FileSize()
    let bytes = getfsize(expand("%:p"))
    if bytes <= 0
        return "[Empty]"
    endif
    if bytes < 1024
        return "[" . bytes . "B]"
    elseif bytes < 1048576
        return "[" . (bytes / 1024) . "KB]"
    else
        return "[" . (bytes / 1048576) . "MB]"
    endif
endfunction


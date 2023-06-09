%%
%% This is file `thmtools.sty',
%% generated with the docstrip utility.
%%
%% The original source files were:
%%
%% thmtools.dtx  (with options: `thmtools')
%% This is a generated file.
%% 
%% This file is part of the `thmtools' package.
%% The `thmtools' package has the LPPL maintenance status: maintained.
%% Current Maintainer is Yukai Chou, muzimuzhi@gmail.com
%% 
%% Copyright (C) 2008-2014 by Ulrich M. Schwarz
%% Copyright (C) 2019      by Frank Mittelbach
%% Copyright (C) 2020-     by Yukai Chou
%% 
%% This file may be distributed and/or modified under the
%% conditions of the LaTeX Project Public License, version 1.3c.
%% This version is obtainable at
%% http://www.latex-project.org/lppl/lppl-1-3c.txt
%% 
%% 
\NeedsTeXFormat {LaTeX2e}
\ProvidesPackage {thmtools}[2023/05/04 v0.76]
\DeclareOption{debug}{%
  \def\thmt@debug{\typeout}%
}
\let\@xa\expandafter
\let\@nx\noexpand
\def\thmt@debug{\@gobble}
\def\thmt@quark{\thmt@quark}
\newtoks\thmt@toks

\@for\thmt@opt:=lowercase,uppercase,anycase\do{%
  \@xa\DeclareOption\@xa{\thmt@opt}{%
    \@xa\PassOptionsToPackage\@xa{\CurrentOption}{thm-kv}%
  }%
}

\ProcessOptions\relax

\newcounter{thmt@dummyctr}%
\def\theHthmt@dummyctr{dummy.\arabic{thmt@dummyctr}}%
\def\thethmt@dummyctr{}%

\RequirePackage{thm-patch, thm-kv,
  thm-autoref, thm-listof,
  thm-restate}

\@ifpackageloaded{amsthm}{%
  \RequirePackage{thm-amsthm}
}{%
  \AtBeginDocument{%
  \@ifpackageloaded{amsthm}{%
    \PackageWarningNoLine{thmtools}{%
      amsthm loaded after thmtools
    }{}%
  }{}}%
}
\@ifpackageloaded{ntheorem}{%
  \RequirePackage{thm-ntheorem}
}{%
  \AtBeginDocument{%
  \@ifpackageloaded{ntheorem}{%
    \PackageWarningNoLine{thmtools}{%
      ntheorem loaded after thmtools
    }{}%
  }{}}%
}
\@ifclassloaded{beamer}{%
  \RequirePackage{thm-beamer}
}{}
\@ifclassloaded{llncs}{%
  \RequirePackage{thm-llncs}
}{}

\endinput
%%
%% End of file `thmtools.sty'.

"/Page null def\n"
"/Page# 0 def\n"
"/PDFSave null def\n"
"/DSCPageCount 0 def\n"
"/DoPDFPage {dup /Page# exch store pdfgetpage mypdfshowpage } def\n"
"\n"
"/pdfshowpage_mysetpage {	% <pagedict> pdfshowpage_mysetpage <pagedict>\n"
"  dup /CropBox pget {\n"
"      boxrect\n"
"      2 array astore /PageSize exch 4 2 roll\n"
"      neg exch neg exch 2 array astore /PageOffset exch\n"
"      << 5 1 roll >> setpagedevice\n"
"  } if\n"
"} bind def\n"
"\n"
"/mypdfshowpage		% <pagedict> pdfshowpage -\n"
" { dup /Page exch store\n"
"   pdfshowpage_init \n"
"   pdfshowpage_setpage \n"
"   pdfshowpage_mysetpage\n"
"   save /PDFSave exch store\n"
"   (before exec) VMDEBUG\n"
"     pdfshowpage_finish\n"
"   (after exec) VMDEBUG\n"
"   PDFSave restore\n"
" } bind def\n"
"\n"
"GS_PDF_ProcSet begin\n"
"pdfdict begin\n"
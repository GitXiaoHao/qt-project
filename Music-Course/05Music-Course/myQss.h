#ifndef MYQSS_H
#define MYQSS_H
#include<QString>
#endif // MYQSS_H


inline QString LoopStyle()
{
return "QPushButton"
" {"
"background-image:url(:/image/image/loop.png);"
"   background-repeat:no-repeat;"
"  background-position:center center;"
"   border:none;"

"    }"

"QPushButton:hover{"
"  background-repeat:no-repeat;"
"   background-position:center center;"
"background-image:url(:/image/image-hover/loop-hover.png);"

" }"
" QPushButton:pressed{"
"background-repeat:no-repeat;"
" background-position:center center;"
" background-image:url(:/image/image/loop.png);"

 "}";
}

inline QString LoopOneStyle()
{


    return "QPushButton"
   " {"
   "background-image:url(:/image/image/loop-one.png);"
 "   background-repeat:no-repeat;"
  "  background-position:center center;"
 "   border:none;"

"    }"

    "QPushButton:hover{"
  "  background-repeat:no-repeat;"
 "   background-position:center center;"
 "background-image:url(:/image/image-hover/loop-one-hover.png);"

   " }"
   " QPushButton:pressed{"
    "background-repeat:no-repeat;"
   " background-position:center center;"
   " background-image:url(:/image/image/loop-one.png);"

     "}";

}

inline QString RandomStyle()
{

    return "QPushButton"
   " {"
   "background-image:url(:/image/image/play-random.png);"
 "   background-repeat:no-repeat;"
  "  background-position:center center;"
 "   border:none;"

"    }"

    "QPushButton:hover{"
  "  background-repeat:no-repeat;"
 "   background-position:center center;"
 "background-image:url(:/image/image-hover/play-random-hover.png);"

   " }"
   " QPushButton:pressed{"
    "background-repeat:no-repeat;"
   " background-position:center center;"
   " background-image:url(:/image/image/play-random.png);"

     "}";

}

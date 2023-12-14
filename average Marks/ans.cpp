{\rtf1\ansi\ansicpg1252\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red99\green37\blue1;\red255\green255\blue254;\red0\green0\blue0;
\red99\green84\blue26;\red28\green85\blue26;}
{\*\expandedcolortbl;;\cssrgb\c46667\c20000\c0;\cssrgb\c100000\c100000\c99608;\cssrgb\c0\c0\c0;
\cssrgb\c46667\c40000\c13333;\cssrgb\c13333\c40000\c13333;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs28 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include\cf0 \strokec4  \cf2 \strokec2 <\cf5 \strokec5 bits/stdc++.h\cf2 \strokec2 >\cf0 \strokec4  \cb1 \
\cf2 \cb3 \strokec2 #include\cf0 \strokec4  \cf2 \strokec2 <\cf5 \strokec5 utility\cf2 \strokec2 >\cf0 \cb1 \strokec4 \
\
\pard\pardeftab720\partightenfactor0
\cf0 \cb3 pair<\cf2 \strokec2 char\cf0 \strokec4 , int> averageMarks(\cf2 \strokec2 char\cf0 \strokec4  firstLetterOfName, int m1, int m2, int m3) \{\cb1 \
\cb3     \cf6 \strokec6 // Write your code here.\cf0 \cb1 \strokec4 \
\cb3     pair<\cf2 \strokec2 char\cf0 \strokec4 ,int>p1;\cb1 \
\cb3     int ans=int((m1+m2+m3)/\cf5 \strokec5 3\cf0 \strokec4 );\cb1 \
\cb3     p1.first=firstLetterOfName;\cb1 \
\cb3     p1.second=ans;\cb1 \
\cb3     \cf2 \strokec2 return\cf0 \strokec4  p1;\cb1 \
\cb3 \}\cb1 \
\
}
#!/bin/bash
#下面设置输入文件，把用户执行dealdata.sh命令时提供的第一个参数作为输入文件名称
infile=$1
#下面设置输出文件，把用户执行dealdata.sh命令时提供的第二个参数作为输出文件名称
outfile=$2
#注意！！最后的$infile > $outfile必须跟在}’这两个字符的后面

awk -F "\t" 'BEGIN{
        id=0;
    }
    {
        id=id+1;
        gsub("℃","",$3);
        gsub("mm","",$4);
        gsub("m/s","",$5);
        gsub("hPa","",$6);
        gsub("%","",$7);
        print id"\t"$1"\t"$2":00\t"$3"\t"$4"\t"$5"\t"$6"\t"$7
    }' $infile > $outfile

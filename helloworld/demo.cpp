#!/usr/bin/crane
///*
#include "craneIO.h"
#include "stdCRN.h"
//*/
flow(flowMAIN, Module)
{
    mdlSTDOUT p;

    mdlStringSize strSize;
    mdlStringSub subSTR;
    "Hello World!\n" >> strSize.x >> subSTR.x;

    mdlGT EoS;
    strSize.size >> EoS.x;

    int idx;
    mdlINC next;
    idx >> EoS.y >> subSTR.left >> subSTR.right >> next.x;
    next.y >> next.x >> idx;
    0 >> idx;

    string strOUT;
    mdlStringPushfilter outPush;
    strOUT >> outPush.y >> p.out;
    subSTR.y >> outPush.sub;

    strSize > EoS > subSTR > outPush > next > EoS;
    p < EoS;
};

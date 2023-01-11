//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartPieQuadrant : NSObject
{
    NSArray *mWedgeLayoutInfos;
    unsigned long long mHorizontalHalfDisk;
    unsigned long long mVerticalHalfDisk;
}

@property(readonly, nonatomic) unsigned long long verticalHalfDisk; // @synthesize verticalHalfDisk=mVerticalHalfDisk;
@property(readonly, nonatomic) unsigned long long horizontalHalfDisk; // @synthesize horizontalHalfDisk=mHorizontalHalfDisk;
@property(readonly, copy, nonatomic) NSArray *wedgeLayoutInfos; // @synthesize wedgeLayoutInfos=mWedgeLayoutInfos;
- (void).cxx_destruct;
- (id)initWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2 verticalHalfDisk:(unsigned long long)arg3;

@end


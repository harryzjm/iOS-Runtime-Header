//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

@interface TSDBrushPathManipulation
{
    struct CGPath *mBrushStroke;
    double mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    double mSmallLimitWidth;
    _Bool mSplitAtSharpAngles;
}

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBasicProgressStorage : NSObject
{
    double mValue;
    double mMaxValue;
    _Bool mIndeterminate;
}

@property(getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=mIndeterminate;
@property double maxValue; // @synthesize maxValue=mMaxValue;
@property double value; // @synthesize value=mValue;

@end


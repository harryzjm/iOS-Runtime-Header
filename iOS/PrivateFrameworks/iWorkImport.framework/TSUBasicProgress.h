//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface TSUBasicProgress
{
    TSUBasicProgressStorage *mStorage;
}

@property(getter=isIndeterminate) _Bool indeterminate;
- (double)maxValue;
@property double value;
- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;

@end


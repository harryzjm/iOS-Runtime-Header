//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSUBasicProgressStorage;

@interface TSUBasicProgress
{
    TSUBasicProgressStorage *_storage;
}

- (void).cxx_destruct;
@property(getter=isIndeterminate) _Bool indeterminate;
- (double)maxValue;
@property double value;
- (id)initForSubclass;
- (id)initWithMaxValue:(double)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCCacheCoordinatorFlushPolicy : NSObject
{
    _Bool _alwaysFlushKeysWithZeroInterest;
    unsigned long long _highWaterMark;
    unsigned long long _lowWaterMark;
}

@property(nonatomic) unsigned long long lowWaterMark; // @synthesize lowWaterMark=_lowWaterMark;
@property(nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(nonatomic) _Bool alwaysFlushKeysWithZeroInterest; // @synthesize alwaysFlushKeysWithZeroInterest=_alwaysFlushKeysWithZeroInterest;
- (_Bool)canPreemptiveFlushWithDataSize:(unsigned long long)arg1;
- (_Bool)canFlushWithDataSize:(unsigned long long)arg1;

@end

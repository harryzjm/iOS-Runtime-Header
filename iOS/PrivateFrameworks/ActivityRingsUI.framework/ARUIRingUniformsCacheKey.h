//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingUniformsCacheKey : NSObject
{
    unsigned long long _hashValue;
}

+ (id)keyForRing:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRing:(id)arg1 context:(id)arg2;

@end

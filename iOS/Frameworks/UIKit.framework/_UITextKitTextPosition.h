//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextKitTextPosition
{
    long long _offset;
    long long _affinity;
}

+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
+ (id)positionWithOffset:(long long)arg1;
@property long long affinity; // @synthesize affinity=_affinity;
@property long long offset; // @synthesize offset=_offset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end


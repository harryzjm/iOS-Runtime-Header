//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKTextPosition
{
    long long _offset;
}

+ (id)zeroPosition;
+ (id)positionWithOffset:(long long)arg1;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (id)description;
- (id)summaryDescription;
- (_Bool)isEqual:(id)arg1;
- (id)positionByAddingOffset:(long long)arg1;
- (id)initWithOffset:(long long)arg1;

@end


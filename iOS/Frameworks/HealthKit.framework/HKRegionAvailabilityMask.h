//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKRegionAvailabilityMask : NSObject
{
    unsigned long long _bitmask;
    long long _group;
}

+ (id)maskWithBitmask:(unsigned long long)arg1 group:(long long)arg2;
@property(readonly, nonatomic) long long group; // @synthesize group=_group;
@property(readonly, nonatomic) unsigned long long bitmask; // @synthesize bitmask=_bitmask;
- (_Bool)_isEqualToMask:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBitMask:(unsigned long long)arg1 regionGroup:(long long)arg2;

@end

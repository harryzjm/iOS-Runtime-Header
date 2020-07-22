//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTSourceLocationVisit <NSCopying, NSSecureCoding>
{
    long long _locationOfInterestType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterestType:(long long)arg1;

@end

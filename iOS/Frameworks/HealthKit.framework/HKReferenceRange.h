//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKInspectableValueCollection, NSString;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_referenceRangeIdentifier;
    HKInspectableValueCollection *_valueRange;
}

+ (_Bool)supportsSecureCoding;
+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
@property(readonly, nonatomic) HKInspectableValueCollection *valueRange; // @synthesize valueRange=_valueRange;
@property(readonly, nonatomic) NSString *referenceRangeIdentifier; // @synthesize referenceRangeIdentifier=_referenceRangeIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end


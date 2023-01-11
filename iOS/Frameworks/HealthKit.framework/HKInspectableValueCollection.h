//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKInspectableValue, NSArray, NSString;

@interface HKInspectableValueCollection : NSObject <NSSecureCoding, NSCopying>
{
    long long _collectionType;
    NSArray *_collection;
    NSArray *_elementTags;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasNoValue:(id)arg1;
+ (id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2;
+ (id)inspectableValueCollectionListWithValues:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMax:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2;
+ (id)inspectableValueCollectionSingleWithValue:(id)arg1;
@property(readonly, nonatomic) NSArray *elementTags; // @synthesize elementTags=_elementTags;
@property(readonly, nonatomic) NSArray *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_assertCollectionType;
- (id)valuesWithTag:(id)arg1;
@property(readonly, nonatomic) NSString *unitString;
@property(readonly, nonatomic) NSArray *inspectableValues;
@property(readonly, nonatomic) HKInspectableValue *max;
@property(readonly, nonatomic) HKInspectableValue *min;
@property(readonly, nonatomic) HKInspectableValue *inspectableValue;
- (id)description;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2;
- (id)init;

@end


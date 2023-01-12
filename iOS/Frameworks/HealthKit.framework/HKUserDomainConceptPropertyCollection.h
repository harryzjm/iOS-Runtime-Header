//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSFastEnumeration-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    NSArray *_properties;
}

+ (id)propertyCollectionByMergingCollection:(id)arg1 otherCollection:(id)arg2;
+ (id)propertyCollectionByMergingOntologyContentIntoCollection:(id)arg1 fromCollection:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (id)_propertiesByType;
- (id)propertyCollectionByMerging:(id)arg1;
- (id)propertyCollectionByMergingRefreshedOntologyContentPropertyCollection:(id)arg1;
- (id)firstPropertyWithType:(long long)arg1;
- (id)collectionByAddingProperties:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) long long count;
- (id)description;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

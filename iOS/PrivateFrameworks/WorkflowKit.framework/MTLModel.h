//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/MTLModel-Protocol.h>
#import <WorkflowKit/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface MTLModel : NSObject <NSCoding, MTLModel>
{
}

+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (id)permanentPropertyKeys;
+ (id)transitoryPropertyKeys;
+ (id)propertyKeys;
+ (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
+ (void)generateAndCacheStorageBehaviors;
+ (_Bool)supportsSecureCoding;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;
+ (unsigned long long)modelVersion;
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)validate:(id *)arg1;
- (void)mergeValuesForKeysFromModel:(id)arg1;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

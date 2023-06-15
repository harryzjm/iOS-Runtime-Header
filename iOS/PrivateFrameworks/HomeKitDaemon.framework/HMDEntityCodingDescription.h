//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSEntityDescription, NSString;

__attribute__((visibility("hidden")))
@interface HMDEntityCodingDescription : NSObject
{
    NSEntityDescription *_entity;
    NSString *_typeID;
    NSString *_refContextCodingKey;
    NSString *_refContextKeyPath;
    NSEntityDescription *_refContextEntity;
    NSDictionary *_keyAttributesByCodingKey;
    NSDictionary *_attributesByCodingKey;
    NSDictionary *_attributeCodingKeysByPropertyName;
    NSDictionary *_relationshipsByCodingKey;
    NSDictionary *_relationshipCodingKeysByPropertyName;
    NSArray *_parentRelationships;
    NSDictionary *_concreteSubentitiesByTypeID;
}

- (void).cxx_destruct;
@property(readonly) NSArray *parentRelationships; // @synthesize parentRelationships=_parentRelationships;
- (id)descriptionForRelationship:(id)arg1;
- (id)descriptionForAttribute:(id)arg1;
@property(readonly) NSDictionary *concreteSubentitiesByTypeID;
@property(readonly) NSDictionary *relationshipsByCodingKey;
@property(readonly) NSDictionary *attributesByCodingKey;
@property(readonly) NSDictionary *keyAttributesByCodingKey;
@property(readonly) NSEntityDescription *refContextEntity;
@property(readonly) NSString *refContextKeyPath;
@property(readonly) NSString *refContextCodingKey;
@property(readonly) _Bool hasConcreteSubentities;
@property(readonly) NSString *typeID;
@property(readonly) NSString *name;
@property(readonly) NSEntityDescription *entity;

@end


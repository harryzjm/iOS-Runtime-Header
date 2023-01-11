//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface PLJournalEntryPayloadProperty : NSObject
{
    _Bool _requiresConversion;
    _Bool _isUUIDKey;
    _Bool _isToManySubRelationship;
    NSString *_key;
    unsigned long long _type;
    NSSet *_relationPropertyNames;
    NSDictionary *_subRelationshipProperties;
    PLJournalEntryPayloadProperty *_parentProperty;
}

+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(_Bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(_Bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 relationPropertyNames:(id)arg2;
+ (id)payloadPropertyForUUID;
@property(nonatomic) __weak PLJournalEntryPayloadProperty *parentProperty; // @synthesize parentProperty=_parentProperty;
@property(readonly, nonatomic) _Bool isToManySubRelationship; // @synthesize isToManySubRelationship=_isToManySubRelationship;
@property(readonly, nonatomic) NSDictionary *subRelationshipProperties; // @synthesize subRelationshipProperties=_subRelationshipProperties;
@property(readonly, nonatomic) NSSet *relationPropertyNames; // @synthesize relationPropertyNames=_relationPropertyNames;
@property(readonly, nonatomic) _Bool isUUIDKey; // @synthesize isUUIDKey=_isUUIDKey;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPropertyListSupportedType;
@property(readonly, nonatomic) _Bool requiresConversion;
- (id)description;
- (_Bool)isEqualToKey:(id)arg1;
- (id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(_Bool)arg4 relationPropertyNames:(id)arg5 isUUIDKey:(_Bool)arg6 isToManySubRelationship:(_Bool)arg7;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface MTChangeSet : NSObject
{
    NSSet *_changedProperties;
    NSDictionary *_changeDictionary;
}

+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3;
+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2;
+ (id)dictionaryFromChanges:(id)arg1;
@property(retain, nonatomic) NSDictionary *changeDictionary; // @synthesize changeDictionary=_changeDictionary;
@property(retain, nonatomic) NSSet *changedProperties; // @synthesize changedProperties=_changedProperties;
- (void).cxx_destruct;
- (id)description;
- (id)_deserializer;
- (id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(_Bool *)arg2;
- (id)changedValueForProperty:(id)arg1 hasProperty:(_Bool *)arg2;
- (_Bool)hasChangesInCommonWithChangeSet:(id)arg1;
- (_Bool)hasChangeForProperty:(id)arg1;
- (_Bool)hasChangesInProperties:(id)arg1;
@property(readonly, nonatomic) NSArray *changes;
- (id)changeSetByAddingChangeSet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEquivalentToChangeSet:(id)arg1;
- (_Bool)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(_Bool)arg2;
- (id)initWithChangeDictionary:(id)arg1;
- (id)initWithChanges:(id)arg1;

@end

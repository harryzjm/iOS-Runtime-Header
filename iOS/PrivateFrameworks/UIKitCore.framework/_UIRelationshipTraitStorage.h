//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorage
{
    NSOrderedSet *_relationshipCandidates;
}

- (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;

@end


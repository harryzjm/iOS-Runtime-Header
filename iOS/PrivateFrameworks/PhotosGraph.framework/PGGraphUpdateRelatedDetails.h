//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject
{
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons; // @synthesize accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons=_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property(retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons; // @synthesize accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons=_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2;
- (void)accumulateDetailsForDeletedPersonNodes:(id)arg1;
- (void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
- (id)init;

@end

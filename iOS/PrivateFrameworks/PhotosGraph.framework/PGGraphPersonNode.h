//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSString;

@interface PGGraphPersonNode <PGPersonResult>
{
}

+ (id)identifyingPropertyKeysWithProperties:(id)arg1;
+ (id)propertiesWithPerson:(id)arg1;
+ (id)personScoreSortDescriptors;
+ (unsigned long long)type;
- (id)associatedNodesForRemoval;
- (void)mergeProperties:(id)arg1;
- (id)stringDescription;
@property(readonly) unsigned long long gender;
- (id)_contactSuggestionEdgesSortedByWeight;
- (_Bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long ageCategory;
@property(readonly) _Bool isMyAcquaintance;
@property(readonly) _Bool isMyFriend;
@property(readonly) _Bool isMyCoworker;
@property(readonly) _Bool isMyFather;
@property(readonly) _Bool isMyMother;
@property(readonly) _Bool isMyParent;
@property(readonly) _Bool isMyChild;
@property(readonly) _Bool isMyPartner;
@property(readonly) _Bool isMemberOfMyFamily;
- (_Bool)_hasConfirmedRelationshipLabel:(id)arg1;
@property(readonly) NSString *contactIdentifier;
- (void)personEnumerateBirthdayMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateHomeOrWorkAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)personSocialGroupNodes;
- (id)personMomentNodes;
@property(readonly) NSDate *anniversaryDate;
@property(readonly) NSDate *potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate;
- (_Bool)belongsToBestSocialGroups;
@property(readonly) _Bool isUserCreated;
@property(readonly) _Bool isFavorite;
- (double)personScore;
- (_Bool)isMeNode;
@property(readonly) NSString *localIdentifier;
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *displayName;
- (long long)compareToPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly) Class superclass;

@end

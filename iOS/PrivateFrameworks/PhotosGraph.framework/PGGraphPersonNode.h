//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSDateComponents, NSString;

@interface PGGraphPersonNode <PGPersonResult>
{
    _Bool _isFavorite;
    _Bool _isUserCreated;
    NSString *_name;
    NSString *_localIdentifier;
    NSString *_contactIdentifier;
    NSDate *_birthdayDate;
    NSDate *_potentialBirthdayDate;
    NSDate *_anniversaryDate;
    unsigned long long _sex;
    unsigned long long _ageCategory;
}

+ (id)vipOfPerson;
+ (id)acquaintanceOfPerson;
+ (id)coworkerSocialGroupOfPerson;
+ (id)coworkerOfPerson;
+ (id)friendOfPerson;
+ (id)childOfPerson;
+ (id)familySocialGroupOfPerson;
+ (id)familyOfPerson;
+ (id)parentOfPerson;
+ (id)sonOfPerson;
+ (id)daughterOfPerson;
+ (id)sisterOfPerson;
+ (id)brotherOfPerson;
+ (id)motherOfPerson;
+ (id)fatherOfPerson;
+ (id)partnerOfPerson;
+ (id)_specialDateComponentsForDate:(id)arg1;
+ (id)specialDateForDateComponents:(id)arg1;
+ (double)specialDateTimeIntervalForDate:(id)arg1;
+ (id)propertiesWithPerson:(id)arg1;
+ (id)personSortDescriptors;
+ (id)personScoreSortDescriptors;
+ (id)filter;
+ (unsigned long long)type;
- (void).cxx_destruct;
@property(readonly) _Bool isUserCreated; // @synthesize isUserCreated=_isUserCreated;
@property(readonly) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) unsigned long long ageCategory; // @synthesize ageCategory=_ageCategory;
@property(nonatomic) unsigned long long sex; // @synthesize sex=_sex;
@property(readonly) NSDate *anniversaryDate; // @synthesize anniversaryDate=_anniversaryDate;
@property(readonly) NSDate *potentialBirthdayDate; // @synthesize potentialBirthdayDate=_potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)associatedNodesForRemoval;
@property(retain, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(retain, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property(retain, nonatomic) NSDateComponents *birthdayDateComponents;
- (void)mergeProperties:(id)arg1;
- (_Bool)isIdentifiedByProperties:(id)arg1;
- (id)stringDescription;
- (id)_contactSuggestionEdgesSortedByWeight;
- (_Bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) _Bool isMyInferredAcquaintance;
@property(readonly) _Bool isMyInferredFriend;
@property(readonly) _Bool isMyInferredCoworker;
@property(readonly) _Bool isMyInferredSibling;
@property(readonly) _Bool isMyInferredFather;
@property(readonly) _Bool isMyInferredMother;
@property(readonly) _Bool isMyInferredParent;
@property(readonly) _Bool isMyInferredChild;
@property(readonly) _Bool isMyInferredPartner;
@property(readonly) _Bool isInferredMemberOfMyFamily;
@property(readonly) _Bool isMyAcquaintance;
@property(readonly) _Bool isMyFriend;
@property(readonly) _Bool isMyCoworker;
@property(readonly) _Bool isMySibling;
@property(readonly) _Bool isMyFather;
@property(readonly) _Bool isMyMother;
@property(readonly) _Bool isMyParent;
@property(readonly) _Bool isMyChild;
@property(readonly) _Bool isMyPartner;
@property(readonly) _Bool isMemberOfMyFamily;
- (_Bool)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2;
- (void)enumerateBirthdayMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHomeOrWorkAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)socialGroupNodes;
- (id)momentNodes;
@property(readonly) unsigned long long numberOfMomentNodes;
@property(readonly) _Bool belongsToBestSocialGroups;
@property(readonly) _Bool belongsToAnySocialGroup;
@property(readonly) double personScore;
@property(readonly) _Bool isMeNode;
- (void)setBiologicalSex:(unsigned long long)arg1;
- (unsigned short)domain;
- (id)label;
@property(readonly, copy) NSString *description;
- (id)propertyDictionary;
- (_Bool)hasProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)init;
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *fullName;
- (long long)compareToPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly) Class superclass;

@end

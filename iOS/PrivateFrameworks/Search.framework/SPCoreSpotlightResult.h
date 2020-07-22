//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult
{
    _Bool _completed;
    NSString *_relatedUniqueIdentifier;
    NSString *_itemIdentifier;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long _incomingCount;
    long long _outgoingCount;
    NSString *_relatedBundleID;
    struct ranking_index_score_t _buddyScore;
}

@property(retain) NSString *relatedBundleID; // @synthesize relatedBundleID=_relatedBundleID;
@property long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property(retain) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property _Bool completed; // @synthesize completed=_completed;
@property(retain) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property(retain) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property struct ranking_index_score_t buddyScore; // @synthesize buddyScore=_buddyScore;
@property(retain) NSString *relatedUniqueIdentifier; // @synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (Class)classForCoder;
- (_Bool)hasDetail;
@property(retain) NSArray *compatibilityDescriptions;
- (id)init;

@end


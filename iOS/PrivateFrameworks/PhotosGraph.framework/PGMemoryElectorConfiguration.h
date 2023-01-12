//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, NSTimeZone, PGFeature;

@interface PGMemoryElectorConfiguration
{
    _Bool _shouldPersist;
    _Bool _useMaximumTargetNumberOfMemories;
    _Bool _skipEnrichment;
    _Bool _allowGuestAsset;
    unsigned short _pendingState;
    NSDate *_localDate;
    NSTimeZone *_timeZone;
    unsigned long long _maximumTargetNumberOfMemories;
    unsigned long long _minimumTargetNumberOfMemories;
    unsigned long long _maximumNumberOfMemoriesWithGuestAssets;
    double _maximumRatioOfGuestAssets;
    unsigned long long _numberOfDaysToLookInPast;
    unsigned long long _numberOfDaysToLookInFuture;
    unsigned long long _numberOfDaysToFocusOnNewMemoryTypes;
    unsigned long long _minimumNumberOfDaysBeforeTimeDecay;
    unsigned long long _minimumNumberOfCuratedAssets;
    NSArray *_collidableSuggestions;
    unsigned long long _requestedMemoryCategory;
    unsigned long long _requestedTriggerType;
    PGFeature *_requestedFeature;
    NSString *_requestedUniqueMemoryIdentifier;
    NSArray *_moodHistory;
}

+ (id)defaultConfigurationDictionarySource;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowGuestAsset; // @synthesize allowGuestAsset=_allowGuestAsset;
@property(retain, nonatomic) NSArray *moodHistory; // @synthesize moodHistory=_moodHistory;
@property(retain, nonatomic) NSString *requestedUniqueMemoryIdentifier; // @synthesize requestedUniqueMemoryIdentifier=_requestedUniqueMemoryIdentifier;
@property(retain, nonatomic) PGFeature *requestedFeature; // @synthesize requestedFeature=_requestedFeature;
@property(nonatomic) unsigned long long requestedTriggerType; // @synthesize requestedTriggerType=_requestedTriggerType;
@property(nonatomic) unsigned long long requestedMemoryCategory; // @synthesize requestedMemoryCategory=_requestedMemoryCategory;
@property(nonatomic) _Bool skipEnrichment; // @synthesize skipEnrichment=_skipEnrichment;
@property(retain, nonatomic) NSArray *collidableSuggestions; // @synthesize collidableSuggestions=_collidableSuggestions;
@property(nonatomic) unsigned long long minimumNumberOfCuratedAssets; // @synthesize minimumNumberOfCuratedAssets=_minimumNumberOfCuratedAssets;
@property(nonatomic) unsigned long long minimumNumberOfDaysBeforeTimeDecay; // @synthesize minimumNumberOfDaysBeforeTimeDecay=_minimumNumberOfDaysBeforeTimeDecay;
@property(nonatomic) unsigned long long numberOfDaysToFocusOnNewMemoryTypes; // @synthesize numberOfDaysToFocusOnNewMemoryTypes=_numberOfDaysToFocusOnNewMemoryTypes;
@property(nonatomic) unsigned long long numberOfDaysToLookInFuture; // @synthesize numberOfDaysToLookInFuture=_numberOfDaysToLookInFuture;
@property(nonatomic) unsigned long long numberOfDaysToLookInPast; // @synthesize numberOfDaysToLookInPast=_numberOfDaysToLookInPast;
@property(nonatomic) double maximumRatioOfGuestAssets; // @synthesize maximumRatioOfGuestAssets=_maximumRatioOfGuestAssets;
@property(nonatomic) unsigned long long maximumNumberOfMemoriesWithGuestAssets; // @synthesize maximumNumberOfMemoriesWithGuestAssets=_maximumNumberOfMemoriesWithGuestAssets;
@property(nonatomic) _Bool useMaximumTargetNumberOfMemories; // @synthesize useMaximumTargetNumberOfMemories=_useMaximumTargetNumberOfMemories;
@property(nonatomic) unsigned long long minimumTargetNumberOfMemories; // @synthesize minimumTargetNumberOfMemories=_minimumTargetNumberOfMemories;
@property(nonatomic) unsigned long long maximumTargetNumberOfMemories; // @synthesize maximumTargetNumberOfMemories=_maximumTargetNumberOfMemories;
@property(nonatomic) unsigned short pendingState; // @synthesize pendingState=_pendingState;
@property(nonatomic) _Bool shouldPersist; // @synthesize shouldPersist=_shouldPersist;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (unsigned long long)targetNumberOfMemoriesWithMemoryContext:(id)arg1 totalNumberOfMemoryNodes:(unsigned long long)arg2 referenceNumberOfDays:(unsigned long long)arg3;
- (id)futureMemoryCollisionUniversalDateInterval;
- (id)pastMemoryCollisionUniversalDateInterval;
- (id)init;

@end

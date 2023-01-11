//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGEventEnrichment-Protocol.h>
#import <PhotosGraph/PGGraphFullEvent-Protocol.h>
#import <PhotosGraph/PGGraphPhotoEvent-Protocol.h>
#import <PhotosGraph/PGGraphRelatableEvent-Protocol.h>
#import <PhotosGraph/PLMomentProtocol-Protocol.h>

@class CLLocation, CLSHolidayCalendarEventRuleTraits, NSDate, NSSet, NSString, PGGraphHighlightGroupNode, PGGraphHighlightNode;

@interface PGGraphMomentNode <PLMomentProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment>
{
    NSString *_localIdentifier;
    double _localStartTimestamp;
    double _localEndTimestamp;
    unsigned int _numberOfAssetsWithPersons:32;
    unsigned int _numberOfAssets:32;
    unsigned int _numberOfPersonNodes:16;
    unsigned int _totalNumberOfPersons:16;
    unsigned int _numberOfShinyGemAssets:32;
    unsigned int _numberOfRegularGemAssets:32;
    unsigned int _hasHigherThanImprovedAssets:1;
    unsigned int _hasAssetsWithInterestingScenes:1;
    unsigned int _containsBetterScoringAsset:1;
    unsigned int _containsNonJunkAssets:1;
    unsigned int _isInteresting:1;
    unsigned int _isInterestingWithAlternateJunking:1;
    unsigned int _isSmartInteresting:1;
    NSString *_name;
    double _inhabitationScore;
    double _contentScore;
    double _behavioralScore;
    double _universalStartTimestamp;
    double _universalEndTimestamp;
    double _scenesProcessedRatio;
    double _facesProcessedRatio;
    unsigned long long _numberOfAssetsInExtendedCuration;
}

+ (id)socialGroupInMoment;
+ (id)meaningHierarchyOfMoment;
+ (id)meaningOfMoment;
+ (id)businessOfMoment;
+ (id)petPresentInMoment;
+ (id)babyPresentInMoment;
+ (id)mobilityOfMoment;
+ (id)partOfDayOfMoment;
+ (id)addressOfMoment;
+ (id)frequentLocationOfMoment;
+ (id)personInMoment;
+ (id)publicEventOfMoment;
+ (id)poiOfMoment;
+ (id)roiOfMoment;
+ (id)weekendOfMoment;
+ (id)weekdayOfMoment;
+ (id)sceneOfMoment;
+ (id)dateOfMoment;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToMoment;
+ (id)pathFromMoment;
+ (id)firstAndLastMomentNodesInMomentNodes:(id)arg1;
+ (id)contentBasedPropertiesWithMoment:(id)arg1;
+ (id)propertiesWithMoment:(id)arg1;
+ (id)contentScoreSortDescriptors;
+ (id)scoreSortDescriptors;
+ (id)filter;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfAssetsInExtendedCuration; // @synthesize numberOfAssetsInExtendedCuration=_numberOfAssetsInExtendedCuration;
@property(nonatomic) double facesProcessedRatio; // @synthesize facesProcessedRatio=_facesProcessedRatio;
@property(nonatomic) double scenesProcessedRatio; // @synthesize scenesProcessedRatio=_scenesProcessedRatio;
@property(readonly) unsigned long long totalNumberOfPersons; // @synthesize totalNumberOfPersons=_totalNumberOfPersons;
@property(readonly) double timestampUTCEnd; // @synthesize timestampUTCEnd=_universalEndTimestamp;
@property(readonly) double timestampUTCStart; // @synthesize timestampUTCStart=_universalStartTimestamp;
@property(readonly) _Bool isSmartInteresting; // @synthesize isSmartInteresting=_isSmartInteresting;
@property(readonly) _Bool isInterestingWithAlternateJunking; // @synthesize isInterestingWithAlternateJunking=_isInterestingWithAlternateJunking;
@property(readonly) _Bool isInteresting; // @synthesize isInteresting=_isInteresting;
@property(readonly) double behavioralScore; // @synthesize behavioralScore=_behavioralScore;
@property(readonly) double contentScore; // @synthesize contentScore=_contentScore;
@property(readonly) unsigned long long numberOfShinyGemAssets; // @synthesize numberOfShinyGemAssets=_numberOfShinyGemAssets;
@property(readonly) unsigned long long numberOfRegularGemAssets; // @synthesize numberOfRegularGemAssets=_numberOfRegularGemAssets;
@property(nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly) unsigned long long numberOfAssetsWithPersons; // @synthesize numberOfAssetsWithPersons=_numberOfAssetsWithPersons;
@property(nonatomic) _Bool containsNonJunkAssets; // @synthesize containsNonJunkAssets=_containsNonJunkAssets;
@property(readonly) _Bool containsBetterScoringAsset; // @synthesize containsBetterScoringAsset=_containsBetterScoringAsset;
@property(readonly) _Bool hasAssetsWithInterestingScenes; // @synthesize hasAssetsWithInterestingScenes=_hasAssetsWithInterestingScenes;
@property(readonly) _Bool hasHigherThanImprovedAssets; // @synthesize hasHigherThanImprovedAssets=_hasHigherThanImprovedAssets;
@property(readonly) double inhabitationScore; // @synthesize inhabitationScore=_inhabitationScore;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) _Bool petIsPresent;
@property(readonly) _Bool babyIsPresent;
- (_Bool)_isMePresent;
- (unsigned long long)_eventRuleLocationTrait;
- (unsigned long long)_eventRulePeopleTrait;
@property(readonly) CLSHolidayCalendarEventRuleTraits *holidayCalendarEventRuleTraits;
- (id)associatedNodesForRemoval;
- (id)sameMonthMoments;
- (id)sameWeekendMoments;
- (id)lastWeekendMoments;
- (id)weekendNode;
- (_Bool)isWeekend;
- (id)relatableNode;
- (id)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (id)photoEvent;
- (double)weightForMoment:(id)arg1;
- (id)fetchAssetCollection;
- (id)anniversaryPersonNode;
- (id)birthdayPersonNode;
- (id)reliableMeaningLabels;
@property(readonly, nonatomic) NSString *uuid;
- (id)naturalLanguageFeatures;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)debugDictionary;
- (long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2;
- (id)laterMomentNode:(id)arg1;
- (id)earlierMomentNode:(id)arg1;
- (id)enrichableEvent;
- (id)businessedEvent;
- (id)meaningfulEvent;
- (id)scenedEvent;
- (id)peopledEvent;
- (id)locatedEvent;
- (id)timedEvent;
- (void)enumerateMeaningfulEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)meaningLabelsIncludingParents;
- (id)meaningNodes;
- (id)meaningLabels;
@property(readonly) _Bool hasMeanings;
- (double)meaningScore;
- (id)relatableEvent;
- (id)publicEventNodes;
- (id)businessNodes;
- (id)addressNodes;
@property(readonly) _Bool hasLocation;
- (id)searchConfidenceSceneNodes;
- (id)highConfidenceSceneNodes;
- (id)sceneNodes;
- (id)roiNodes;
- (id)poiNodes;
- (id)celebratedHolidayNodes;
- (id)holidayNodes;
- (id)seasonNodes;
- (id)dateNodes;
- (id)socialGroupNodes;
- (id)personNodes;
- (_Bool)hasPeopleCountingMe:(_Bool)arg1;
@property(readonly) _Bool happensAtFrequentLocation;
@property(readonly) NSSet *frequentLocationNodes;
- (void)enumerateBabyNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePetNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFrequentLocationNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)sortedMomentNodes;
- (id)momentNodes;
- (unsigned long long)numberOfMoments;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSceneNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateROINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePOINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long numberOfPersonNodes;
- (id)remoteAddressEdges;
- (void)enumerateConsolidatedAddressesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRemoteAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePreciseAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool hasAddressNodes;
- (id)countryNodes;
- (id)cityNodes;
- (id)preciseAddressEdges;
- (id)addressEdges;
@property(readonly) _Bool hasPersonNodes;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDateNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool isAggregation;
@property(readonly) _Bool isTrip;
@property(readonly) _Bool isShortTrip;
@property(readonly) _Bool isLongTrip;
- (_Bool)endsBeforeLocalDate:(id)arg1;
- (_Bool)startsAfterLocalDate:(id)arg1;
@property(retain, nonatomic) NSDate *universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate;
@property(retain, nonatomic) NSDate *localEndDate;
@property(retain, nonatomic) NSDate *localStartDate;
- (void)enumeratePartOfDayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumeratePartsOfDayWithThreshold:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_partsOfDayWithThreshold:(float)arg1;
- (void)enumerateSignificantPartsOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePartsOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)significantPartsOfDay;
- (unsigned long long)partsOfDay;
- (struct CLLocationCoordinate2D)bestLocationCoordinate;
- (id)bestAddressNode;
@property(readonly) PGGraphMomentNode *nextMomentNode;
@property(readonly) PGGraphMomentNode *previousMomentNode;
@property(readonly) _Bool isMeaningful;
@property(readonly) _Bool isPartOfTrip;
@property(readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property(readonly) PGGraphHighlightNode *highlightNode;
@property(readonly) unsigned long long locationMobilityType;
@property(readonly) _Bool isInterestingForMemories;
@property(readonly) _Bool hasEnoughFacesProcessed;
@property(readonly) _Bool hasEnoughScenesProcessed;
@property(readonly) long long breakoutOfRoutineType;
@property(readonly) _Bool isBreakoutOfRoutineHigh;
@property(readonly) _Bool happensPartiallyAtMyHomeOrWork;
@property(readonly) _Bool happensPartiallyAtMyWork;
@property(readonly) _Bool happensPartiallyAtMyHome;
@property(readonly) double neighborScore;
@property(readonly) NSString *UUID;
@property(readonly) NSString *localIdentifier;
- (unsigned short)domain;
- (id)label;
@property(readonly, copy) NSString *description;
- (void)mergeProperties:(id)arg1;
- (id)propertyDictionary;
- (_Bool)hasProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)init;
- (double)graphScore;
@property(readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

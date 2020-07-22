//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSClueCollectionJSExports-Protocol.h>
#import <MediaMiningKit/NSCoding-Protocol.h>

@class CLSInputPeopleClue, CLSMeaningClue, NSMapTable;
@protocol OS_dispatch_queue;

@interface CLSClueCollection : NSObject <NSCoding, CLSClueCollectionJSExports>
{
    unsigned long long _versionCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    CLSInputPeopleClue *_mePersonClue;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CLSInputPeopleClue *mePersonClue; // @synthesize mePersonClue=_mePersonClue;
@property(readonly) unsigned long long versionCount; // @synthesize versionCount=_versionCount;
- (void).cxx_destruct;
- (id)locationDescription;
- (id)detailedLocationDescription;
- (id)peopleDescriptionWithoutPeople:(id)arg1;
- (id)peopleDescription;
- (void)mergeClues:(id)arg1;
- (void)_mergeMeaningClue:(id)arg1;
- (void)_mergeOutputClue:(id)arg1;
- (void)_mergeInputClue:(id)arg1;
- (id)prepareOperations;
- (id)mePerson;
@property(readonly) unsigned long long numberOfPeoples;
- (id)peopleNames;
- (void)enumeratePeopleClues:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long numberOfLocations;
- (id)locations;
- (id)locationRegionsInPlacemarks;
- (id)locationRegions;
- (id)locationPlacemarks;
- (id)locationAddresses;
- (void)enumerateLocationClues:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfTimes;
- (id)localDates;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalDates;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateTimeClues:(CDUnknownBlockType)arg1;
- (long long)year;
@property(readonly) unsigned long long numberOfDays;
@property(readonly) double timeInterval;
@property(readonly) CLSMeaningClue *locationMobilityClue;
- (void)enumerateTimeOfDayClues:(CDUnknownBlockType)arg1;
- (_Bool)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (_Bool)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2;
- (id)meaningCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueMeaningCluesForKey:(id)arg1;
- (id)meaningCluesForKey:(id)arg1;
- (id)uniqueMeaningClues;
- (id)meaningClues;
- (id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (_Bool)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (_Bool)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2;
- (id)outputClues;
- (id)uniqueOutputClues;
- (id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2;
- (id)outputCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueOutputCluesForKey:(id)arg1;
- (id)outputCluesForKey:(id)arg1;
- (id)uniqueInputClues;
- (id)inputClues;
- (id)inputCluesForKey:(id)arg1;
- (void)_incrementVersionCount;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)_healthDynamismString;
- (id)_healthSpeedString;
- (id)_healthHeartBeatString;
- (id)_weatherString;
- (id)_activityString;
- (id)_petString;
- (id)_peopleString;
- (id)_locationMobilityString;
- (id)_locationString;
- (id)_timeEventString;
- (id)_timeSeasonString;
- (id)_timeDurationString;
- (id)_timeOfWeekString;
- (id)_timeOfDayString;
- (unsigned long long)clueMeaningBeatsSentenceActivity;
- (unsigned long long)clueMeaningBeatsSentenceLocation;
- (unsigned long long)clueMeaningBeatsSentenceTimeEvent;
- (id)matchingFullDescription;
- (id)matchingDescription;
- (unsigned long long)clueHealthDynamism;
- (unsigned long long)clueHealthSpeed;
- (unsigned long long)clueHealthHeartBeat;
- (unsigned long long)clueWeather;
- (id)activityEventNames;
- (unsigned long long)clueActivity;
- (unsigned long long)cluePet;
- (id)peopleTypeForPeopleName:(id)arg1;
- (unsigned long long)cluePeople;
- (id)distanceFromWork;
- (id)distanceFromHome;
- (id)locationNames;
- (id)locationCountries;
- (id)locationStates;
- (id)locationCounties;
- (id)locationCities;
- (id)locationNeighbourhoods;
- (unsigned long long)clueLocationMobility;
- (unsigned long long)clueLocation;
- (id)timeEventNames;
- (unsigned long long)clueTimeEvent;
- (unsigned long long)clueTimeSeason;
- (unsigned long long)clueTimeDuration;
- (unsigned long long)clueTimeOfWeek;
- (unsigned long long)clueTimeOfDay;

@end


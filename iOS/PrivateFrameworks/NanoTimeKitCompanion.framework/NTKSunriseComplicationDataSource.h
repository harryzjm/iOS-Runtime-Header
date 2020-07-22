//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModelCacheDataSource-Protocol.h>

@class CLLocation, NSString, NSTimer, NTKTimelineEntryModelCache;

@interface NTKSunriseComplicationDataSource <NTKTimelineEntryModelCacheDataSource>
{
    NTKTimelineEntryModelCache *_entryModelCache;
    _Bool _isWaitingForGeocodeRequest;
    struct NSString *_token;
    CLLocation *_displayedLocation;
    NSString *_locationName;
    CLLocation *_delayedLocation;
    NSTimer *_geocodeRequestDelayTimer;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1;
@property(nonatomic) _Bool isWaitingForGeocodeRequest; // @synthesize isWaitingForGeocodeRequest=_isWaitingForGeocodeRequest;
@property(retain, nonatomic) NSTimer *geocodeRequestDelayTimer; // @synthesize geocodeRequestDelayTimer=_geocodeRequestDelayTimer;
@property(retain, nonatomic) CLLocation *delayedLocation; // @synthesize delayedLocation=_delayedLocation;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) CLLocation *displayedLocation; // @synthesize displayedLocation=_displayedLocation;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)_geocodeRequestDelayTimerTriggerred;
- (void)_handleLocation:(id)arg1 error:(id)arg2;
- (_Bool)_needsToSendGeocodingRequest;
- (void)_invalidate;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(long long)arg3 haveLocation:(_Bool)arg4;
- (id)_animationGroupForNoLocation;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(long long)arg3;
- (_Bool)_needCurrentEventEntry;
- (id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id *)arg2;
- (id)loadEntryModelsForDay:(id)arg1;
- (id)_timelineEntryFromModel:(id)arg1;
- (unsigned long long)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (id)_currentEntry:(_Bool)arg1;
- (void)becomeInactive;
- (void)becomeActive;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

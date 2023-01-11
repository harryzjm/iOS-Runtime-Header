//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TIAnalyticsMetricsContext;
@protocol TIUserModelDataStoring;

@interface TIUserModelValues : NSObject
{
    NSString *_inputMode;
    id <TIUserModelDataStoring> _userModelStore;
    TIAnalyticsMetricsContext *_context;
    NSDictionary *_durableCounters;
    NSMutableDictionary *_transientCounters;
    NSDictionary *_settingsDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(readonly, nonatomic) NSDictionary *durableCounters; // @synthesize durableCounters=_durableCounters;
@property(readonly, nonatomic) id <TIUserModelDataStoring> userModelDataStore; // @synthesize userModelDataStore=_userModelStore;
@property(readonly, nonatomic) TIAnalyticsMetricsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (id)settingValueFromName:(id)arg1;
- (id)aggregatedCountFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (id)countsFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (void)addEntry:(id)arg1 toCounter:(id)arg2 forDaysPrior:(int)arg3;
- (void)addToTransientCounterFromDatabaseEntry:(id)arg1 forDaysPrior:(int)arg2;
- (int)indexFromCandidateLength:(int)arg1 forCounter:(id)arg2;
- (void)addDouble:(double)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (void)addInteger:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (id)getTransientCounterForKey:(id)arg1;
- (void)loadTransientCounter:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (void)persistForDate:(id)arg1;
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;

@end

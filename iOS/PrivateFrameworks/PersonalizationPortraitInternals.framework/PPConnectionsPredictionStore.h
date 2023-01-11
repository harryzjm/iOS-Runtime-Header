//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPConnectionsCalendarSource, PPConnectionsDuetSource, PPConnectionsFoundInAppsSource, PPConnectionsMetricsTracker, PPConnectionsNamedEntitySource, PPConnectionsParameters, PPConnectionsPasteboardSource;
@protocol OS_dispatch_queue;

@interface PPConnectionsPredictionStore : NSObject
{
    PPConnectionsParameters *_parameters;
    PPConnectionsPasteboardSource *_pasteboardSource;
    PPConnectionsCalendarSource *_calendarSource;
    PPConnectionsDuetSource *_duetSource;
    PPConnectionsNamedEntitySource *_namedEntitySource;
    PPConnectionsFoundInAppsSource *_fiaSource;
    PPConnectionsMetricsTracker *_metricsTracker;
    NSObject<OS_dispatch_queue> *_predictionQueue;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (id)cutoffCalendarEventTime;
- (id)cutoffLinguisticTriggerTime;
- (id)cutoffPasteboardItemTime;
- (id)cutoffLocationAppLastUseTime;
- (id)cutoffNamedEntityTime;
- (id)cutoffActivityTime;
- (id)calendarSource;
- (id)duetSource;
- (id)pasteboardSource;
- (id)parameters;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id *)arg6;
- (void)_asyncFillLocationData:(id)arg1 group:(id)arg2 source:(id)arg3 consumer:(unsigned long long)arg4 criteria:(id)arg5 earliestDate:(id)arg6 latestDate:(id)arg7 limit:(unsigned long long)arg8 explanationSet:(id)arg9;
- (id)initWithParameters:(id)arg1 pasteboardSource:(id)arg2 calendarSource:(id)arg3 duetSource:(id)arg4 namedEntitySource:(id)arg5 fiaSource:(id)arg6 metricsTracker:(id)arg7;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventMetricsLogger : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    NSString *_path;
    NSMutableArray *_loggedInteractionsSummary;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
    double _storeCreationDate;
}

+ (id)_portraitDirectoryAfterCreatingIfNeeded:(_Bool)arg1;
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)defaultLogger;
- (void).cxx_destruct;
- (void)dealloc;
- (id)loggedInteractionsSummaryMetrics;
- (id)_descriptionForPPRTCCategory:(unsigned short)arg1;
- (id)_descriptionForActionType:(unsigned short)arg1;
- (id)_descriptionForInterface:(unsigned short)arg1;
- (id)_interactionKeyForInterface:(unsigned short)arg1 actionType:(unsigned short)arg2;
- (id)_interactionAttributesForEventHighlight:(id)arg1;
- (_Bool)_incrementInteractionForEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventHighlight:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (id)whitelistedLogFromLog:(id)arg1;
- (id)logsToSend;
- (_Bool)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg1;
- (double)_storeAge;
- (_Bool)resetLogs;
- (id)eventsAndExtraordinaryEventsDictFromDate:(id)arg1;
- (void)logNewInteractionSummaryWithDictionary:(id)arg1;
- (void)updateAndScheduleDiskWrite;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createRTCReporting;
- (_Bool)storeToDisk;
- (id)initWithFileName:(id)arg1;
- (id)init;

@end


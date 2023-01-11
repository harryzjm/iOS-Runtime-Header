//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSampleQueryClientInterface-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface HKSampleQuery <HKSampleQueryClientInterface>
{
    unsigned long long _limit;
    _Bool _includeTimeZones;
    NSArray *_sortDescriptors;
    NSMutableArray *_samplesPendingDelivery;
    CDUnknownBlockType _resultHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
@property(nonatomic) _Bool includeTimeZones; // @synthesize includeTimeZones=_includeTimeZones;
@property(readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverSamples:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;
- (_Bool)_prepareSamplesForDelivery:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSArray *sortDescriptors;
@property(readonly) unsigned long long limit;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


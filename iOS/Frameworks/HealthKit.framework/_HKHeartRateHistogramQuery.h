//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHeartRateHistogramQueryClientInterface-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents, NSString;

@interface _HKHeartRateHistogramQuery <HKHeartRateHistogramQueryClientInterface>
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _contextStyle;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    HKQuantity *_histogramAnchor;
    HKQuantity *_histogramBucketSize;
    CDUnknownBlockType _completionHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) HKQuantity *histogramBucketSize; // @synthesize histogramBucketSize=_histogramBucketSize;
@property(readonly, nonatomic) HKQuantity *histogramAnchor; // @synthesize histogramAnchor=_histogramAnchor;
@property(readonly, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(readonly, nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)client_deliverHistogramCollection:(id)arg1 forQuery:(id)arg2;
- (void)_populateConfiguration:(id)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 contextStyle:(long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 histogramAnchor:(id)arg6 histogramBucketSize:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

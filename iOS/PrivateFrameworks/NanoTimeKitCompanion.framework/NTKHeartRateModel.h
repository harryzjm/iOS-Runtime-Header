//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKHeartRateQueryObserver-Protocol.h>

@class HKQuantitySample;
@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>
{
    id <NTKHeartRateModelDelegate> _delegate;
    HKQuantitySample *_mostRecentHeartRate;
}

@property(readonly, nonatomic) HKQuantitySample *mostRecentHeartRate; // @synthesize mostRecentHeartRate=_mostRecentHeartRate;
@property(readonly, nonatomic) __weak id <NTKHeartRateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end


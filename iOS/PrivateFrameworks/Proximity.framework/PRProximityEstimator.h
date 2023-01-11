//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log, PRProximityEstimatorDelegate;

@interface PRProximityEstimator : NSObject
{
    _Bool usingST;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *devicesMonitered;
    id <PRProximityEstimatorDelegate> _delegate;
}

@property(readonly) __weak id <PRProximityEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (_Bool)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 withError:(id *)arg4;
- (_Bool)stopEstimatingProximityFor:(id)arg1 withError:(id *)arg2;
- (_Bool)startEstimatingProximityFor:(id)arg1 peerDeviceModel:(id)arg2 withError:(id *)arg3;
- (id)initSingleThresholdEstmatorWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

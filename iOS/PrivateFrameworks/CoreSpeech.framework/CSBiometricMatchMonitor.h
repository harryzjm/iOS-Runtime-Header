//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor
{
    id <CSBiometricMatchMonitorDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;
- (void)startObserving;

@end

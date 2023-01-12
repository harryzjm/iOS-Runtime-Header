//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKCountryMonitorControlServer-Protocol.h>

@class HDPeriodicCountryMonitor, NSString;

@interface HDCountryMonitorControlServer <HKCountryMonitorControlServer>
{
    HDPeriodicCountryMonitor *_countryMonitor;
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

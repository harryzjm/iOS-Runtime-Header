//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMSymptomsHandler, NSSet;

@protocol HMSymptomsHandlerDelegate <NSObject>

@optional
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateFixState:(long long)arg2;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateCanInitiateFix:(_Bool)arg2;
- (void)fixSessionAvailabilityDidUpdateForSymptomsHandler:(HMSymptomsHandler *)arg1;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAcknowledgePrivacyTask;

@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject
{
    AMSAcknowledgePrivacyTask *_acknowledgePrivacyTask;
}

- (void).cxx_destruct;
- (void)fetchSubscriptionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAnalyticsConsent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAnalyticsConsentWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

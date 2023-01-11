//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject
{
    id <GKOnboardingFlowDelegate> _delegate;
    NSMutableDictionary *_analyticsPayload;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *analyticsPayload; // @synthesize analyticsPayload=_analyticsPayload;
@property(nonatomic) __weak id <GKOnboardingFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)didShowPrivacyNotice;
- (unsigned long long)getPrivacyNoticeVersion;
- (void)presentViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentPersonalizationScreen:(id)arg1;
- (void)presentProfilePrivacyScreen:(id)arg1;

@end

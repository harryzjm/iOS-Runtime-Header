//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol _SFDialogPresenting;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject
{
    long long _classification;
    NSDate *_dateUserLastDeclined;
    id <_SFDialogPresenting> _dialogPresenter;
}

+ (double)test_suspiciousClassificationExpirationDuration;
@property(nonatomic) __weak id <_SFDialogPresenting> dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
- (void).cxx_destruct;
- (void)_handleInput:(long long)arg1;
- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)userDeclinedCallPrompt;
- (void)userAcceptedCallPrompt;
- (void)handleNavigationToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)policyAppliesToURL:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface AAUICustodianRecoveryApprovalController : NSObject
{
    NSString *_recoverySessionID;
    UIViewController *_presenter;
    _Bool _isResetEligible;
}

+ (id)approvalControllerWithPresenter:(id)arg1 recoverySessionID:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isResetEligible; // @synthesize isResetEligible=_isResetEligible;
- (id)_actionsForRecoveryCodeAlert:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_promptForRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_validateRecoveryCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validateRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKSubcredentialInvitationFlowControllerOperation-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKHeroCardExplainationHeaderView, PKSubcredentialInvitationFlowControllerContext;
@protocol PKSubcredentialInvitationFlowControllerProtocol;

@interface PKSubcredentialInvitationAcceptedViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable>
{
    PKHeroCardExplainationHeaderView *_heroCardView;
    _Bool _isPassExpress;
    PKSubcredentialInvitationFlowControllerContext *_provisioningContext;
    id <PKSubcredentialInvitationFlowControllerProtocol> _flowController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PKSubcredentialInvitationFlowControllerProtocol> flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext; // @synthesize provisioningContext=_provisioningContext;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) unsigned long long operation;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

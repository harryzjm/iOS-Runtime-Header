//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplyController, PKApplyDocumentUploadPage, PKBusinessChatController, UIViewController;

@interface PKApplyDocumentSubmissionController
{
    PKApplyController *_applyController;
    UIViewController *_nextViewController;
    PKBusinessChatController *_businessChatController;
    PKApplyDocumentUploadPage *_documentPage;
    _Bool _isLoading;
    _Bool _isCancelling;
}

- (void).cxx_destruct;
- (void)userWantsToCancel;
- (void)_cancelledConfirmed;
- (void)_featureApplicationUpdated;
- (void)contactApplePressed;
- (void)uploadID;
- (id)nextViewController;
- (void)removeApplicationUpdateObserver;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 documentPage:(id)arg3;

@end

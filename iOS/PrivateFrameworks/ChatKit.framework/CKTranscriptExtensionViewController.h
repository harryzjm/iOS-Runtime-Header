//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class CKDetailsNavigationController, NSExtension, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKTranscriptExtensionViewController : UINavigationController
{
    NSUUID *_requestUUID;
    NSExtension *_weakExtension;
    CKDetailsNavigationController *_detailsNavigationController;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak CKDetailsNavigationController *detailsNavigationController; // @synthesize detailsNavigationController=_detailsNavigationController;
@property(nonatomic) __weak NSExtension *weakExtension; // @synthesize weakExtension=_weakExtension;
@property(retain, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void)presentDetailsNavigationController:(id)arg1;
- (void)doneButtonPressedForChatController:(id)arg1;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)presentConversationWithMessageGUID:(id)arg1 attachmentGUID:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


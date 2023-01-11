//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKRecipientSelectionController, CNComposeRecipient, NSString;

@protocol CKRecipientSelectionControllerDelegate <NSObject>
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 didFinishAvailaiblityLookupForRecipient:(CNComposeRecipient *)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 textDidChange:(NSString *)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerTabPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerReturnPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidChangeSize:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(CKRecipientSelectionController *)arg1;
@end

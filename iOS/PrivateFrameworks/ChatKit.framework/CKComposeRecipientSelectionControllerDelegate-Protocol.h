//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKRecipientSelectionControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKComposeRecipientSelectionController, CKConversation;

@protocol CKComposeRecipientSelectionControllerDelegate <NSObject, CKRecipientSelectionControllerDelegate>
- (void)recipientSelectionController:(CKComposeRecipientSelectionController *)arg1 didSelectConversation:(CKConversation *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKMediaObjectAssetMenuBuilderDelegate;

__attribute__((visibility("hidden")))
@interface CKMediaObjectAssetMenuBuilder : NSObject
{
    id <CKMediaObjectAssetMenuBuilderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKMediaObjectAssetMenuBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_deleteChatItems:(id)arg1;
- (id)_deleteMenuForChatItems:(id)arg1;
- (void)_copyChatItems:(id)arg1;
- (id)_copyActionForChatItems:(id)arg1;
- (void)_forwardChatItems:(id)arg1;
- (id)_forwardActionForChatItems:(id)arg1;
- (id)_forwardAndCopyMenuForChatItems:(id)arg1;
- (void)_replyToChatItem:(id)arg1;
- (id)_replyActionForChatItem:(id)arg1;
- (void)_tapbackChatItem:(id)arg1;
- (id)_tapbackActionForChatItem:(id)arg1;
- (id)_tapbackAndReplyMenuForChatItems:(id)arg1;
- (id)_exportActionForChatItems:(id)arg1;
- (id)_exportMenuForChatItem:(id)arg1;
- (void)_openFile:(id)arg1;
- (void)_openFiles:(id)arg1;
- (id)_openActionForChatItems:(id)arg1;
- (void)_quickLookChatItem:(id)arg1;
- (id)_quickLookActionForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (id)_quickLookAndOpenActionsForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (id)_quickLookAndOpenMenuForChatItems:(id)arg1 cursorChatItem:(id)arg2;
- (id)contextMenuForChatItems:(id)arg1 cursorChatItem:(id)arg2 isCMM:(_Bool)arg3;

@end


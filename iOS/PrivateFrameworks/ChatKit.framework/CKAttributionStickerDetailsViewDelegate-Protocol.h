//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAssociatedStickerChatItem, CKAttributionStickerDetailsView;

@protocol CKAttributionStickerDetailsViewDelegate <NSObject>
- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 downloadButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 deleteButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)attributionStickerDetailsView:(CKAttributionStickerDetailsView *)arg1 showInAppStoreButtonWasPressedForStickerChatItem:(CKAssociatedStickerChatItem *)arg2;
@end


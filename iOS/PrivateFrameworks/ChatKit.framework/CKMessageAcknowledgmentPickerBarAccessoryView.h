//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIContextMenuAccessoryView.h>

@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView
{
    _Bool _visible;
    CKMessageAcknowledgmentPickerBarViewController *_pickerViewController;
    CKMessagePartChatItem *_chatItem;
    struct CGRect _layoutBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKMessagePartChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
- (struct CGPoint)attachmentOffsetWithReferenceFrame:(struct CGRect)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithChatItem:(id)arg1 layoutBounds:(struct CGRect)arg2;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface VUITextView : UITextView
{
}

- (id)_defaultParagraphStyle;
- (void)setVuiBackgroundColor:(id)arg1;
- (struct CGSize)vui_sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) long long vuiTextAlignment;
@property(nonatomic) struct UIEdgeInsets vuiTextContainerInset;
@property(retain, nonatomic) NSString *vuiText;
@property(retain, nonatomic) NSAttributedString *vuiAttributedText;

@end


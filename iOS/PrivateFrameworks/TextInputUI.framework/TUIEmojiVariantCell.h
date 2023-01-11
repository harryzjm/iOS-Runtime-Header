//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EMFEmojiToken, UILabel;

@interface TUIEmojiVariantCell : UIView
{
    _Bool _highlighted;
    UILabel *_labelView;
    UIView *_backgroundView;
    EMFEmojiToken *_emojiToken;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) EMFEmojiToken *emojiToken; // @synthesize emojiToken=_emojiToken;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 token:(id)arg2;

@end

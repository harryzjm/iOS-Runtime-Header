//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmoji, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionViewCell
{
    UILabel *_emojiLabel;
    UIKeyboardEmoji *_emoji;
}

@property(copy, nonatomic) UIKeyboardEmoji *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;
- (id)debugDescription;
@property(nonatomic) long long emojiFontSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


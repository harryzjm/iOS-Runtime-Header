//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSAttributedString, UILabel;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell
{
    UILabel *_animationFromLabel;
    UILabel *_animationToLabel;
    unsigned long long _nestedAnimationCount;
    NSAttributedString *_displayedEmojiString;
    UILabel *_emojiLabel;
}

+ (id)_createEmojiLabel;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *emojiLabel; // @synthesize emojiLabel=_emojiLabel;
@property(retain, nonatomic) NSAttributedString *displayedEmojiString; // @synthesize displayedEmojiString=_displayedEmojiString;
- (void)setDisplayedEmojiString:(id)arg1 animated:(_Bool)arg2 withAnimationOffset:(unsigned long long)arg3;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

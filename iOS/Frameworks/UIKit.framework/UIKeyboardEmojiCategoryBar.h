//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar
{
    unsigned long long _selectedIndex;
    UIView *_scrubView;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isScrubbing;
    double _scrubStartXLocation;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)selectedIndexForTouches:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;
- (void)animateScrubberToRect:(struct CGRect)arg1;
- (struct CGRect)frameForDivider:(int)arg1;
- (void)updateCategory;
- (void)updateCategoryOnBar:(unsigned long long)arg1;
- (void)updateToCategory:(long long)arg1;
- (void)dimKeys:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)prepareForDisplay;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end


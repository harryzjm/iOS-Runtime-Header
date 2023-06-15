//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIKBRenderConfig, UIKeyboardEmojiDraggableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiVariantViewCell : UIView
{
    UIKeyboardEmojiDraggableView *_labelView;
    UIView *_backgroundView;
    _Bool _highlighted;
    UIKBRenderConfig *_renderConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)dragWillBegin:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) NSString *emoji;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


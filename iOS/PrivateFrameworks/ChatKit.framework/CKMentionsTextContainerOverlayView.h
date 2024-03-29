//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSDictionary, UITextView;

__attribute__((visibility("hidden")))
@interface CKMentionsTextContainerOverlayView : UIView
{
    UITextView *_textView;
    NSDictionary *_mentionAnimations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *mentionAnimations; // @synthesize mentionAnimations=_mentionAnimations;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)__drawGlyph:(unsigned short)arg1 textPosition:(struct CGPoint)arg2 glyphPosition:(struct CGPoint)arg3 font:(struct __CTFont *)arg4 attributes:(id)arg5 layoutFragment:(id)arg6;
- (void)_drawAnimatedMentionRun:(struct __CTRun *)arg1 textPosition:(struct CGPoint)arg2 rippler:(id)arg3 layoutFragment:(id)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (void)updateUsingAnimations:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textView:(id)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmojiKit/EMKLayoutManager.h>

@class NSMutableAttributedString, NSMutableDictionary, NSTimer, UIColor;
@protocol CKTextEntryLayoutManagerMentionsDelegate;

__attribute__((visibility("hidden")))
@interface CKTextEntryLayoutManager : EMKLayoutManager
{
    id <CKTextEntryLayoutManagerMentionsDelegate> _mentionsDelegate;
    NSMutableAttributedString *_mentionAttributes;
    UIColor *_currentMentionColor;
    double _currentMentionScale;
    UIColor *_currentMentionShadowColor;
    NSMutableDictionary *_animationsByIdentifier;
    NSTimer *_mentionTimer;
    struct CGSize _currentMentionOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *mentionTimer; // @synthesize mentionTimer=_mentionTimer;
@property(retain, nonatomic) NSMutableDictionary *animationsByIdentifier; // @synthesize animationsByIdentifier=_animationsByIdentifier;
@property(retain, nonatomic) UIColor *currentMentionShadowColor; // @synthesize currentMentionShadowColor=_currentMentionShadowColor;
@property(nonatomic) struct CGSize currentMentionOffset; // @synthesize currentMentionOffset=_currentMentionOffset;
@property(nonatomic) double currentMentionScale; // @synthesize currentMentionScale=_currentMentionScale;
@property(retain, nonatomic) UIColor *currentMentionColor; // @synthesize currentMentionColor=_currentMentionColor;
@property(retain, nonatomic) NSMutableAttributedString *mentionAttributes; // @synthesize mentionAttributes=_mentionAttributes;
@property(nonatomic) __weak id <CKTextEntryLayoutManagerMentionsDelegate> mentionsDelegate; // @synthesize mentionsDelegate=_mentionsDelegate;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)drawAttributedMentionGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(_Bool)arg1;
- (void)updateMentionDisplay;
- (void)stopTimerRemovingAttribute:(_Bool)arg1;
- (void)startTimerIfNeeded;
- (_Bool)isAnyMentionAnimationActive;
- (void)updateMentionAttributes:(id)arg1;
- (id)init;

@end


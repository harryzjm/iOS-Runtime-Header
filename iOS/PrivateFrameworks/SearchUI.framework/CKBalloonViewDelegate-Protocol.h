//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class CKBalloonTextView, CKBalloonView, NSString, UIPanGestureRecognizer, UIView;
@protocol CKTranscriptPluginView;

@protocol CKBalloonViewDelegate <NSObject>
- (void)balloonViewShouldCopyToPasteboard:(CKBalloonView *)arg1;
- (void)balloonView:(CKBalloonView *)arg1 userDidDragOutsideBalloonWithPoint:(struct CGPoint)arg2;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)liveBalloonTouched:(CKBalloonView *)arg1;
- (void)balloonViewTextViewDidChangeSelection:(CKBalloonView *)arg1 selectedText:(NSString *)arg2 textView:(CKBalloonTextView *)arg3;
- (void)balloonViewSelected:(CKBalloonView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;
- (void)balloonViewShowInlineReply:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;

@optional
- (void)reloadLayoutForBalloonView:(CKBalloonView *)arg1;
- (void)playbackSpeedDidChangeForAudioMessageBalloonView:(CKBalloonView *)arg1 playbackSpeed:(double)arg2;
- (void)audioBalloonScrubberWithRecognizer:(UIPanGestureRecognizer *)arg1 didChangeValue:(double)arg2;
- (void)audioBalloonScrubberDidChangeValue:(double)arg1;
- (void)interactionStartedWithPluginBalloonView:(CKBalloonView *)arg1;
- (void)balloonView:(CKBalloonView *)arg1 willInsertPluginViewAsSubview:(UIView<CKTranscriptPluginView> *)arg2;
- (void)tuConversationBalloonJoinButtonTapped:(CKBalloonView *)arg1;
@end


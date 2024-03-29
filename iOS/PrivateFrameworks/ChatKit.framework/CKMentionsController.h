//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKMentionsTextContainerOverlayView, CKMessageEntryRichTextView, NSAttributedString, NSMutableDictionary, NSTimer;
@protocol CKMentionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKMentionsController : NSObject
{
    id <CKMentionsControllerDelegate> _delegate;
    NSAttributedString *_mentionAttributes;
    CKMessageEntryRichTextView *_textView;
    NSMutableDictionary *_animationsByIdentifier;
    NSTimer *_mentionTimer;
    CKMentionsTextContainerOverlayView *_overlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKMentionsTextContainerOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSTimer *mentionTimer; // @synthesize mentionTimer=_mentionTimer;
@property(retain, nonatomic) NSMutableDictionary *animationsByIdentifier; // @synthesize animationsByIdentifier=_animationsByIdentifier;
@property(retain, nonatomic) CKMessageEntryRichTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSAttributedString *mentionAttributes; // @synthesize mentionAttributes=_mentionAttributes;
@property(nonatomic) __weak id <CKMentionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_delegateDidFinishMentionAnimationWithIdentifier:(id)arg1;
- (void)updateMentionDisplay;
@property(readonly, nonatomic, getter=isAnyMentionAnimationActive) _Bool anyMentionAnimationActive;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(_Bool)arg1;
- (void)stopTimerRemovingAttribute:(_Bool)arg1;
- (void)_startAnimationIfNeeded;
- (void)didSetAttributedTextOfTextView;
- (void)updateMentionAttributes:(id)arg1;
- (id)initWithEntryTextView:(id)arg1;

@end


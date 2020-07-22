//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPLayout.h>

@class NSMutableSet;

@interface STTextTangierTextLayout : TSWPLayout
{
    NSMutableSet *_addedChildren;
}

@property(retain, nonatomic) NSMutableSet *addedChildren; // @synthesize addedChildren=_addedChildren;
- (void).cxx_destruct;
- (struct CGSize)maxSize;
- (_Bool)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;
- (void)drawableAttachment:(id)arg1 didFinalizePosition:(struct CGPoint)arg2;
- (void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;
- (id)validatedLayoutForAttachedDrawable:(id)arg1;
- (id)attachedLayoutsInLayout:(id)arg1 anchored:(_Bool)arg2;
- (_Bool)pushAscendersIntoColumn;
- (_Bool)alwaysAllowWordSplit;
- (void)invalidateTextLayout;
- (void)invalidate;
- (void)validate;
- (void)addAttachmentLayout:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct __CFLocale *)hyphenationLocale;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (double)baselineForLastLine;
- (double)lineHeightGuessForFirstLine;

@end

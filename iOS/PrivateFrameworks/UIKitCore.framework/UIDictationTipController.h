//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDictationTipDeletionHandler, UIDictationTipEmojiHandler, UIDictationTipInsertionHandler, UIDictationTipModelessInputHandler, UIDictationTipPresentationHandler, UIDictationTipReplacementHandler, UIDictationTipSelectionHandler;

__attribute__((visibility("hidden")))
@interface UIDictationTipController : NSObject
{
    unsigned long long _dismissalReasonType;
    UIDictationTipPresentationHandler *_dictationTipPresentationHandler;
    UIDictationTipReplacementHandler *_dictationReplacementTipHandler;
    UIDictationTipDeletionHandler *_dictationDeletionTipHandler;
    UIDictationTipEmojiHandler *_dictationEmojiTipHandler;
    UIDictationTipSelectionHandler *_dictationSelectionTipHandler;
    UIDictationTipInsertionHandler *_dictationInsertionTipHandler;
    UIDictationTipModelessInputHandler *_dictationTipModelessInputHandler;
    CDUnknownBlockType _delayedTip;
}

+ (id)dictationTipPreferenceKey:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType delayedTip; // @synthesize delayedTip=_delayedTip;
@property(retain, nonatomic) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler; // @synthesize dictationTipModelessInputHandler=_dictationTipModelessInputHandler;
@property(retain, nonatomic) UIDictationTipInsertionHandler *dictationInsertionTipHandler; // @synthesize dictationInsertionTipHandler=_dictationInsertionTipHandler;
@property(retain, nonatomic) UIDictationTipSelectionHandler *dictationSelectionTipHandler; // @synthesize dictationSelectionTipHandler=_dictationSelectionTipHandler;
@property(retain, nonatomic) UIDictationTipEmojiHandler *dictationEmojiTipHandler; // @synthesize dictationEmojiTipHandler=_dictationEmojiTipHandler;
@property(retain, nonatomic) UIDictationTipDeletionHandler *dictationDeletionTipHandler; // @synthesize dictationDeletionTipHandler=_dictationDeletionTipHandler;
@property(retain, nonatomic) UIDictationTipReplacementHandler *dictationReplacementTipHandler; // @synthesize dictationReplacementTipHandler=_dictationReplacementTipHandler;
@property(retain, nonatomic) UIDictationTipPresentationHandler *dictationTipPresentationHandler; // @synthesize dictationTipPresentationHandler=_dictationTipPresentationHandler;
@property(nonatomic) unsigned long long dismissalReasonType; // @synthesize dismissalReasonType=_dismissalReasonType;
- (void)resetShowModelessTipSignal;
- (void)signalShowModelessTipIfNeeded;
- (void)processUserInteractionEnded;
- (void)processSoftwareKeyboardInteraction;
- (void)triggerModelessInputTipDictationStoppedSignal;
- (_Bool)modelessTipShown;
- (void)signalDictationInsertionTip:(id)arg1;
- (void)signalDictationEmojiTip:(id)arg1;
- (void)finalizeSelectionTip;
- (void)signalDictationSelectionTip:(id)arg1;
- (long long)currentDeletionEventCount;
- (void)addDeletionEventCount:(id)arg1 deletedTextRange:(struct _NSRange)arg2;
- (void)resetDeletionEventCount;
- (void)signalDictationDeletionTip:(id)arg1;
- (void)recordDictationTipDeletionText:(id)arg1;
- (void)finalizeTextWithTipType:(long long)arg1 title:(id)arg2 andTipDescription:(id)arg3;
- (void)recordDictationTipReplacementText:(id)arg1;
- (void)signalDictationReplacementTip:(id)arg1;
- (id)replaceEmojiInStringWithEmojiDictationCommand:(id)arg1;
- (void)emitTipShowingInstrumentation:(long long)arg1;
- (void)logDictationTipDimissialInstrumentation;
- (void)simulateTipShowingInstrumentation:(long long)arg1;
- (void)reset;
- (void)markDictationTipPreferenceToShown:(long long)arg1;
- (void)incrementDictationTipDisplayCount:(long long)arg1 stopFutureShowing:(_Bool)arg2;
- (void)dictationCommandUsed:(unsigned long long)arg1 firstTargetString:(id)arg2 secondTargetString:(id)arg3;
- (void)showDictationTipWithTitle:(id)arg1 description:(id)arg2 dictationTipType:(long long)arg3;
- (long long)getDictationTipSignaled;
- (_Bool)dictationTipShown:(long long)arg1;
- (void)presentDelayedTipIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


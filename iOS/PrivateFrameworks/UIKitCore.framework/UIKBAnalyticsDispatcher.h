//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject
{
    _Bool _analyticsSkipDidKeyPress;
    unsigned long long _nextCandidateReplacementSource;
    NSString *_nextCandidateReplacementRemovedText;
    NSString *_nextCandidateReplacementInsertedText;
    NSString *_nextCandidateReplacementPostCandidateInsertedText;
}

+ (void)hapticEventEngineDuration:(double)arg1 startCount:(unsigned long long)arg2 actionCount:(unsigned long long)arg3;
+ (void)keyboardCameraSessionEndedForTextContentType:(id)arg1 didFindText:(_Bool)arg2 didInsertText:(_Bool)arg3 sender:(id)arg4;
+ (void)keyplaneSwitched:(int)arg1;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3;
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(_Bool)arg2;
+ (void)didDeleteBackwardText:(id)arg1;
+ (void)didInsertText:(id)arg1 relativeRangeBefore:(struct _NSRange)arg2 selectedTextBefore:(id)arg3 withLanguage:(id)arg4;
+ (void)editingSessionEnded:(unsigned long long)arg1;
+ (void)sessionActionAnalyticsEnded:(id)arg1;
+ (void)sessionAnalyticsEnded:(id)arg1;
+ (void)handwritingResized:(id)arg1;
+ (void)globeKeySelected;
+ (void)globeKeyLongPress;
+ (void)globeKeyEducationShown:(double)arg1;
+ (void)didCandidateReplacement;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;
+ (id)allowedValuesForType:(id)arg1;
+ (void)keyboardAnalyticsDispatchWithSelector:(SEL)arg1 withTrigger:(id)arg2;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (void)decrementAllowCursorMovementCount;
+ (void)incrementAllowCursorMovementCount;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (void)deleteKeySelected:(int)arg1;
+ (void)setKeyboardTrialParameters:(id)arg1;
+ (id)currentInputMode;
+ (id)preferredEventName:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool analyticsSkipDidKeyPress; // @synthesize analyticsSkipDidKeyPress=_analyticsSkipDidKeyPress;
@property(copy, nonatomic) NSString *nextCandidateReplacementPostCandidateInsertedText; // @synthesize nextCandidateReplacementPostCandidateInsertedText=_nextCandidateReplacementPostCandidateInsertedText;
@property(copy, nonatomic) NSString *nextCandidateReplacementInsertedText; // @synthesize nextCandidateReplacementInsertedText=_nextCandidateReplacementInsertedText;
@property(copy, nonatomic) NSString *nextCandidateReplacementRemovedText; // @synthesize nextCandidateReplacementRemovedText=_nextCandidateReplacementRemovedText;
@property(nonatomic) unsigned long long nextCandidateReplacementSource; // @synthesize nextCandidateReplacementSource=_nextCandidateReplacementSource;
- (void)resetCandidateReplacementVariables;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject
{
}

+ (void)keyboardCameraSessionEndedForTextContentType:(id)arg1 didFindText:(_Bool)arg2 didInsertText:(_Bool)arg3 sender:(id)arg4;
+ (void)keyplaneSwitched:(int)arg1;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3;
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(_Bool)arg2;
+ (void)editingSessionEnded:(unsigned long long)arg1;
+ (void)sessionEfficacyAnalyticsEnded:(id)arg1;
+ (void)sessionAnalyticsEnded:(id)arg1;
+ (void)handwritingResized:(id)arg1;
+ (void)globeKeySelected;
+ (void)globeKeyLongPress;
+ (void)globeKeyEducationShown:(double)arg1;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;
+ (id)allowedValuesForType:(id)arg1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (void)deleteKeySelected:(int)arg1;
+ (id)currentInputMode;
+ (id)preferredEventName:(id)arg1;

@end


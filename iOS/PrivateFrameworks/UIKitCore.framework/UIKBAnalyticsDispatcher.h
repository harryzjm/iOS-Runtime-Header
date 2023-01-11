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

+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(_Bool)arg2;
+ (void)sessionAnalyticsEnded:(id)arg1;
+ (void)handwritingResized:(id)arg1;
+ (void)globeKeyLongPress;
+ (void)globeKeyEducationShown:(double)arg1;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;
+ (id)allowedValuesForType:(id)arg1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (id)currentInputMode;
+ (id)preferredEventName:(id)arg1;

@end

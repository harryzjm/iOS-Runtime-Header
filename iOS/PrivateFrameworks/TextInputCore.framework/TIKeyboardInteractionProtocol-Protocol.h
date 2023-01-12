//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSString, TIAutocorrectionList, TIDocumentState, TIKeyboardCandidate, TIKeyboardInput, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@protocol TIKeyboardInteractionProtocol <NSObject>
- (void)setClientID:(NSString *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)contextDidChange:(TIDocumentState *)arg1 wordDelete:(_Bool)arg2 cursorMoved:(_Bool)arg3 extendsPriorWord:(_Bool)arg4 inWord:(NSString *)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(TIKeyboardState *)arg8;
- (void)changingContextWithTrigger:(NSString *)arg1;
- (void)candidateAccepted:(TIKeyboardCandidate *)arg1 withInput:(TIKeyboardInput *)arg2 documentState:(TIDocumentState *)arg3 inputContext:(NSString *)arg4 inputStem:(NSString *)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(TIKeyboardState *)arg9;
- (void)acceptingCandidateWithTrigger:(NSString *)arg1;
- (void)candidatesOffered:(TIAutocorrectionList *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)layoutDidChange:(TIKeyboardLayout *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)addTouchEvent:(TIKeyboardTouchEvent *)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)addKeyInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2;
@end


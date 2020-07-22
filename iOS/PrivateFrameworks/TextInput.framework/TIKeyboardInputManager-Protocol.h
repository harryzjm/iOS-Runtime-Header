//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/NSObject-Protocol.h>

@class NSString, TIKeyboardCandidate, TIKeyboardInput, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@protocol TIKeyboardInputManager <NSObject>
- (void)writeTypologyLogWithCompletionHandler:(void (^)(NSURL *))arg1;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(TIKeyboardCandidate *)arg1;
- (void)textAccepted:(TIKeyboardCandidate *)arg1;
- (void)setOriginalInput:(NSString *)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2 keyboardState:(TIKeyboardState *)arg3 completionHandler:(void (^)(TIKeyboardConfiguration *))arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *))arg3;
- (void)skipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)performHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2 continuation:(void (^)(long long))arg3;
- (void)generateRefinementsForCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIAutocorrectionList *))arg3;
- (void)generateReplacementsForString:(NSString *)arg1 keyLayout:(TIKeyboardLayout *)arg2 continuation:(void (^)(NSArray *))arg3;
- (void)handleAcceptedCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *, TIKeyboardOutput *))arg3;
- (void)generateCandidatesWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(void (^)(TIKeyboardCandidateResultSet *))arg3;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(void (^)(TIAutocorrectionList *))arg3;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIAutocorrectionList *))arg2;
- (void)handleKeyboardInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardOutput *, TIKeyboardConfiguration *))arg3;
- (void)syncToKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIKeyboardConfiguration *))arg2;
@end


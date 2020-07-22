//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TIKeyboardOutput, TIKeyboardState, TIRevisionHistory;

@interface TIKeyboardInputManagerKeyboardContext : NSObject
{
    TIKeyboardOutput *_output;
    TIRevisionHistory *_revisionHistory;
    TIKeyboardState *_currentState;
}

@property(readonly, nonatomic) TIKeyboardState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) TIRevisionHistory *revisionHistory; // @synthesize revisionHistory=_revisionHistory;
@property(readonly, nonatomic) TIKeyboardOutput *output; // @synthesize output=_output;
- (void)deleteHandwritingStrokes:(id)arg1;
- (void)acceptCandidate:(id)arg1;
- (void)unmarkText:(id)arg1;
- (void)deleteForward:(unsigned long long)arg1;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)insertText:(id)arg1;
- (void)clearInputForMarkedText;
- (id)initWithKeyboardState:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    id <UITextInput> _document;
    NSMutableArray *_operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (unsigned long long)selectionChangeDelta;
- (_Bool)isNotEmpty;
- (_Bool)isEmpty;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)_performReplaceSelectedText:(id)arg1;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)performSelectRangeForSpeech:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)pushSpeechOperation:(id)arg1;
- (void)popAndInvoke;
- (double)delayAfterSelector:(SEL)arg1;
- (id)pop;
- (_Bool)hasOperations;
- (void)clearOperations;
- (void)dealloc;
- (id)init;

@end


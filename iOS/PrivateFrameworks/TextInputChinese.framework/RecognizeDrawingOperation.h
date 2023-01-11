//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CHRecognizer, NSArray, NSLocale, NSString, TIHandwritingStrokes, TIInputManagerHandwriting;

@interface RecognizeDrawingOperation : NSOperation
{
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
    NSArray *_candidates;
    NSString *_history;
    TIInputManagerHandwriting *_im;
    CHRecognizer *_recognizer;
}

+ (id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) NSString *history; // @synthesize history=_history;
@property(retain, nonatomic) TIInputManagerHandwriting *manager; // @synthesize manager=_im;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
- (void).cxx_destruct;
- (void)main;
- (void)dealloc;
- (id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary, NSString, _LTTranslationResult;
@protocol _LTSpeechTranslationDelegate;

__attribute__((visibility("hidden")))
@interface _LTSpeechTranslationResultsBuffer : NSObject
{
    _Bool _isBuffering;
    NSMutableDictionary *_lastASRResults;
    _LTTranslationResult *_translationResult;
    _Bool _didFinish;
    NSError *_error;
    id <_LTSpeechTranslationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_LTSpeechTranslationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;
- (void)speechRecognitionResult:(id)arg1;
- (_Bool)hasResults;
- (_Bool)hasFailed;
- (void)stopBuffering;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


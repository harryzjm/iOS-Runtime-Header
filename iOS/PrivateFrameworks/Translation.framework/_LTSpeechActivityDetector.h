//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

__attribute__((visibility("hidden")))
@interface _LTSpeechActivityDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    long long _position;
    id <_LTSpeechTranslationDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)addSpeechAudioData:(id)arg1;
- (id)nativeAudioFormat;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


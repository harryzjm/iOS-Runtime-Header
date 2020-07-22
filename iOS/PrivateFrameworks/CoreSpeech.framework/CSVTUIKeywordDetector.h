//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAudioCircularBuffer, CSKeywordAnalyzerNDAPI, NSString;

@interface CSVTUIKeywordDetector : NSObject
{
    NSString *_languageCode;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (void).cxx_destruct;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)triggeredUtterance:(id)arg1;
- (id)analyze:(id)arg1;
- (void)reset;
- (id)initWithLanguageCode:(id)arg1;

@end


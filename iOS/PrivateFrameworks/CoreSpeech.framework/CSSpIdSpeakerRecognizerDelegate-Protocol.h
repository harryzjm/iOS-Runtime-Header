//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol CSSpIdSpeakerRecognizer;

@protocol CSSpIdSpeakerRecognizerDelegate
- (void)speakerRecognizerFinishedProcessing:(id <CSSpIdSpeakerRecognizer>)arg1 withFinalSpeakerIdInfo:(NSDictionary *)arg2;
- (void)speakerRecognizer:(id <CSSpIdSpeakerRecognizer>)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSVoiceTriggerFirstPass, NSDictionary;

@protocol CSVoiceTriggerFirstPassDelegate <NSObject>
- (void)voiceTriggerFirstPass:(CSVoiceTriggerFirstPass *)arg1 didDetectKeyword:(NSDictionary *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSKeywordAnalyzerNDAPI, NSDictionary;

@protocol CSKeywordAnalyzerNDAPIScoreDelegate <NSObject>
- (void)keywordAnalyzerNDAPI:(CSKeywordAnalyzerNDAPI *)arg1 hasResultAvailable:(NSDictionary *)arg2 forChannel:(unsigned long long)arg3;
@end

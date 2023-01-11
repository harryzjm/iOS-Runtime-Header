//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSNowPlayingStreamConverter : NSObject
{
    unsigned long long _options;
}

+ (id)recognizedMusicSources;
+ (unsigned long long)defaultOptions;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)_canUseEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)init;

@end

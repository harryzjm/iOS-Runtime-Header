//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterVPAFPlaylist : NSObject
{
    _Bool _isLive;
    NSArray *_eventData;
    NSObject<TVPPlayback> *_player;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;
- (id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


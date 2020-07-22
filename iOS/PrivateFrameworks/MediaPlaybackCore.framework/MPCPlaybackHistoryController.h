//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>

@class MPCPlaybackEngine, MPModelPlayEvent, NSOperationQueue, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>
{
    MPCPlaybackEngine *_playbackEngine;
    NSOperationQueue *_operationQueue;
    MPModelPlayEvent *_lastRecordedPlayEvent;
    long long _currentRepeatType;
}

@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
@property(retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent; // @synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void).cxx_destruct;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

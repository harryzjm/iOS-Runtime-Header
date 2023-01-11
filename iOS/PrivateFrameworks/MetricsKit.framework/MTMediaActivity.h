//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTMetricsData, MTPAFKit;
@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject
{
    long long _type;
    id <MTMediaPlaylistItem> _playlistItem;
    MTMetricsData *_startMetricsData;
    MTMetricsData *_stopMetricsData;
    MTPAFKit *_pafKit;
}

+ (unsigned long long)startOverallPositionForItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MTPAFKit *pafKit; // @synthesize pafKit=_pafKit;
@property(retain, nonatomic) MTMetricsData *stopMetricsData; // @synthesize stopMetricsData=_stopMetricsData;
@property(retain, nonatomic) MTMetricsData *startMetricsData; // @synthesize startMetricsData=_startMetricsData;
@property(retain, nonatomic) id <MTMediaPlaylistItem> playlistItem; // @synthesize playlistItem=_playlistItem;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)stopEventHandler;
- (id)startEventHandler;
- (id)eventDataForTransitioningEvents;
- (_Bool)isStopped;
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)arg1;
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 pafKit:(id)arg3;

@end

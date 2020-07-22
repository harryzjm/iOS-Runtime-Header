//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface ISLayerPlayer : NSObject
{
    NSHashTable *_layers;
}

- (void).cxx_destruct;
- (void)_enumerateLayersWithBlock:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)play;
- (void)setRate:(float)arg1;
- (void)seekToTime:(double)arg1;
- (double)currentTime;
- (void)removeLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (id)init;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject
{
    long long _videoContextSlotIdentifier;
    CALayer *_videoLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
- (void)cleanUpSubLayerForLayer:(id)arg1;
- (id)nameForSubLayer;
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


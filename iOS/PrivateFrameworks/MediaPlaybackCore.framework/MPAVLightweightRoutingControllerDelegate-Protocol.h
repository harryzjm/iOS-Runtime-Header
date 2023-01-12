//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVLightweightRoutingController, NSArray;

@protocol MPAVLightweightRoutingControllerDelegate <NSObject>

@optional
- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangePickedRoutes:(NSArray *)arg2;
- (void)lightweightRoutingController:(MPAVLightweightRoutingController *)arg1 didChangeDevicePresenceDetected:(_Bool)arg2;
@end

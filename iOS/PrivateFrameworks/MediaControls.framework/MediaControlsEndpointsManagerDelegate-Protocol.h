//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPAVEndpointRoute, MediaControlsEndpointsManager;

@protocol MediaControlsEndpointsManagerDelegate <NSObject>
- (void)endpointsManager:(MediaControlsEndpointsManager *)arg1 defersRoutesReplacement:(MPChangeDetails * (^)(void))arg2;
- (void)endpointsManager:(MediaControlsEndpointsManager *)arg1 activeSystemRouteDidChange:(MPAVEndpointRoute *)arg2;
@end


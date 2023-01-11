//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKLocationManager : NSObject
{
}

+ (id)fallbackLocation;
+ (id)sharedLocationManager;
- (id)anyLocation;
- (id)previousLocation;
- (id)currentLocation;
- (void)stopLocationUpdatesForToken:(id)arg1;
- (id)startLocationUpdatesWithIdentifier:(id)arg1 wantsGroundElevation:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (id)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

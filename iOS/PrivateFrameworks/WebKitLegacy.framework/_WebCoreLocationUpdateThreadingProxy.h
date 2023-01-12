//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject
{
    WebGeolocationProviderIOS *_provider;
}

- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(void *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)initWithProvider:(id)arg1;

@end


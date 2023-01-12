//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCLLocationManager : NSObject
{
    struct RetainPtr<CLLocationManager> _locationManager;
    struct Client *_client;
    struct String _websiteIdentifier;
    _Bool _isWaitingForAuthorization;
    _Bool _mode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (void)stop;
- (void)dealloc;
- (id)initWithWebsiteIdentifier:(const void *)arg1 client:(struct Client *)arg2 mode:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


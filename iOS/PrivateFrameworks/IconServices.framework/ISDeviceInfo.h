//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISDeviceInfo : NSObject
{
    unsigned long long _screenClass;
    unsigned long long _deviceClass;
    unsigned long long _deviceSubtype;
    double _screenScale;
    long long _rawDeviceIdiom;
}

+ (id)sharedInstance;
@property(readonly) long long rawDeviceIdiom; // @synthesize rawDeviceIdiom=_rawDeviceIdiom;
@property(readonly) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly) unsigned long long deviceSubtype; // @synthesize deviceSubtype=_deviceSubtype;
@property(readonly) struct CGSize messagesLauncherIconSize;
@property(readonly) struct CGSize largeHomeScreenIconSize;
@property(readonly) struct CGSize homeScreenIconSize;
@property(readonly) unsigned long long ideom;
- (id)init;
@property(readonly) int deviceClass;
@property(readonly) int screenClass;

@end


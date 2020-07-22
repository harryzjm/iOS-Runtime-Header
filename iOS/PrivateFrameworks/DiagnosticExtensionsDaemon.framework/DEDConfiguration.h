//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCListener;

@interface DEDConfiguration : NSObject
{
    NSXPCListener *_anonymousListener;
}

+ (id)sharedInstance;
@property(retain) NSXPCListener *anonymousListener; // @synthesize anonymousListener=_anonymousListener;
- (void).cxx_destruct;
- (void)invalidateTestListeners;
- (id)sharedAnonymousListener;
- (id)dedDirectory;
- (id)identifier;
- (unsigned long long)connectionType;
- (id)classClusterAPIVersion;
- (id)machServiceName;
- (const char *)loggingSubsystem;
- (id)uniqueDeviceSpecifier;
- (id)deviceEnclosureColor;
- (id)deviceColor;
- (id)platform;
- (id)deviceClass;
- (id)deviceProductType;
- (id)deviceModel;
- (id)deviceName;
- (id)errorDomain;

@end


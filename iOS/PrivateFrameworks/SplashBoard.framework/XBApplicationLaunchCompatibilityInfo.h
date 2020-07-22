//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCoding-Protocol.h>

@class NSArray, NSString, XBLaunchInterface;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSCoding>
{
    XBLaunchInterface *_defaultInterface;
    _Bool _launchesOpaque;
    NSArray *_launchInterfaces;
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_sandboxPath;
    NSString *_bundleContainerPath;
}

+ (id)compatibilityInfoForAppInfo:(id)arg1;
@property(copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property(nonatomic) _Bool launchesOpaque; // @synthesize launchesOpaque=_launchesOpaque;
@property(copy, nonatomic) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *launchInterfaces; // @synthesize launchInterfaces=_launchInterfaces;
- (void).cxx_destruct;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property(readonly, nonatomic) _Bool allowsSavingLaunchImages;
@property(readonly, copy) NSString *description;
- (id)initWithBundle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UNSApplicationDescription : NSObject
{
    _Bool _requiresLocalNotifications;
    _Bool _shouldUseDefaultDataProvider;
    _Bool _systemApplication;
    _Bool _usesCloudKit;
    _Bool _supportsContentAvailableRemoteNotifications;
    _Bool _restricted;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSURL *_dataContainerURL;
    NSString *_universalApplicationIdentifier;
}

+ (id)descriptionWithApplication:(id)arg1;
+ (id)descriptionWithBundleIdentifier:(id)arg1;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) _Bool supportsContentAvailableRemoteNotifications; // @synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications;
@property(nonatomic) _Bool usesCloudKit; // @synthesize usesCloudKit=_usesCloudKit;
@property(nonatomic, getter=isSystemApplication) _Bool systemApplication; // @synthesize systemApplication=_systemApplication;
@property(nonatomic) _Bool shouldUseDefaultDataProvider; // @synthesize shouldUseDefaultDataProvider=_shouldUseDefaultDataProvider;
@property(nonatomic) _Bool requiresLocalNotifications; // @synthesize requiresLocalNotifications=_requiresLocalNotifications;
@property(copy, nonatomic) NSString *universalApplicationIdentifier; // @synthesize universalApplicationIdentifier=_universalApplicationIdentifier;
@property(copy, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

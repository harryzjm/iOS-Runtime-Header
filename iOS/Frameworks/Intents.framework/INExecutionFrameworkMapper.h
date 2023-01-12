//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface INExecutionFrameworkMapper : NSObject
{
    _Bool _filled;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_appToExtensionIdentifiers;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s _lock; // @synthesize _lock;
@property(readonly, nonatomic) _Bool _filled; // @synthesize _filled;
@property(readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers; // @synthesize _appToExtensionIdentifiers;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)arg1;
- (void)loadSystemExtensionInformation;
- (void)_addExtensionBundleIdentifier:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (void)reset;
- (void)installedApplicationsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

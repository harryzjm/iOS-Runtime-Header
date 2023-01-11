//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebPluginLoader : NSObject
{
    AMSUIWebClientContext *_context;
    NSDictionary *_installedPluginURLs;
    NSMutableDictionary *_loadedPluginsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadedPluginsMap; // @synthesize loadedPluginsMap=_loadedPluginsMap;
@property(readonly, nonatomic) NSDictionary *installedPluginURLs; // @synthesize installedPluginURLs=_installedPluginURLs;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
- (id)_loadInstalledPlugins;
- (id)pluginForBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *loadedPlugins;
- (id)initWithContext:(id)arg1;

@end

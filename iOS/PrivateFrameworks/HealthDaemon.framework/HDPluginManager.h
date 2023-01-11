//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDaemon, NSArray;

@interface HDPluginManager : NSObject
{
    NSArray *_plugins;
    HDDaemon *_daemon;
    NSArray *_allowablePluginDirectoryPaths;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *allowablePluginDirectoryPaths; // @synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id *)arg3;
- (id)pluginsConformingToProtocol:(id)arg1;
- (id)createExtensionsForProfile:(id)arg1;
- (id)createExtensionsForDaemon:(id)arg1;
- (void)_loadPlugins;
- (id)_createPluginsFromClasses:(id)arg1;
- (id)_pluginClasses;
- (id)_principalClassProtocols;
- (id)_pluginDirectoryPaths;
- (id)_internalPluginsDirectoryPaths;
- (id)_pluginsDirectoryPath;
- (id)initWithDaemon:(id)arg1;
- (id)_builtInPluginClasses;

@end

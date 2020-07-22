//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PUEditPluginManager : NSObject
{
    unsigned long long _mediaType;
    NSArray *__plugins;
}

+ (id)sharedManagerForMediaType:(unsigned long long)arg1;
@property(copy, nonatomic, setter=_setPlugins:) NSArray *_plugins; // @synthesize _plugins=__plugins;
@property(readonly) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)pluginActivities;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (void)rediscoverAvailablePlugins;
- (id)_allowedPluginTypes;
- (_Bool)hasPlugins;
- (id)_initWithMediaType:(unsigned long long)arg1;

@end


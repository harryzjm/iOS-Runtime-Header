//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WAKView, WebDataSource;
@protocol WebPluginManualLoader;

__attribute__((visibility("hidden")))
@interface WebHTMLRepresentationPrivate : NSObject
{
    WebDataSource *dataSource;
    _Bool hasSentResponseToPlugin;
    _Bool includedInWebKitStatistics;
    id <WebPluginManualLoader> manualLoader;
    WAKView *pluginView;
}

@end

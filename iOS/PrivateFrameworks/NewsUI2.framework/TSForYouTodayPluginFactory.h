//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSForYouTodayPluginFactoryType-Protocol.h>

@class MISSING_TYPE;

@interface TSForYouTodayPluginFactory : NSObject <TSForYouTodayPluginFactoryType>
{
    MISSING_TYPE *resolver;
    MISSING_TYPE *tracker;
    MISSING_TYPE *layoutOptionsProvider;
    MISSING_TYPE *paidBundleConfigManager;
    MISSING_TYPE *webEmbedViewControllerReuseManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)createPluginWithIdentifier:(id)arg1 group:(id)arg2;

@end

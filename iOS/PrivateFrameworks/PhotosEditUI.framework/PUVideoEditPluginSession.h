//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PUVideoEditPluginSession
{
    _Bool _allowLoopingVideoExtensions;
}

@property(nonatomic) _Bool allowLoopingVideoExtensions; // @synthesize allowLoopingVideoExtensions=_allowLoopingVideoExtensions;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (id)videoDataSource;
- (unsigned long long)pluginManagerMediaType;

@end


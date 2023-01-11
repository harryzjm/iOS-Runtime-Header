//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSFaviconProvider.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _SFFaviconProvider : WBSFaviconProvider
{
    NSCache *_monogramTitleToImageCache;
}

- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)arg1;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(_Bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg7;

@end

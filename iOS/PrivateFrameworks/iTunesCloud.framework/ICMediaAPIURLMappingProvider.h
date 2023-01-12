//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICMediaAPIURLMappingProvider : NSObject
{
}

+ (id)sharedProvider;
- (void)_saveCachedResponsePayload:(id)arg1 eTag:(id)arg2;
- (id)_loadCacheDictionary;
- (id)_cacheFileURL;
- (void)setCurrentURLMappingSet:(id)arg1;
- (void)clearCachedURLMappings;
- (void)updateURLMappingsWithCompletion:(CDUnknownBlockType)arg1;
- (id)getCurrentURLMappingSet;

@end

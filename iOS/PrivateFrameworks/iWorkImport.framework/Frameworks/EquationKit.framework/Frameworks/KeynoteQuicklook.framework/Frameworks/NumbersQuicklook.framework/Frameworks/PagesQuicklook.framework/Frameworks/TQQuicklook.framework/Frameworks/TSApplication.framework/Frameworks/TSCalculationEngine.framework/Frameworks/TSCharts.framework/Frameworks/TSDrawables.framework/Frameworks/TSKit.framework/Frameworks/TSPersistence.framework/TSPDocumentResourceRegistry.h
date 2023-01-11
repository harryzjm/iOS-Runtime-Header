//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TSPDocumentResourceRegistry : NSObject
{
    NSDictionary *_metadataDictionary;
}

+ (id)sharedRegistry;
+ (id)sharedRegistryMetadataURL;
+ (void)setSharedRegistryMetadataURL:(id)arg1;
- (void).cxx_destruct;
- (id)localStrategyProviderForDocumentResourceInfos:(id)arg1;
- (id)documentResourceInfosForTags:(id)arg1;
- (id)documentResourceInfoForDigestString:(id)arg1 locator:(id)arg2;
@property(readonly) NSDictionary *metadataDictionary;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)init;

@end

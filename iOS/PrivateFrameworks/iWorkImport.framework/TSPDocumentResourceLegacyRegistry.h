//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceLegacyRegistry : NSObject
{
    NSDictionary *_metadataDictionary;
}

+ (id)sharedTangierRegistry;
+ (id)sharedSageRegistry;
+ (id)sharedTangierRegistryMetadataURL;
+ (void)setSharedTangierRegistryMetadataURL:(id)arg1;
+ (id)sharedSageRegistryMetadataURL;
+ (void)setSharedSageRegistryMetadataURL:(id)arg1;
- (void).cxx_destruct;
- (id)metadataDictionaryKeyForRelativePath:(id)arg1;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1;
@property(readonly) NSDictionary *metadataDictionary;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)init;

@end


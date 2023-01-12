//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, SHJSONLCustomCatalogTransformer;
@protocol SHCustomCatalogStorage;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogContainer : NSObject
{
    id <SHCustomCatalogStorage> _container;
    SHJSONLCustomCatalogTransformer *_transformer;
}

+ (id)customCatalogURLFromURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SHJSONLCustomCatalogTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) id <SHCustomCatalogStorage> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSArray *referenceSignatures;
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;
- (id)mediaItemsForReferenceSignature:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadFromData:(id)arg1 error:(id *)arg2;
- (id)init;

@end


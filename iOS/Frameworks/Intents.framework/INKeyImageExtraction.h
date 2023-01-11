//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INImageStoring-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSDictionary, NSMutableDictionary, NSString;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding>
{
    NSMutableDictionary *_keyImagesByType;
    long long _imageTypeToStore;
    NSString *_proxyIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *keyImagesByType; // @synthesize keyImagesByType=_keyImagesByType;
@property(copy, nonatomic) NSString *proxyIdentifier; // @synthesize proxyIdentifier=_proxyIdentifier;
@property(nonatomic, setter=_setImageTypeToStore:) long long _imageTypeToStore; // @synthesize _imageTypeToStore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long servicePriority;
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id *)arg2;
- (id)storeImageSynchronously:(id)arg1 error:(id *)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)canStoreImage:(id)arg1;
@property(copy, nonatomic) INImage *keyImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

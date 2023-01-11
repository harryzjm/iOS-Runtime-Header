//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, NSArray, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying>
{
    NSArray *_storeAdamIDs;
    ICStoreRequestContext *_storeRequestContext;
    NSData *_timedMetadataData;
    long long _qualityOfService;
}

- (void).cxx_destruct;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSData *timedMetadataData; // @synthesize timedMetadataData=_timedMetadataData;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(copy, nonatomic) NSArray *storeAdamIDs; // @synthesize storeAdamIDs=_storeAdamIDs;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

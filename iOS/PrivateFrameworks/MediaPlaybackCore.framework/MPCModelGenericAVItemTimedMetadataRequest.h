//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelRequest.h>

@class ICStoreRequestContext, MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest
{
    MPCModelGenericAVItemTimedMetadataResponse *_previousResponse;
    MPModelGenericObject *_genericObject;
    ICStoreRequestContext *_storeRequestContext;
    NSArray *_timedMetadataGroups;
}

+ (id)metadataIdentifiers;
@property(readonly, copy, nonatomic) NSArray *timedMetadataGroups; // @synthesize timedMetadataGroups=_timedMetadataGroups;
@property(readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(readonly, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3;

@end


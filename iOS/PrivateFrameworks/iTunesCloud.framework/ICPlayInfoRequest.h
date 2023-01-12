//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICPlayInfoResponse, ICStoreRequestContext, NSArray, NSData, NSNumber, NSString;

@interface ICPlayInfoRequest
{
    ICStoreRequestContext *_requestContext;
    ICPlayInfoResponse *_response;
    NSString *_playerGUID;
    NSData *_SICData;
    NSArray *_sinfs;
    NSNumber *_DSID;
    NSNumber *_contentIdentifier;
    NSString *_subscriptionPlaybackType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subscriptionPlaybackType; // @synthesize subscriptionPlaybackType=_subscriptionPlaybackType;
@property(copy, nonatomic) NSNumber *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_SICData;
@property(copy, nonatomic) NSString *playerGUID; // @synthesize playerGUID=_playerGUID;
- (_Bool)_hasRentalInfo;
- (id)_getSinfParamValue:(int)arg1;
- (void)execute;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1;

@end

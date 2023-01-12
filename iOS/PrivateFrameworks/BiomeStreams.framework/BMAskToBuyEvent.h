//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSNumber, NSString;

@interface BMAskToBuyEvent <BMStoreData, BMProtoBufWrapper>
{
    int _status;
    double _eventTime;
    NSString *_userID;
    NSString *_requestID;
    NSString *_actionUserID;
    NSString *_itemTitle;
    NSString *_itemDescription;
    NSString *_thumbnailPath;
    NSString *_itemLocalizedPrice;
    NSNumber *_itemStarRating;
    NSString *_itemAgeRating;
    NSString *_productType;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *itemAgeRating; // @synthesize itemAgeRating=_itemAgeRating;
@property(copy, nonatomic) NSNumber *itemStarRating; // @synthesize itemStarRating=_itemStarRating;
@property(copy, nonatomic) NSString *itemLocalizedPrice; // @synthesize itemLocalizedPrice=_itemLocalizedPrice;
@property(copy, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *actionUserID; // @synthesize actionUserID=_actionUserID;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) int status; // @synthesize status=_status;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)encodeAsProto;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithRequestID:(id)arg1 status:(int)arg2 eventTime:(double)arg3 userID:(id)arg4 actionUserID:(id)arg5 itemTitle:(id)arg6 itemDescription:(id)arg7 itemLocalizedPrice:(id)arg8 thumbnailPath:(id)arg9 ageRating:(id)arg10 starRating:(id)arg11 productType:(id)arg12;
- (id)initWithRequestID:(id)arg1 status:(int)arg2 eventTime:(double)arg3 userID:(id)arg4 actionUserID:(id)arg5 itemTitle:(id)arg6 itemDescription:(id)arg7 itemLocalizedPrice:(id)arg8 thumbnailPath:(id)arg9 ageRating:(id)arg10 starRating:(id)arg11;
- (_Bool)validNonOptionalProperty:(id)arg1 propertyName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

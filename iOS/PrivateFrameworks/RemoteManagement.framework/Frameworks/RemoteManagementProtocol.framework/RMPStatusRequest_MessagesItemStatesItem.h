//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSArray, NSDate, NSString;

@interface RMPStatusRequest_MessagesItemStatesItem : CEMPayloadBase
{
    NSString *_serverHash;
    NSArray *_assetsUsed;
    NSDate *_timestamp;
    NSString *_status;
    NSArray *_reason;
    NSArray *_errorChain;
    CEMAnyPayload *_payload;
}

+ (id)buildRequiredOnlyWithTimestamp:(id)arg1 withStatus:(id)arg2;
+ (id)buildWithServerHash:(id)arg1 withAssetsUsed:(id)arg2 withTimestamp:(id)arg3 withStatus:(id)arg4 withReason:(id)arg5 withErrorChain:(id)arg6 withPayload:(id)arg7;
+ (id)allowedKeys;
@property(copy, nonatomic) CEMAnyPayload *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSArray *errorChain; // @synthesize errorChain=_errorChain;
@property(copy, nonatomic) NSArray *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSArray *assetsUsed; // @synthesize assetsUsed=_assetsUsed;
@property(copy, nonatomic) NSString *serverHash; // @synthesize serverHash=_serverHash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ChannelActivityActivationRequest, ChannelActivityDeactivationRequest, ChannelActivityPollingRequest;

__attribute__((visibility("hidden")))
@interface SharedChannelActivityRequest : PBRequest
{
    ChannelActivityActivationRequest *_activationRequest;
    ChannelActivityDeactivationRequest *_deactivationRequest;
    ChannelActivityPollingRequest *_pollingRequest;
    int _request;
    struct {
        unsigned int request:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChannelActivityPollingRequest *pollingRequest; // @synthesize pollingRequest=_pollingRequest;
@property(retain, nonatomic) ChannelActivityDeactivationRequest *deactivationRequest; // @synthesize deactivationRequest=_deactivationRequest;
@property(retain, nonatomic) ChannelActivityActivationRequest *activationRequest; // @synthesize activationRequest=_activationRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)clearOneofValuesForRequest;
- (int)StringAsRequest:(id)arg1;
- (id)requestAsString:(int)arg1;
@property(nonatomic) _Bool hasRequest;
@property(nonatomic) int request; // @synthesize request=_request;
@property(readonly, nonatomic) _Bool hasPollingRequest;
@property(readonly, nonatomic) _Bool hasDeactivationRequest;
@property(readonly, nonatomic) _Bool hasActivationRequest;

@end


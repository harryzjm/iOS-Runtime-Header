//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HAP2CoAPIOConsumerInfo
{
    struct coap_session_t *_session;
}

@property(nonatomic) struct coap_session_t *session; // @synthesize session=_session;
- (id)initWithConsumer:(id)arg1;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HMFNetAddressIPV6
{
    struct sockaddr_in6 *_internal;
}

@property(readonly, nonatomic) struct sockaddr_in6 *internal; // @synthesize internal=_internal;
- (id)addressString;
- (unsigned long long)addressFamily;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;
- (id)init;

@end

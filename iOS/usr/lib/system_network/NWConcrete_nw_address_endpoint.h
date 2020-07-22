//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_address_endpoint
{
    struct sockaddr_storage address;
}

- (unsigned long long)getHash;
- (_Bool)isEqualToEndpoint:(id)arg1 matchInterface:(_Bool)arg2;
- (const char *)getDescription;
- (unsigned short)port;
- (id)copyDictionary;
- (unsigned int)type;
- (id)initWithAddress:(const struct sockaddr *)arg1;

@end


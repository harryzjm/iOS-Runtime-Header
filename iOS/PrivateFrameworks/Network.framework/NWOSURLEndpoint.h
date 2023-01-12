//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NWOSURLEndpoint
{
    struct __CFURL *url_ref;
    unsigned short port;
    char *url;
    char *scheme;
    char *hostname;
    char *path;
    char *sanitized_url;
    char url_hash[9];
    unsigned int inferred_port:1;
    unsigned int __pad_bits:7;
}

- (unsigned long long)getHash;
- (id)copyEndpoint;
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (char *)createDescription:(_Bool)arg1;
- (const char *)domainForPolicy;
- (id)copyDictionary;
- (unsigned short)port;
- (const char *)hostname;
- (unsigned int)type;
- (void)dealloc;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWOSCustomEndpoint
{
    NSObject<OS_dispatch_data> *data;
    CDUnknownBlockType resolver_block;
    unsigned int type;
}

- (void).cxx_destruct;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (char *)createDescription:(_Bool)arg1;
- (id)copyDictionary;
- (unsigned int)type;

@end


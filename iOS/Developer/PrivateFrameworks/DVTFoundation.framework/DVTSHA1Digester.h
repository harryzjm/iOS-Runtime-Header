//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DVTSHA1Digester
{
    struct CC_SHA1state_st _ctxt;
}

- (id)digest;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface asn1IntegerToken
{
    unsigned long long mValue;
}

@property(readonly) unsigned long long value; // @synthesize value=mValue;
- (id)description;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NFCISO15693CustomCommandConfiguration
{
    unsigned char _flags;
    unsigned long long _manufacturerCode;
    unsigned long long _customCommandCode;
    NSData *_requestParameters;
}

@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSData *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(nonatomic) unsigned long long customCommandCode; // @synthesize customCommandCode=_customCommandCode;
@property(nonatomic) unsigned long long manufacturerCode; // @synthesize manufacturerCode=_manufacturerCode;
- (id)asNSDataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 maximumRetries:(unsigned long long)arg4 retryInterval:(double)arg5;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


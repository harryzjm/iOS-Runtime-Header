//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest
{
    AAGrandSlamSigner *_grandSlamSigner;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AAPaymentSummaryRequest
{
    NSString *_secondaryAuthToken;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property(copy, nonatomic) NSString *secondaryAuthToken; // @synthesize secondaryAuthToken=_secondaryAuthToken;
- (id)urlRequest;
- (_Bool)forceGSToken;
- (id)urlString;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface AAQuotaInfoRequest
{
    _Bool _isDetailedRequest;
    ACAccount *_account;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;
- (id)initDetailedRequestWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)urlString;

@end

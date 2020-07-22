//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXInProcessProvider;

@interface CXInProcessCallSource
{
    CXInProcessProvider *_provider;
}

@property(retain, nonatomic) CXInProcessProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)isPermittedToUsePrivateAPI;
- (_Bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)identifier;
- (id)vendorProtocolDelegate;

@end


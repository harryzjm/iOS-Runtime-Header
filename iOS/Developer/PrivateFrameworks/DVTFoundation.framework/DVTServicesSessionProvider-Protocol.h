//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _TtC13DVTFoundation36DVTServicesSessionProviderCredential;
@protocol DVTServicesSession;

@protocol DVTServicesSessionProvider
@property(readonly) NSString *userDescription;
@property(readonly) _TtC13DVTFoundation36DVTServicesSessionProviderCredential *serializableCredential;
- (id <DVTServicesSession>)servicesSessionWithError:(id *)arg1;
@end


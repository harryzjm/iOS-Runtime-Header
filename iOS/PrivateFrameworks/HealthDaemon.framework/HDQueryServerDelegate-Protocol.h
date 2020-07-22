//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDQueryServer, HDReadAuthorizationStatus, HKObjectType, NSArray, NSSet;

@protocol HDQueryServerDelegate <NSObject>
- (unsigned int)clientSDKVersionForQueryServer:(HDQueryServer *)arg1;
- (void)queryServerDidFinish:(HDQueryServer *)arg1;
- (void)queryServer:(HDQueryServer *)arg1 requestsAuthorizationForSamples:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (HDReadAuthorizationStatus *)readAuthorizationStatusForQueryServer:(HDQueryServer *)arg1 type:(HKObjectType *)arg2 error:(id *)arg3;
- (_Bool)queryServer:(HDQueryServer *)arg1 isAuthorizationStatusDeterminedForTypes:(NSSet *)arg2 error:(id *)arg3;
- (NSArray *)queryServer:(HDQueryServer *)arg1 filterSamplesForReadAuthorization:(NSArray *)arg2;
@end

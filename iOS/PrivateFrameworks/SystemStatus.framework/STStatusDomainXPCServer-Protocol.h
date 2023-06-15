//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet;
@protocol STStatusDomainUserInteraction;

@protocol STStatusDomainXPCServer <NSObject>
- (void)serverDataForDomains:(NSSet *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)reportUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forDomain:(unsigned long long)arg2;
- (void)stopObservingDomain:(NSNumber *)arg1;
- (void)observeDomain:(NSNumber *)arg1 withPreferredLocalizations:(NSArray *)arg2;
@end


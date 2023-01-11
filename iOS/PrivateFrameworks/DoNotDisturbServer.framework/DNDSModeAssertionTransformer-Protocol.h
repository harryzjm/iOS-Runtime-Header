//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDModeAssertion, DNDModeAssertionLifetime, NSString;

@protocol DNDSModeAssertionTransformer <NSObject>

@optional
- (DNDModeAssertionLifetime *)transformedLifetimeForModeAssertion:(DNDModeAssertion *)arg1;
- (NSString *)transformedModeIdentifierForModeAssertion:(DNDModeAssertion *)arg1;
@end

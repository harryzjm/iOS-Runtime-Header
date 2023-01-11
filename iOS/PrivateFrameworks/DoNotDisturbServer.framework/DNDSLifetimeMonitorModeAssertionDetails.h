//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDModeAssertion, DNDModeAssertionLifetime;

@interface DNDSLifetimeMonitorModeAssertionDetails : NSObject
{
    DNDModeAssertion *_modeAssertion;
    DNDModeAssertionLifetime *_effectiveLifetime;
}

@property(readonly, copy, nonatomic) DNDModeAssertionLifetime *effectiveLifetime; // @synthesize effectiveLifetime=_effectiveLifetime;
@property(readonly, copy, nonatomic) DNDModeAssertion *modeAssertion; // @synthesize modeAssertion=_modeAssertion;
- (void).cxx_destruct;
- (id)initWithModeAssertion:(id)arg1 effectiveLifetime:(id)arg2;

@end

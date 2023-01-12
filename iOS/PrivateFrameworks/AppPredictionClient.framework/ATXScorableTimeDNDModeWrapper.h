//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXScorableTimePeriodProtocol-Protocol.h>

@class DNDMode, NSString;

@interface ATXScorableTimeDNDModeWrapper : NSObject <ATXScorableTimePeriodProtocol>
{
    DNDMode *_dndMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DNDMode *dndMode; // @synthesize dndMode=_dndMode;
@property(readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property(readonly, nonatomic) NSString *scorableTimeIdentifier;
- (id)initWithDNDMode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

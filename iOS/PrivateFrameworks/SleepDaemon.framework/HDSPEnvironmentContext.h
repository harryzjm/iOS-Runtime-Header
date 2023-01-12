//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>

@class HDSPSleepScheduleModelChangeEvaluation, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPEnvironmentContext : NSObject <BSDescriptionProviding>
{
    id <HDSPSource> _source;
    HDSPSleepScheduleModelChangeEvaluation *_changeEvaluation;
}

+ (id)contextWithSource:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // @synthesize changeEvaluation=_changeEvaluation;
@property(readonly, nonatomic) id <HDSPSource> source; // @synthesize source=_source;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 changeEvaluation:(id)arg2;
- (id)contextByApplyingChangeEvaluation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

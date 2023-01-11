//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLTrainingStore;

@interface PMLMockPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    _Bool _returnValue;
    _Bool _isSynchronous;
    _Bool _didRun;
    struct NSString *_planId;
    unsigned long long _version;
}

+ (id)lastDeserializedPlansMap;
+ (void)clearLastDeserializedPlans;
+ (void)setLastDeserializedPlanWithId:(struct NSString *)arg1 toPlan:(id)arg2;
+ (id)lastDeserializedPlanWithId:(struct NSString *)arg1;
@property(readonly, nonatomic) _Bool didRun; // @synthesize didRun=_didRun;
@property unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
- (id)initWithPlanId:(struct NSString *)arg1 store:(id)arg2;
- (id)initWithPlanId:(struct NSString *)arg1;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)initWithPlanId:(struct NSString *)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(struct NSString *)arg1 version:(unsigned long long)arg2 returningAfterRunning:(_Bool)arg3;
- (id)initWithPlanId:(struct NSString *)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(_Bool)arg4 isSynchronous:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


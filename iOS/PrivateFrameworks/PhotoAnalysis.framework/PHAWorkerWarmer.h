//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject
{
    NSMutableSet *_workers;
    PHAWorker *_lastActiveWorker;
    PHAJobConstraints *_lastConstraints;
}

+ (unsigned long long)stateCode;
- (void).cxx_destruct;
@property(retain, nonatomic) PHAJobConstraints *lastConstraints; // @synthesize lastConstraints=_lastConstraints;
@property(retain, nonatomic) PHAWorker *lastActiveWorker; // @synthesize lastActiveWorker=_lastActiveWorker;
@property(readonly, nonatomic) NSMutableSet *workers; // @synthesize workers=_workers;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)recordConstraintChange:(id)arg1;
- (id)init;
- (id)statusAsDictionary;
- (_Bool)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;

@end

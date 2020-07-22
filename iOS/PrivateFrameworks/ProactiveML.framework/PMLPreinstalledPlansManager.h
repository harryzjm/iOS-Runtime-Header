//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PMLTrainingStore;

@interface PMLPreinstalledPlansManager : NSObject
{
    PMLTrainingStore *_store;
    NSString *_plansDirectory;
}

+ (id)preinstalledPlansDirectory;
- (void).cxx_destruct;
- (void)runWhileDoneForTesting;
- (id)preinstalledPlanByFilename:(id)arg1;
- (void)enumeratePreinstalledPlansWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)availableSessionsWithDescriptor:(id)arg1 satisfyRequirements:(id)arg2;
- (_Bool)hasAlreadyRunPlan:(struct NSString *)arg1;
- (void)runWhile:(CDUnknownBlockType)arg1;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 plansDirectory:(id)arg2;
- (id)init;

@end


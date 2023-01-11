//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TILanguageModelOfflineLearningTask;
@protocol OS_dispatch_queue;

@interface TILanguageModelOfflineLearningAgent : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TILanguageModelOfflineLearningTask *_currentLearningTask;
}

+ (void)didFinishLearningWithAgent:(id)arg1 task:(id)arg2;
+ (id)contactRecordsForRecipients:(id)arg1;
+ (id)sharedLearningAgent;
@property(retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask; // @synthesize currentLearningTask=_currentLearningTask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)handleRemovalOfLearnedModels;
- (void)performTaskInBackground:(CDUnknownBlockType)arg1;
- (void)performLearningIfNecessaryWithStrategy:(id)arg1 lastAdaptationTime:(double)arg2;
- (_Bool)continueLearningTaskWithStrategy:(id)arg1;
- (id)init;

@end


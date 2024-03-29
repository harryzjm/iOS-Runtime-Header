//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLLanguageModel, NLLanguageModelSession, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PRNLPLanguageModel : NSObject
{
    NSString *_localization;
    long long _modelType;
    NLLanguageModel *_model;
    NLLanguageModelSession *_session;
    NSMutableDictionary *_cachedStates;
    NSMutableArray *_cachedContextsRecycleQueue;
}

+ (id)languageModelWithLocalization:(id)arg1 type:(long long)arg2;
@property(readonly) long long modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) NSString *localization; // @synthesize localization=_localization;
- (id)stateWithContext:(id)arg1;
- (_Bool)stringIsBlocklisted:(id)arg1;
- (_Bool)getConditionalProbabilityForString:(id)arg1 context:(id)arg2 probability:(double *)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithLocalization:(id)arg1 type:(long long)arg2;
- (id)modelOptionsForLocale:(id)arg1 type:(long long)arg2;

@end


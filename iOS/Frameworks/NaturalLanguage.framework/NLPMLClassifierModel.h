//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NaturalLanguage/MLCustomModel-Protocol.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface NLPMLClassifierModel <MLCustomModel>
{
    MLModelDescription *_modelDescription;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;
@property(readonly, copy) MLModelDescription *modelDescription;

@end


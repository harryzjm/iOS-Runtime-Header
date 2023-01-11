//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGModelSampler, SGModelSource, SGQuickResponsesConfig;
@protocol PMLTransformerProtocol;

@interface SGQuickResponsesTransformerInstance : NSObject
{
    SGQuickResponsesConfig *_config;
    id <PMLTransformerProtocol> _featurizer;
    SGModelSource *_source;
    id <PMLTransformerProtocol> _labeler;
    SGModelSampler *_sampler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SGModelSampler *sampler; // @synthesize sampler=_sampler;
@property(readonly, nonatomic) id <PMLTransformerProtocol> labeler; // @synthesize labeler=_labeler;
@property(readonly, nonatomic) SGModelSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) id <PMLTransformerProtocol> featurizer; // @synthesize featurizer=_featurizer;
@property(readonly, nonatomic) SGQuickResponsesConfig *config; // @synthesize config=_config;
- (id)initWithConfig:(id)arg1 featurizer:(id)arg2 source:(id)arg3 labeler:(id)arg4 sampler:(id)arg5;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLPipeline;

@interface MLPipelineRegressor
{
    MLPipeline *_engine;
}

@property(retain) MLPipeline *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id *)arg4;

@end


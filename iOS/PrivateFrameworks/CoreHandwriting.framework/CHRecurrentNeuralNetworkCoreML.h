//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHSingletonMLModel, NSArray, NSDictionary, NSString;

@interface CHRecurrentNeuralNetworkCoreML
{
    CHSingletonMLModel *_model;
    NSString *_resourcePath;
    NSArray *_inputNames;
    NSDictionary *_featureCounts;
    NSArray *_outputNames;
    NSDictionary *_classCounts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *classCounts; // @synthesize classCounts=_classCounts;
@property(readonly, nonatomic) NSArray *outputNames; // @synthesize outputNames=_outputNames;
@property(readonly, nonatomic) NSDictionary *featureCounts; // @synthesize featureCounts=_featureCounts;
@property(readonly, nonatomic) NSArray *inputNames; // @synthesize inputNames=_inputNames;
@property(readonly, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(readonly, nonatomic) CHSingletonMLModel *model; // @synthesize model=_model;
- (void)dealloc;
- (id)initWithModelName:(id)arg1 featureIndex:(long long)arg2;
- (id)initWithModelName:(id)arg1;

@end


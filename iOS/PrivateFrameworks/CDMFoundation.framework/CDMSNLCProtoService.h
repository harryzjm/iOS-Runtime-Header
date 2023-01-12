//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SNLPServerNLClassifier;

@interface CDMSNLCProtoService
{
    SNLPServerNLClassifier *_snlcOrchestrator;
}

+ (id)getParserEnum;
+ (id)trialFactorName;
+ (id)assetFolderName;
+ (id)_stockServerResponse;
- (void).cxx_destruct;
- (id)getSNLPServerNLClassifierPath:(id)arg1 error:(id *)arg2;
- (id)assetsPathURLForModelBundle:(id)arg1;
- (id)doInference:(id)arg1;
- (id)setup:(id)arg1;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CVNLPCaptionDecoderLSTM
{
    int startID;
    int endID;
    int maxCaptionLen;
    int beamSize;
    int vocabSize;
    NSDictionary *vocab;
    void *_decoderPlan;
    void *decoderCtx;
    CDStruct_2bc666a5 decoderNet;
    CDStruct_0a65202a meanFeatsPlaceholderBlob;
    CDStruct_0a65202a attFeatsPlaceholderBlob;
    CDStruct_0a65202a pAttFeatsPlaceholderBlob;
    CDStruct_0a65202a lstmAttStateFeedBlob;
    CDStruct_0a65202a lstmLangStateFeedBlob;
    CDStruct_0a65202a inWordIDBlob;
    CDStruct_0a65202a wordIDBlob;
    CDStruct_0a65202a langProbBlob;
    CDStruct_0a65202a newAttStateBlob;
    CDStruct_0a65202a newLangStateBlob;
    struct CVNLPBeamSearch *_beamSearch;
    _Bool meanFeaturesPresent;
}

- (void).cxx_destruct;
- (id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2;
- (void)extractBeamID:(id *)arg1 tokenID:(id *)arg2 lstmAttnState:(CDStruct_0a65202a *)arg3 lstmLangState:(CDStruct_0a65202a *)arg4 fromFollowup:(id)arg5;
- (id)packBeamID:(id)arg1 tokenID:(id)arg2 lstmAttnState:(CDStruct_0a65202a *)arg3 lstmLangState:(CDStruct_0a65202a *)arg4 softmax:(CDStruct_0a65202a *)arg5;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;

@end

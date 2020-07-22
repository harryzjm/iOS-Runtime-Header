//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchToSharePredictionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSDictionary, NSString, PMLHashingVectorizer, SGQPMultiLabelModel;

@interface SGQPMLPredictor : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLHashingVectorizer *_vectorizer;
    SGQPMultiLabelModel *_multiLabelModel;
    NSDictionary *_categoryNameForLabel;
}

+ (id)predictorFromChunkedFileAtPath:(id)arg1;
+ (id)predictorFromAsset:(id)arg1;
@property(readonly, nonatomic) NSDictionary *categoryNameForLabel; // @synthesize categoryNameForLabel=_categoryNameForLabel;
@property(readonly, nonatomic) PMLHashingVectorizer *vectorizer; // @synthesize vectorizer=_vectorizer;
@property(readonly, nonatomic) SGQPMultiLabelModel *multiLabelModel; // @synthesize multiLabelModel=_multiLabelModel;
- (void).cxx_destruct;
- (void)serializeInChunkedFileFormatToFile:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)predictionsForMessages:(id)arg1;
- (id)initWithVectorizer:(id)arg1 multiLabelModel:(id)arg2 labelMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


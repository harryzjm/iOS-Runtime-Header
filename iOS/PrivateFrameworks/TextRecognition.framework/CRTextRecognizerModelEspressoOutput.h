//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextRecognizerModelOutput-Protocol.h>

@class NSArray, NSString;

@interface CRTextRecognizerModelEspressoOutput : NSObject <CRTextRecognizerModelOutput>
{
    NSArray *_textFeatureInfo;
    CDStruct_0a65202a _output_label_prob_map;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_0a65202a output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
@property(retain) NSArray *textFeatureInfo; // @synthesize textFeatureInfo=_textFeatureInfo;
- (void)dealloc;
- (id)initWithOutputLabelProbs:(CDStruct_0a65202a)arg1 featureInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

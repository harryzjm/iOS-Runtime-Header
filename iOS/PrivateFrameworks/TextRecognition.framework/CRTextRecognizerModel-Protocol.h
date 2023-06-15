//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/CRTextRecognizerModelInputProvider-Protocol.h>
#import <TextRecognition/NSObject-Protocol.h>

@class CRNeuralRecognizerConfiguration, NSArray;

@protocol CRTextRecognizerModel <NSObject, CRTextRecognizerModelInputProvider>
@property(nonatomic) long long ctcBlankLabelIndex;
@property(nonatomic) int *codemapArray;
- (void)releaseIntermediateBuffers;
- (struct TextBoxesOffsets)wordBoxesOffsets;
- (struct TextBoxesOffsets)characterBoxesOffsets;
- (_Bool)supportCharacterBoxes;
- (_Bool)preheatWithError:(id *)arg1;
- (NSArray *)predictFromInputs:(NSArray *)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(CRNeuralRecognizerConfiguration *)arg1 error:(id *)arg2;
@end


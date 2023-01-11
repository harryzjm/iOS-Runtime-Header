//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_output_label_prob_map;
}

@property(retain, nonatomic) MLMultiArray *output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput_label_prob_map:(id)arg1;

@end

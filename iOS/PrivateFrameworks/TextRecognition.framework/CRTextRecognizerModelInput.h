//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_img_input;
}

@property(retain, nonatomic) MLMultiArray *img_input; // @synthesize img_input=_img_input;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImg_input:(id)arg1;

@end

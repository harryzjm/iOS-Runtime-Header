//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeAI/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input;
    NSString *_inputName;
}

- (void).cxx_destruct;
@property(readonly) NSString *inputName; // @synthesize inputName=_inputName;
@property(retain, nonatomic) MLMultiArray *input; // @synthesize input=_input;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput:(id)arg1 inputName:(id)arg2;

@end

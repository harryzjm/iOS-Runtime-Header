//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishEmbeddingModelInput : NSObject
{
    MLMultiArray *_input1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1;

@end


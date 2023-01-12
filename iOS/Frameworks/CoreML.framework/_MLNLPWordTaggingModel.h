//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPWordTaggingModel : NSObject
{
    void *_wordTaggingModel;
    MLModelDescription *_modelDescription;
}

- (void).cxx_destruct;
@property(retain) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end


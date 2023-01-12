//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRRecognizerConfiguration;

@interface CRMultiModelTextFeatureSplitter : NSObject
{
    CRRecognizerConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(retain) CRRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)combinedLineFeature:(id)arg1 lineFeature:(id)arg2;
- (id)pruneRecognizedTextFeatures:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)pruneAndSortRecognizedTextFeatures:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)enumerateTextFeatures:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRFormDetectorModelOutput : NSObject
{
    MLMultiArray *_boundingBoxes;
    MLMultiArray *_classLogits;
    MLMultiArray *_anchors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *anchors; // @synthesize anchors=_anchors;
@property(retain, nonatomic) MLMultiArray *classLogits; // @synthesize classLogits=_classLogits;
@property(retain, nonatomic) MLMultiArray *boundingBoxes; // @synthesize boundingBoxes=_boundingBoxes;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithBoundingBoxes:(id)arg1 classLogits:(id)arg2 anchors:(id)arg3;

@end


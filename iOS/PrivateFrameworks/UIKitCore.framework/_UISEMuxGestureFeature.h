//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISEGestureFeatureDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEMuxGestureFeature <_UISEGestureFeatureDelegate>
{
    id <_UISEGestureFeatureSettings> _settings;
    CDUnknownBlockType _createFeatureBlock;
    NSMutableDictionary *_subfeatures;
    unsigned long long _fails;
    unsigned long long _recognizes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *subfeatures; // @synthesize subfeatures=_subfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSettings:(id)arg1 createFeatureBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

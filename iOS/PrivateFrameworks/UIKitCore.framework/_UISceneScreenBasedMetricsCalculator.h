//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UISceneScreenBasedMetricsCalculator : NSObject
{
    UIWindowScene *_scene;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setScene:) __weak UIWindowScene *_scene; // @synthesize _scene;
- (void)_updateMetricsOnWindows:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


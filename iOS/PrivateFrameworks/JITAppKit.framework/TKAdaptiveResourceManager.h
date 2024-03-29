//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TKAdaptiveResourceManager : NSObject
{
}

+ (void)adaptiveMetricsDidChange;
+ (void)windowSizeDidChange:(id)arg1;
+ (void)setup;
+ (struct CGSize)size;
+ (struct CGSize)readableContentSize;
+ (id)traitCollection;
+ (void)setOverrideTrackingAdaptiveView:(id)arg1;
+ (void)removeObject:(id)arg1;
+ (void)addObject:(id)arg1;

@end


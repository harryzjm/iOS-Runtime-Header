//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, KNAnimationScreenEnvironment, NSString;

@interface KNSinglePlaybackLayerHost : NSObject
{
    CALayer *_containerLayer;
    CALayer *_rootLayer;
    KNAnimationScreenEnvironment *_screenEnvironment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (struct CGRect)convertRootLayerRectToContainer:(struct CGRect)arg1;
@property(readonly, nonatomic) KNAnimationScreenEnvironment *screenEnvironment; // @synthesize screenEnvironment=_screenEnvironment;
- (id)initWithContainerLayer:(id)arg1 screenEnvironment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


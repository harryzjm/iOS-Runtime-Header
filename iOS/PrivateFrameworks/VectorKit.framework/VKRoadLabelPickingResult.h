//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VKLabelFeatureMarker;

__attribute__((visibility("hidden")))
@interface VKRoadLabelPickingResult : NSObject
{
    VKLabelFeatureMarker *_labelFeatureMarker;
}

@property(readonly, nonatomic) VKLabelFeatureMarker *labelFeatureMarker; // @synthesize labelFeatureMarker=_labelFeatureMarker;
- (id)description;
@property(readonly, nonatomic) struct CGVector direction;
@property(readonly, nonatomic) float closestApproach;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithLabelFeatureMarkerPtr:(const shared_ptr_27db7edb *)arg1;

@end


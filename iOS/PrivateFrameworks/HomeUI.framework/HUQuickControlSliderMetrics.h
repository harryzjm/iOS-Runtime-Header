//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject
{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    double _cornerRadius;
    double _widthToCornerRadiusRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double widthToCornerRadiusRatio; // @synthesize widthToCornerRadiusRatio=_widthToCornerRadiusRatio;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // @synthesize sizeDescriptor=_sizeDescriptor;
- (id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3;

@end

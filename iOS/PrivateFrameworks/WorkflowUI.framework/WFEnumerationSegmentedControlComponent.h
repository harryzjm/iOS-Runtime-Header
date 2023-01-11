//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ComponentKit/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent
{
    WFEnumerationParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

+ (double)estimatedWidthWithSegments:(id)arg1;
+ (double)perSegmentWidthWithSegments:(id)arg1;
+ (double)minimumWidthForSegmentWithTitle:(id)arg1;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4;
- (void).cxx_destruct;
- (void)segmentedControlSelectedSegmentChanged:(id)arg1;

@end

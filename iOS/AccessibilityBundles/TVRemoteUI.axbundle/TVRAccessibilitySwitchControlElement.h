//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@interface TVRAccessibilitySwitchControlElement : UIAccessibilityElement
{
    long long _shape;
    CDUnknownBlockType _frameBlock;
    CDUnknownBlockType _pathBlock;
    CDUnknownBlockType _labelBlock;
    CDUnknownBlockType _activateBlock;
}

+ (id)elementWithContainer:(id)arg1 shape:(long long)arg2 labelBlock:(CDUnknownBlockType)arg3 frameBlock:(CDUnknownBlockType)arg4 pathBlock:(CDUnknownBlockType)arg5 activateBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType activateBlock; // @synthesize activateBlock=_activateBlock;
@property(copy, nonatomic) CDUnknownBlockType labelBlock; // @synthesize labelBlock=_labelBlock;
@property(copy, nonatomic) CDUnknownBlockType pathBlock; // @synthesize pathBlock=_pathBlock;
@property(copy, nonatomic) CDUnknownBlockType frameBlock; // @synthesize frameBlock=_frameBlock;
@property(nonatomic) long long shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (int)_accessibilityScannerActivateBehavior;
- (id)accessibilityPath;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityActivate;
- (id)accessibilityLabel;

@end

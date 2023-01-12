//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectView : UIView
{
    UIColor *_selectionColor;
    UIColor *_selectionBorderColor;
    double _selectionBorderWidth;
    double _selectionCornerRadius;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) double selectionCornerRadius; // @synthesize selectionCornerRadius=_selectionCornerRadius;
@property(nonatomic) double selectionBorderWidth; // @synthesize selectionBorderWidth=_selectionBorderWidth;
@property(retain, nonatomic) UIColor *selectionBorderColor; // @synthesize selectionBorderColor=_selectionBorderColor;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(readonly, nonatomic) CAShapeLayer *pathLayer;
- (id)path;
- (void)setPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasPath;

@end


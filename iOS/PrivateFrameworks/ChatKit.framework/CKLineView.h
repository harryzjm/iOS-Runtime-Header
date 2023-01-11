//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CKLineView : UIView
{
    _Bool _shouldUseDarkFSMStrokeColor;
    CABackdropLayer *_backdropFilterLayer;
    CAShapeLayer *_lineShapeLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseDarkFSMStrokeColor; // @synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor;
@property(retain, nonatomic) CAShapeLayer *lineShapeLayer; // @synthesize lineShapeLayer=_lineShapeLayer;
@property(retain, nonatomic) CABackdropLayer *backdropFilterLayer; // @synthesize backdropFilterLayer=_backdropFilterLayer;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

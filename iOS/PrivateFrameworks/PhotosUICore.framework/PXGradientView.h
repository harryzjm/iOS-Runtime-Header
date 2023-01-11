//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface PXGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

@end

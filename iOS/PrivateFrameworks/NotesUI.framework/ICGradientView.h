//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface ICGradientView : UIView
{
}

+ (Class)layerClass;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSArray *gradientColors;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

@end

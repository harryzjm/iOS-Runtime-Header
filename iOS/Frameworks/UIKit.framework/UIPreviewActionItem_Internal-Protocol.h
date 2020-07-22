//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIColor, UIImage;

@protocol UIPreviewActionItem_Internal <NSObject>
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property(nonatomic) long long style;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *title;
- (UIImage *)_effectiveImage;
- (UIColor *)_effectiveColor;
@end


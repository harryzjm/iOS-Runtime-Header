//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class UIColor;

@interface SKUICompressedImage : UIImage
{
    long long _cornerType;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long cornerType; // @synthesize cornerType=_cornerType;
- (void).cxx_destruct;
- (id)description;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKColor, NSString;

__attribute__((visibility("hidden")))
@interface SUUIButtonBorderStyle : NSObject
{
    IKColor *_borderColor;
    double _borderWidth;
    struct UIEdgeInsets _contentInset;
    struct IKCornerRadii _cornerRadii;
    IKColor *_fillColor;
    NSString *_namedCornerStyle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *namedCornerStyle; // @synthesize namedCornerStyle=_namedCornerStyle;
@property(copy, nonatomic) IKColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct IKCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) IKColor *borderColor; // @synthesize borderColor=_borderColor;
- (_Bool)_usesBackgroundWithAlpha:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bezierPathWithBounds:(struct CGRect)arg1;
- (id)initWithElementStyle:(id)arg1;

@end


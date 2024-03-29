//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarConfiguration : NSObject
{
    _Bool _translucent;
    long long _barStyle;
    UIImage *_shadowImage;
    UIImage *_backgroundImage;
    UIColor *_backgroundColor;
    UIColor *_barTintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


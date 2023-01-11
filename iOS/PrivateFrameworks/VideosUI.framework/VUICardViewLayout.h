//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSShadow, UIColor, VUIImageLayout, VUITextLayout;
@protocol VUIOverlayLayoutProtocol;

__attribute__((visibility("hidden")))
@interface VUICardViewLayout : NSObject
{
    _Bool _shouldLayoutImageFirst;
    NSShadow *_shadow;
    UIColor *_backgroundColor;
    UIColor *_highlightColor;
    VUIImageLayout *_imageLayout;
    VUITextLayout *_secondaryTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUIImageLayout *_appImageLayout;
    id <VUIOverlayLayoutProtocol> _overlayLayout;
    struct CGSize _imageSize;
    struct TVCornerRadii _borderRadii;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) id <VUIOverlayLayoutProtocol> overlayLayout; // @synthesize overlayLayout=_overlayLayout;
@property(retain, nonatomic) VUIImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property(retain, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(retain, nonatomic) VUITextLayout *secondaryTextLayout; // @synthesize secondaryTextLayout=_secondaryTextLayout;
@property(retain, nonatomic) VUIImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(nonatomic) _Bool shouldLayoutImageFirst; // @synthesize shouldLayoutImageFirst=_shouldLayoutImageFirst;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
- (void).cxx_destruct;
- (struct CGSize)imageSizeWithWidth:(double)arg1;
- (id)init;

@end

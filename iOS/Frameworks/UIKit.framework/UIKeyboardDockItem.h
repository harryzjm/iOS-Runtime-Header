//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage, UIKeyboardDockItemButton, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockItem : NSObject
{
    NSString *_identifier;
    NSString *_imageName;
    UIImage *_image;
    UIKeyboardDockItemButton *_button;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _touchDownPoint;
}

+ (id)_darkStyleGlyphColor;
+ (id)_standardGlyphColor;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) struct CGPoint touchDownPoint; // @synthesize touchDownPoint=_touchDownPoint;
@property(retain, nonatomic) UIKeyboardDockItemButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view;
@property(nonatomic) _Bool enabled;
- (id)imageWithRenderConfig:(id)arg1;
- (id)initWithImageName:(id)arg1 identifier:(id)arg2;

@end


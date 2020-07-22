//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIView;

@interface SBUIAction : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    UIView *_badgeView;
    CDUnknownBlockType _handler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 badgeView:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end


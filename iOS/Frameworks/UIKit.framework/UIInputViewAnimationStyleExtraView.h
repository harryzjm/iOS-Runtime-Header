//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleExtraView : NSObject
{
    int _clipContainerType;
    int _alignment;
    UIView *_view;
    CDUnknownBlockType _animation;
}

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(CDUnknownBlockType)arg3 onSnapshot:(_Bool)arg4;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) int clipContainerType; // @synthesize clipContainerType=_clipContainerType;
- (void)dealloc;

@end


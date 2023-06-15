//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SAElementViewProviding-Protocol.h>
#import <SpringBoard/SAUIElementLayoutAxisObserving-Protocol.h>

@class UIView;

@protocol SAUIElementViewProviding <SAElementViewProviding, SAUIElementLayoutAxisObserving>
@property(readonly, nonatomic) UIView *minimalView;
@property(readonly, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) UIView *leadingView;

@optional
@property(readonly, nonatomic) UIView *detachedMinimalView;
@end


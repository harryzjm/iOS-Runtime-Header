//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/SAUIElementViewControllingObservable-Protocol.h>

@class UIGestureRecognizer;
@protocol SAElementViewProviding;

@protocol SAUIElementViewControlling <SAUIElementViewControllingObservable>
@property(readonly, nonatomic) id <SAElementViewProviding> elementViewProvider;
- (_Bool)handleLongPress:(UIGestureRecognizer *)arg1;
- (_Bool)handleTap:(UIGestureRecognizer *)arg1;
@end


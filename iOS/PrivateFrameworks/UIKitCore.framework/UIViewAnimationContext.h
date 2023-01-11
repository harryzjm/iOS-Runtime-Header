//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    long long _animationCount;
    CDUnknownBlockType _completionHandler;
    UITableViewCell *_swipeToDeleteCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableViewCell *swipeToDeleteCell; // @synthesize swipeToDeleteCell=_swipeToDeleteCell;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

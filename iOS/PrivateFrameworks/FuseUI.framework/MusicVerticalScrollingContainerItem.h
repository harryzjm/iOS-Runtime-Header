//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCoding-Protocol.h>

@class UIView, UIViewController;

@interface MusicVerticalScrollingContainerItem : NSObject <NSCoding>
{
    UIView *_view;
    UIViewController *_viewController;
}

+ (id)verticalScrollingContainerWithViewController:(id)arg1;
+ (id)verticalScrollingContainerWithView:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_unregisterForContentScrollViewDidChangeNotification;
- (void)_registerForContentScrollViewDidChangeNotification;
- (void)_handleContentScrollViewDidChangeNotification:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

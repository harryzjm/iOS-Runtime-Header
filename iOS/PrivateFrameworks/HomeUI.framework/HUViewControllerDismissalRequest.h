//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject
{
    _Bool _animated;
    UIViewController *_viewController;
}

+ (id)requestWithViewController:(id)arg1;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;

@end


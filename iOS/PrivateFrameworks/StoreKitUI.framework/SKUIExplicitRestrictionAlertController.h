//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject
{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithClientContext:(id)arg1;

@end

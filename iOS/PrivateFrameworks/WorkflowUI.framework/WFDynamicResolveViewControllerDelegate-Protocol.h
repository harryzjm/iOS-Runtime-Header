//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class INObject, NSError, WFDynamicResolveViewController;

@protocol WFDynamicResolveViewControllerDelegate <NSObject>
- (void)dynamicResolverViewController:(WFDynamicResolveViewController *)arg1 didFailToResolveWithError:(NSError *)arg2;
- (void)dynamicResolverViewController:(WFDynamicResolveViewController *)arg1 didFinishResolvingWithObject:(INObject *)arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol UIShareUIAccessoryHosting, UIShareUIAccessoryPresenting;

@protocol UIShareUIAccessoryPlugIn <NSObject>
+ (id)shareSheetPlugInWithPresentingHost:(id <UIShareUIAccessoryHosting>)arg1 URLs:(NSArray *)arg2;
@property(readonly, nonatomic) UIViewController<UIShareUIAccessoryPresenting> *inlineAccessoryViewController;
@property(readonly, nonatomic) NSArray *URLs;
@property(readonly, nonatomic) __weak id <UIShareUIAccessoryHosting> host;
- (void)commitPendingChanges;
@end


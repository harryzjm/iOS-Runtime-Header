//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNFuture, CNObservable, NSArray, NSString;
@protocol CNSchedulerProvider;

@protocol CNUIUserActionTargetDiscovering <NSObject>
- (CNFuture *)thirdPartyTargetsForBundleIdentifier:(NSString *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (CNObservable *)targetsForActionType:(NSString *)arg1;
- (CNObservable *)observableForTargetsChangedForActionType:(NSString *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol VKStyleManagerObserver <NSObject>
+ (_Bool)reloadOnStylesheetChange;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;

@optional
- (void)finishStyleBlend;
- (void)stylesheetDidReload;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillChange;
- (void)stylesheetWillTransition:(struct DisplayStyle)arg1;
- (void)prepareForStylesheetTransitionToMapDisplayStyle:(struct DisplayStyle)arg1 withReadinessBlock:(void (^)(id <VKStyleManagerObserver>))arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleBootstrapContext;
@protocol PXPeopleFlowViewControllerActionDelegate;

@protocol PXPeopleFlowViewController <NSObject>
@property(readonly, nonatomic) _Bool wantsCancelButton;
@property(readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;

@optional
@property(readonly, nonatomic) _Bool shouldConfirmAdvancement;
@property(nonatomic) __weak id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)willTransitionToPreviousInFlow;
- (void)willTransitionIn;
- (void)willTransitionToNextInFlow;
@end


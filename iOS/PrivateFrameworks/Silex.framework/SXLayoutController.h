//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, SXLayoutBlueprint, SXLayoutOperation;
@protocol SXDynamicAdController, SXLayoutControllerDelegate;

@interface SXLayoutController : NSObject
{
    id <SXLayoutControllerDelegate> _delegate;
    NSString *_targetComponentIdentifier;
    SXLayoutBlueprint *_lastLayoutBlueprint;
    NSOperationQueue *_layoutOperationQueue;
    SXLayoutOperation *_currentLayoutOperation;
    id <SXDynamicAdController> _dynamicAdController;
}

@property(readonly, nonatomic) id <SXDynamicAdController> dynamicAdController; // @synthesize dynamicAdController=_dynamicAdController;
@property(retain, nonatomic) SXLayoutOperation *currentLayoutOperation; // @synthesize currentLayoutOperation=_currentLayoutOperation;
@property(readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // @synthesize layoutOperationQueue=_layoutOperationQueue;
@property(readonly, nonatomic) SXLayoutBlueprint *lastLayoutBlueprint; // @synthesize lastLayoutBlueprint=_lastLayoutBlueprint;
@property(retain, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
@property(nonatomic) __weak id <SXLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupDynamicAdControllerWithContext:(id)arg1;
- (void)finalizeLayoutForLayoutOperation:(id)arg1;
- (void)layoutForAttributes:(id)arg1 existingLayoutBlueprint:(id)arg2 dataProvider:(id)arg3;
- (void)layoutForAttributes:(id)arg1 dataProvider:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGadgetDataSourceManager, PXGadgetNavigationHelper;
@protocol PXGadget, PXGadgetAnchorHelperDelegate;

@interface PXGadgetAnchorHelper : NSObject
{
    id <PXGadgetAnchorHelperDelegate> _delegate;
    long long _anchorPosition;
    id <PXGadget> _currentAnchor;
    PXGadgetNavigationHelper *_navigationHelper;
    PXGadgetDataSourceManager *_dataSourceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXGadgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXGadgetNavigationHelper *navigationHelper; // @synthesize navigationHelper=_navigationHelper;
@property(retain, nonatomic) id <PXGadget> currentAnchor; // @synthesize currentAnchor=_currentAnchor;
@property(nonatomic) long long anchorPosition; // @synthesize anchorPosition=_anchorPosition;
@property(nonatomic) __weak id <PXGadgetAnchorHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_convertIndexPathToGadget:(id)arg1;
- (id)_generateAnchor;
- (void)navigateToAnchorIfNeeded;
- (void)clearAnchor;
- (void)saveGadgetAsAnchor:(id)arg1;
- (void)saveAnchor;
@property(readonly, nonatomic) _Bool hasAnchor;
- (id)initWithNavigationHelper:(id)arg1 dataSourceManager:(id)arg2;

@end

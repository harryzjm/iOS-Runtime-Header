//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionManager-Protocol.h>

@class NSString, SXActionManagerPreview;
@protocol SXActionActivityManager, SXActionViewManager;

@interface SXActionManager : NSObject <SXActionManager>
{
    id <SXActionActivityManager> _activityManager;
    id <SXActionViewManager> _viewManager;
    SXActionManagerPreview *_currentPreview;
}

@property(retain, nonatomic) SXActionManagerPreview *currentPreview; // @synthesize currentPreview=_currentPreview;
@property(readonly, nonatomic) id <SXActionViewManager> viewManager; // @synthesize viewManager=_viewManager;
@property(readonly, nonatomic) id <SXActionActivityManager> activityManager; // @synthesize activityManager=_activityManager;
- (void).cxx_destruct;
- (void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3;
- (void)commitPreviewViewController:(id)arg1;
- (id)previewViewControllerForAction:(id)arg1;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 mode:(unsigned long long)arg5;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2;
- (id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


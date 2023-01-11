//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookEventHandler-Protocol.h>
#import <Silex/SXQuickLookInteractorDelegate-Protocol.h>

@class NSString;
@protocol SXQuickLookEventHandlerDelegate, SXQuickLookInteractor, SXQuickLookRouter;

@interface SXQuickLookEventHandler : NSObject <SXQuickLookInteractorDelegate, SXQuickLookEventHandler>
{
    id <SXQuickLookEventHandlerDelegate> delegate;
    id <SXQuickLookInteractor> _interactor;
    id <SXQuickLookRouter> _router;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXQuickLookRouter> router; // @synthesize router=_router;
@property(readonly, nonatomic) id <SXQuickLookInteractor> interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak id <SXQuickLookEventHandlerDelegate> delegate; // @synthesize delegate;
- (void)failedToLoadThumbnail;
- (void)didLoadThumbnail:(id)arg1;
- (void)didTapThumbnailView:(id)arg1;
- (void)requestThumbnailWithSize:(struct CGSize)arg1;
- (id)initWithInteractor:(id)arg1 router:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsUI/NSFilePresenter-Protocol.h>

@class BRObservableFile, NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _BRObservableFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    BRObservableFile *_parent;
}

@property(nonatomic) __weak BRObservableFile *parent; // @synthesize parent=_parent;
@property(retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemUbiquityDidChange;
- (void)presentedItemDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


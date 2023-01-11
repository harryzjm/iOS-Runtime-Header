//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSURL *_primaryPresentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *primaryPresentedItemURL; // @synthesize primaryPresentedItemURL=_primaryPresentedItemURL;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void).cxx_destruct;
- (id)initWithPrimaryURL:(id)arg1 presentedURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly) Class superclass;

@end

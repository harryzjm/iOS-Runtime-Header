//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_URL;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)presentedItemDidMoveToURL:(id)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)stop;
- (void)start;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


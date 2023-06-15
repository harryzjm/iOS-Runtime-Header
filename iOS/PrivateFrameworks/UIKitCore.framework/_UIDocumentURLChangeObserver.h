//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentURLChangeObserver : NSObject
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    CDUnknownBlockType _changeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidChange;
- (void)stopObserving;
- (void)startObservingWithChangeHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isObserving) _Bool observing;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end


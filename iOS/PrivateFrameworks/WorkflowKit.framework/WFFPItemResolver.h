//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/FPItemCollectionMinimalDelegate-Protocol.h>

@class FPItemCollection, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WFFPItemResolver : NSObject <FPItemCollectionMinimalDelegate>
{
    FPItemCollection *_collection;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_mutableComponents;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *mutableComponents; // @synthesize mutableComponents=_mutableComponents;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FPItemCollection *collection; // @synthesize collection=_collection;
- (void)startObservingFolderItemCollection:(id)arg1;
- (void)determineNextItemIfPossible;
- (void)collectionDidFinishGathering:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (id)initWithDomainID:(id)arg1 relativeSubpath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

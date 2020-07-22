//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlaybackObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver>
{
    NSMutableArray *_queue;
}

@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)prefetchItemAfterCoordinatorIfPossible:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)advance;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prependItem:(id)arg1;
- (void)appendItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


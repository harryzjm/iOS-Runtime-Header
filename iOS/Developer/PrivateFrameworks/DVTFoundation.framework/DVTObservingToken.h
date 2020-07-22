//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTObservingToken : NSObject <DVTCancellable>
{
    _Bool _isCancelled;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)_primitiveCancelObservation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

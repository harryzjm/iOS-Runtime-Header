//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject
{
    NSSet *_eventDescriptors;
    NSMutableDictionary *_refreshTimerByEventDescriptor;
    CDUnknownBlockType _refreshTimerFiredBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshTimerFiredBlock; // @synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock;
@property(retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor; // @synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor;
@property(copy, nonatomic) NSSet *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
- (void).cxx_destruct;
- (void)_cancelAllRefreshTimers;
- (void)_cancelRefreshTimers:(id)arg1;
- (void)_cancelRefreshTimer:(id)arg1;
- (void)_startRefreshTimer:(id)arg1;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end

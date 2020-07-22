//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MapKit/INIntentResponseObserver-Protocol.h>

@class NSString;
@protocol _MXIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver>
{
    id <_MXIntentResponseObserver> _observer;
}

@property(nonatomic) __weak id <_MXIntentResponseObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)didReceiveError:(id)arg1;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (void)intentResponseDidUpdate:(id)arg1;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

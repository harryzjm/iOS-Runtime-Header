//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class DNDState;
@protocol DNDStateUpdateListener;

@protocol SBDNDStateService <NSObject>
- (void)queryCurrentStateWithCompletionHandler:(void (^)(DNDState *, NSError *))arg1;
- (DNDState *)queryCurrentStateWithError:(id *)arg1;
- (void)removeStateUpdateListener:(id <DNDStateUpdateListener>)arg1;
- (void)addStateUpdateListener:(id <DNDStateUpdateListener>)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end


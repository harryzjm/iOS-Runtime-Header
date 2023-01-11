//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDState;
@protocol DNDSStateProviderUpdateListener;

@protocol DNDSStateProvider <NSObject>
- (void)removeUpdateListener:(id <DNDSStateProviderUpdateListener>)arg1;
- (void)addUpdateListener:(id <DNDSStateProviderUpdateListener>)arg1;
- (DNDState *)currentStateWithError:(id *)arg1;
@end


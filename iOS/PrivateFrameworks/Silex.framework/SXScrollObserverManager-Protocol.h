//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXScrollObserving;

@protocol SXScrollObserverManager <NSObject>
- (void)removeScrollObserver:(id <SXScrollObserving>)arg1;
- (void)addScrollObserver:(id <SXScrollObserving>)arg1;
@end


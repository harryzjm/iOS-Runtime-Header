//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEODataRequest;
@protocol GEODataSessionTask, GEODataSessionTaskRulesObserver;

@protocol GEODataSessionTaskRules <NSObject>
- (void)removeCompletedSubtaskObserver:(id <GEODataSessionTaskRulesObserver>)arg1;
- (void)addCompletedSubtaskObserver:(id <GEODataSessionTaskRulesObserver>)arg1;
- (id <GEODataSessionTask>)completedSubtaskForDataTask:(id <GEODataSessionTask>)arg1;
- (void)dataTask:(id <GEODataSessionTask>)arg1 didCompleteSubtask:(id <GEODataSessionTask>)arg2;
- (_Bool)dataTask:(id <GEODataSessionTask>)arg1 shouldStartSubtask:(id <GEODataSessionTask>)arg2 ofType:(unsigned long long)arg3;
- (_Bool)dataTask:(id <GEODataSessionTask>)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(GEODataRequest *)arg3;
@end


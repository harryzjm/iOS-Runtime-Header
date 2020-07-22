//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskRules-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesNil : NSObject <GEODataSessionTaskRules>
{
}

+ (id)nilRules;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (_Bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (_Bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (id)initForType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


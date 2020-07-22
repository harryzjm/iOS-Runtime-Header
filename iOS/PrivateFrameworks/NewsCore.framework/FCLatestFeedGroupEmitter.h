//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSString;

@interface FCLatestFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
}

@property(readonly, nonatomic) _Bool requiresForYouCatchUpOperation;
- (_Bool)canMergeGroupsUnconditionally;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
- (_Bool)canEmitGroupsWithType:(long long)arg1;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly) Class superclass;

@end


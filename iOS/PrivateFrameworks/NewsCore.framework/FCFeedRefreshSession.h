//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCFeedEdition, NSArray, NSDate, NSDictionary, NSSet, NSString;

@interface FCFeedRefreshSession : NSObject
{
    _Bool _reachedEnd;
    _Bool _isOffline;
    _Bool _isNewEdition;
    NSString *_identifier;
    NSDate *_refreshDate;
    NSDate *_modificationDate;
    NSDictionary *_cursorsByGroupEmitterID;
    NSArray *_pendingGroups;
    NSSet *_activeGroupEmitterIDs;
    FCFeedEdition *_lastCompletedEdition;
}

@property(readonly, nonatomic) _Bool isNewEdition; // @synthesize isNewEdition=_isNewEdition;
@property(readonly, nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(readonly, nonatomic) _Bool reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(readonly, nonatomic) FCFeedEdition *lastCompletedEdition; // @synthesize lastCompletedEdition=_lastCompletedEdition;
@property(readonly, copy, nonatomic) NSSet *activeGroupEmitterIDs; // @synthesize activeGroupEmitterIDs=_activeGroupEmitterIDs;
@property(readonly, copy, nonatomic) NSArray *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property(readonly, copy, nonatomic) NSDictionary *cursorsByGroupEmitterID; // @synthesize cursorsByGroupEmitterID=_cursorsByGroupEmitterID;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyByRemovingPendingGroupsAtIndexes:(id)arg1;
- (id)copyByRemovingPendingGroupIdenticalTo:(id)arg1;
- (id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2;
- (id)copyWithAllGroupEmittersExhausted;
- (id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2;
- (id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(_Bool)arg6 isOffline:(_Bool)arg7;
- (id)currentEditionFromPaginator:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(_Bool)arg8 isOffline:(_Bool)arg9;

@end


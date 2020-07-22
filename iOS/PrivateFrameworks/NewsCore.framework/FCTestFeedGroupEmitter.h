//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FCTestFeedGroupEmitter
{
    _Bool _disableGroupMerging;
    _Bool _disableFiltering;
    _Bool _enableSingletonGroups;
}

@property(nonatomic) _Bool enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;
@property(nonatomic) _Bool disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property(nonatomic) _Bool disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
- (Class)classForGroupEmittingOperation;
- (_Bool)emitsSingletonGroups;
- (_Bool)canMergeGroupsUnconditionally;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end


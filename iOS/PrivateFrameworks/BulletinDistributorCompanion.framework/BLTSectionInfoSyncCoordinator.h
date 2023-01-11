//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject
{
    unsigned long long _stateHandler;
    CDUnknownBlockType _infoProvider;
    NSMutableArray *_alertingSectionIDs;
    NSMutableDictionary *_alertingSectionState;
    unsigned long long _mostRecentIndex;
    unsigned long long _mostRecentIndexSinceSync;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mostRecentIndexSinceSync; // @synthesize mostRecentIndexSinceSync=_mostRecentIndexSinceSync;
@property(nonatomic) unsigned long long mostRecentIndex; // @synthesize mostRecentIndex=_mostRecentIndex;
@property(retain, nonatomic) NSMutableDictionary *alertingSectionState; // @synthesize alertingSectionState=_alertingSectionState;
@property(retain, nonatomic) NSMutableArray *alertingSectionIDs; // @synthesize alertingSectionIDs=_alertingSectionIDs;
@property(copy, nonatomic) CDUnknownBlockType infoProvider; // @synthesize infoProvider=_infoProvider;
- (id)description;
- (void)sectionInfoSendCompleted:(unsigned long long)arg1;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1;
- (unsigned long long)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(CDUnknownBlockType)arg2;

@end

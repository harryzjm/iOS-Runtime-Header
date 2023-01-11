//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphSeasonNode;

@interface PGGraphDateNode
{
    PGGraphSeasonNode *_seasonNode;
}

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;
- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
@property(readonly, nonatomic) PGGraphSeasonNode *seasonNode; // @synthesize seasonNode=_seasonNode;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) long long year;

@end

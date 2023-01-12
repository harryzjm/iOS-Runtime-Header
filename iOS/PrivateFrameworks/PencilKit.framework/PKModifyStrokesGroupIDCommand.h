//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID;

@interface PKModifyStrokesGroupIDCommand
{
    NSArray *_strokes;
    NSUUID *_groupID;
    NSUUID *_oldGroupID;
}

+ (id)commandForModifyingStrokes:(id)arg1 drawing:(id)arg2 groupID:(id)arg3 actionName:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *oldGroupID; // @synthesize oldGroupID=_oldGroupID;
@property(readonly, nonatomic) NSUUID *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (id)description;
- (id)applyToDrawingReturnInverted:(id)arg1;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 groupID:(id)arg4 oldGroupID:(id)arg5;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramPointTransitionMapper
{
    int mShapeType;
    NSDictionary *mAdjustValues;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 adjustValues:(id)arg5 parent:(id)arg6;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 parent:(id)arg5;

@end

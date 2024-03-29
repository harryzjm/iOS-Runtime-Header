//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMDrawingContext, ODDDiagram;

__attribute__((visibility("hidden")))
@interface CMDiagramMapper
{
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (id)styleMatrix;
- (id)diagram;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)copyDiagramMapperForId:(id)arg1;
- (id)identifierFromLayoutTypeId:(id)arg1;

@end


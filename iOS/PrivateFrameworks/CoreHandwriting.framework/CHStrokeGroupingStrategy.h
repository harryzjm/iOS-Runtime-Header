//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingStrategy : NSObject
{
    id <CHStrokeProvider> _strokeProvider;
}

@property(readonly, retain, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;
- (void)getFirstStrokeIdentifier:(id *)arg1 lastStrokeIdentifier:(id *)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;
- (id)strokesForIdentifiers:(id)arg1;
@property(readonly, retain, nonatomic) NSString *strategyIdentifier;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;

@end

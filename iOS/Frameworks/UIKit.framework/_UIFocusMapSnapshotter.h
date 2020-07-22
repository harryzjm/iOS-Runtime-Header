//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIFocusSystem, _UIFocusRegion, _UIFocusRegionContentAttributes;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotter : NSObject
{
    _Bool _snapshotFrameIsEmpty;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusRegionContentAttributes *_contentAttributes;
    _UIFocusRegion *_focusedRegion;
    id <_UIFocusRegionContainer> _regionsContainer;
    struct CGRect _snapshotFrame;
}

@property(nonatomic) struct CGRect snapshotFrame; // @synthesize snapshotFrame=_snapshotFrame;
@property(nonatomic) __weak id <_UIFocusRegionContainer> regionsContainer; // @synthesize regionsContainer=_regionsContainer;
@property(copy, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property(readonly, copy, nonatomic) _UIFocusRegionContentAttributes *contentAttributes; // @synthesize contentAttributes=_contentAttributes;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void).cxx_destruct;
- (id)captureSnapshot;
- (id)_searchAreaForContainerSearchRect:(struct CGRect)arg1;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3;
- (id)init;

@end


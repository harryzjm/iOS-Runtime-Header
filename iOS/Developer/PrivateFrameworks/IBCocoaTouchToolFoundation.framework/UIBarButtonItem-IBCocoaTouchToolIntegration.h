//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

@class NSValue, UIToolbar, UIViewController;

@interface UIBarButtonItem (IBCocoaTouchToolIntegration)
- (id)ibTitleEditableArea;
- (struct CGRect)ibSceneRect;
- (struct CGRect)ibCustomViewFrameInEnclosingBar;
@property(copy, nonatomic) NSValue *ibSpaceItemSceneRect;
- (id)ibEffectiveOwningToolbar;
@property(nonatomic) UIViewController *ibToolbarOwningViewController;
@property(nonatomic) UIToolbar *ibOwningToolbar;
- (_Bool)ibIsSpaceItem;
- (CDUnknownBlockType)ibWindowForUpdatingConstraints:(id *)arg1;
- (id)ibEffectiveViewToPlaceInLayoutEngineWindow;
- (id)font;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end


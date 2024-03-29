//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem;
@protocol _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionSearchContextState : NSObject
{
    id <_UIFocusRegionContainer> _regionContainer;
    UIFocusSystem *_regionContainerFocusSystem;
    struct CGRect _clippingRect;
}

+ (id)stateWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(readonly, nonatomic) UIFocusSystem *regionContainerFocusSystem; // @synthesize regionContainerFocusSystem=_regionContainerFocusSystem;
@property(readonly, nonatomic) id <_UIFocusRegionContainer> regionContainer; // @synthesize regionContainer=_regionContainer;
- (id)initWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;

@end


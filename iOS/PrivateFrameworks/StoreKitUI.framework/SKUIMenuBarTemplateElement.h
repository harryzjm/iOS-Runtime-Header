//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class SKUINavigationBarViewElement;
@protocol SKUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateElement : SKUIViewElement
{
}

@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
- (id)_menuBarChildOfElement:(id)arg1;
@property(readonly, nonatomic) SKUIViewElement<SKUIMenuBarViewElement> *menuBar;

@end


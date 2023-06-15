//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUINavigationBarViewElement;
@protocol SUUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SUUIMenuBarTemplateElement : SUUIViewElement
{
}

@property(readonly, nonatomic) SUUINavigationBarViewElement *navigationBarElement;
- (id)_menuBarChildOfElement:(id)arg1;
@property(readonly, nonatomic) SUUIViewElement<SUUIMenuBarViewElement> *menuBar;

@end


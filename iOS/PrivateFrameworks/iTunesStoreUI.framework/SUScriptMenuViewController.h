//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptMenuViewController
{
    SUScriptFunction *_action;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_viewController;
@property(retain) NSString *title;
@property(retain) NSNumber *selectedIndex;
@property(retain) id items;
@property(retain) WebScriptObject *action;
- (id)_className;
- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)newNativeViewController;
- (void)dealloc;

@end

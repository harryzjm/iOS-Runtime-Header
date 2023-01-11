//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSTabBarItem-Protocol.h>

@class IKJSNavigationDocument, JSManagedValue, NSString, SKUITabBarItem;

__attribute__((visibility("hidden")))
@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem>
{
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
    SKUITabBarItem *_tabBarItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUITabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(readonly, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *badgeValue;
@property(readonly, nonatomic) NSString *rootURL;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4;

@end

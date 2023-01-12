//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccountsAndGroupsCell, CNAccountsAndGroupsItem, CNContainerPickerItem, NSArray;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsAuthorizationContext : NSObject
{
    long long _type;
    CNAccountsAndGroupsItem *_item;
    CNContainerPickerItem *_containerItem;
    CNAccountsAndGroupsCell *_cell;
    NSArray *_contactsToAddToDropDestination;
    CDUnknownBlockType _actionCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionHandler; // @synthesize actionCompletionHandler=_actionCompletionHandler;
@property(retain, nonatomic) NSArray *contactsToAddToDropDestination; // @synthesize contactsToAddToDropDestination=_contactsToAddToDropDestination;
@property(retain, nonatomic) CNAccountsAndGroupsCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) CNContainerPickerItem *containerItem; // @synthesize containerItem=_containerItem;
@property(retain, nonatomic) CNAccountsAndGroupsItem *item; // @synthesize item=_item;
@property(nonatomic) long long type; // @synthesize type=_type;

@end


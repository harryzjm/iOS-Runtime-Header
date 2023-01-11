//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSString, WFAction, WFActionDrawerResults, WFActionDrawerState;

@interface WFActionDrawerMutableState
{
}


// Remaining properties
@property(retain, nonatomic) WFAction *action; // @dynamic action;
@property(nonatomic) long long activePane; // @dynamic activePane;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(copy, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(nonatomic, getter=isFocusedOnSearchBar) _Bool focusedOnSearchBar; // @dynamic focusedOnSearchBar;
@property(retain, nonatomic) NSIndexPath *listPosition; // @dynamic listPosition;
@property(retain, nonatomic) WFActionDrawerResults *listResults; // @dynamic listResults;
@property(retain, nonatomic) WFActionDrawerState *precedingState; // @dynamic precedingState;
@property(copy, nonatomic) NSString *searchQuery; // @dynamic searchQuery;
@end

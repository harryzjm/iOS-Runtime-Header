//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTAutomationSupport/XCElementSnapshot.h>

#import <XCTest/XCUIElementSnapshot-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface XCElementSnapshot (XCUIElementSnapshot) <XCUIElementSnapshot>
@property(readonly, copy) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly) NSArray *children;
@property(readonly) unsigned long long elementType;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) struct CGRect frame;
@property(readonly) long long horizontalSizeClass;
@property(readonly) NSString *identifier;
@property(readonly, copy) NSString *label;
@property(readonly) NSString *placeholderValue;
@property(readonly, getter=isSelected) _Bool selected;
@property(readonly, copy) NSString *title;
@property(readonly) id value;
@property(readonly) long long verticalSizeClass;
@end

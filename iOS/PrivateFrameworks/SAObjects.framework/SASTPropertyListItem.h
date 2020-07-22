//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTPropertyListItem <SASTTemplateItem>
{
}

+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)propertyListItem;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(copy, nonatomic) NSArray *decoratedValues;
@property(retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


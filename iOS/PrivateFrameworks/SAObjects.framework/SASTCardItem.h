//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor, SAUIDecoratedText;

@interface SASTCardItem <SASTTemplateItem>
{
}

+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cardItem;
@property(retain, nonatomic) SAUIColor *titleTextColor;
@property(retain, nonatomic) SAUIColor *titleBackgroundColor;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SAUIColor *labelTextColor;
@property(retain, nonatomic) SAUIDecoratedText *label;
@property(retain, nonatomic) SAUIDecoratedText *footnote;
@property(retain, nonatomic) SAUIColor *backgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

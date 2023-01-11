//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUIButton
{
}

+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)button;
@property(retain, nonatomic) SAUIColor *textColor;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *secondaryText;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SAUIColor *backgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

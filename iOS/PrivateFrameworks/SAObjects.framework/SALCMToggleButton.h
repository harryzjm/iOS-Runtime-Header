//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, SABaseCommand;

@interface SALCMToggleButton
{
}

+ (id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)toggleButton;
@property(copy, nonatomic) NSString *onTitle;
@property(copy, nonatomic) NSDictionary *onIconDynamicImage;
@property(copy, nonatomic) NSString *offTitle;
@property(copy, nonatomic) NSDictionary *offIconDynamicImage;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


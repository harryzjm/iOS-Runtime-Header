//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataQuietModeEntry
{
    NSString *_focusName;
}

+ (_Bool)supportsSecureCoding;
+ (id)entryWithFocusName:(id)arg1 imageNamed:(id)arg2 boolValue:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *focusName; // @synthesize focusName=_focusName;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initFromData:(const CDStruct_e9def42b *)arg1 type:(int)arg2 focusName:(const char *)arg3 maxFocusLength:(int)arg4 imageName:(const char *)arg5 maxImageLength:(int)arg6 boolValue:(_Bool)arg7;

@end

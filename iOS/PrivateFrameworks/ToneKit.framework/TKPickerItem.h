//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TKPickerItem : NSObject
{
    long long _section;
}

@property(nonatomic, setter=_setSection:) long long section; // @synthesize section=_section;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(_Bool)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)description;

@end


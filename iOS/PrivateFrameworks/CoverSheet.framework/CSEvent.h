//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CSEvent : NSObject
{
    _Bool _consumable;
    long long _type;
    NSNumber *_value;
}

+ (id)eventWithType:(long long)arg1;
@property(nonatomic, getter=isConsumable) _Bool consumable; // @synthesize consumable=_consumable;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

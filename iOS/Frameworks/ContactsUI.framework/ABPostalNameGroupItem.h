//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNCardGroupItem.h"

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface ABPostalNameGroupItem : CNCardGroupItem
{
    CNMutableContact *_contact;
    SEL _setter;
    NSString *_value;
    NSString *_property;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) SEL setter; // @synthesize setter=_setter;
@property(retain, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;

@end


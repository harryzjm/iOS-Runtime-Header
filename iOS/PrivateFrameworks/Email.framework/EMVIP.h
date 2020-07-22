//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAEmailAddressSet, NSString;

@interface EMVIP : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_displayName;
    EAEmailAddressSet *_emailAddresses;
}

@property(readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3;

@end

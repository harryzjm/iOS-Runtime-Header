//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)bestLabel:(id)arg1;
- (id)defaultActionURL;
- (id)normalizedValue;
@property(readonly, nonatomic) CNPhoneNumber *phoneNumber;

@end


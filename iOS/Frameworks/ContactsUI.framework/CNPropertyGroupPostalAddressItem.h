//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem
{
}

+ (id)emptyValueForLabel:(id)arg1;
- (id)bestValue:(id)arg1;
- (_Bool)_isMinimalAddress:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
@property(readonly, nonatomic) CNPostalAddress *address;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNUICoreContactsAuthorizationModel : NSObject
{
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:(id)arg1;
- (id)modelByCopyingItemsWithBundleIdentifier:(id)arg1;
- (id)itemWithMatchingBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) NSArray *bundleIdentifiers;
@property(readonly, nonatomic) NSArray *remoteItems;
@property(readonly, nonatomic) NSArray *changedItems;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end


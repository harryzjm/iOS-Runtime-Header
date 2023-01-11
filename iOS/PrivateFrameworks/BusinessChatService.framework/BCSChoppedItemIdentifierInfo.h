//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSLinkItemIdentifier;

__attribute__((visibility("hidden")))
@interface BCSChoppedItemIdentifierInfo : NSObject
{
    BCSLinkItemIdentifier *_itemIdentifier;
    long long _chopID;
}

+ (id)newWithLinkItemIdentifier:(id)arg1 chopID:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long chopID; // @synthesize chopID=_chopID;
@property(retain, nonatomic) BCSLinkItemIdentifier *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

@end

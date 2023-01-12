//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol TabCollectionItem;

__attribute__((visibility("hidden")))
@interface TabContextMenuIdentifier : NSObject
{
    NSUUID *_tabUUID;
    id <TabCollectionItem> _sourceItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <TabCollectionItem> sourceItem; // @synthesize sourceItem=_sourceItem;
@property(readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTabUUID:(id)arg1 sourceItem:(id)arg2;

@end


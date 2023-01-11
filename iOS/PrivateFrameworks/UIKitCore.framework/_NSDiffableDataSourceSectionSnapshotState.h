//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSOrderedSet, _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying>
{
    _UITreeDataSourceSnapshotter *_snapshotter;
    NSOrderedSet *_identifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) _UITreeDataSourceSnapshotter *snapshotter; // @synthesize snapshotter=_snapshotter;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2;
- (id)init;

@end

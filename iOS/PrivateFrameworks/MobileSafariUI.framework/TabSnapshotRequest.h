//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface TabSnapshotRequest : NSObject
{
    double _topBackdropHeight;
    unsigned long long _options;
    id <NSObject><NSCopying> _identifier;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3 identifier:(id)arg4;
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3;

@end

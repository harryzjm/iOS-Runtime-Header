//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSKCOIdPlacementBaseOperation
{
    _Bool _isDominating;
    int _fromIndex;
    int _toIndex;
}

+ (id)stringForPlacementType:(int)arg1;
@property(readonly, nonatomic) _Bool isDominating; // @synthesize isDominating=_isDominating;
@property(readonly, nonatomic) int toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, nonatomic) int fromIndex; // @synthesize fromIndex=_fromIndex;
- (void)saveToArchiver:(id)arg1 message:(void *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const void *)arg2;
- (id)toString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)operationWithNewNoop:(_Bool)arg1;
@property(readonly, nonatomic) int placementType;
- (id)initWithAddress:(const void *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (id)initWithAddress:(const void *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;

@end


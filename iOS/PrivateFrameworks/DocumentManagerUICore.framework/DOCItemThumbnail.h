//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem;

@interface DOCItemThumbnail
{
    double _minimumSize;
    FPItem *_item;
}

@property(readonly, nonatomic) FPItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
- (void).cxx_destruct;
- (id)thumbnail;
- (id)createOperationWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isInteractive:(_Bool)arg4;
- (void)updateItemTo:(id)arg1;
- (id)initWithCache:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 fallback:(id)arg6 style:(unsigned long long)arg7 isInteractive:(_Bool)arg8;

@end


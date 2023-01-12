//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXGMutableScrollViewModel
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) long long scrollDecelerationRate;
@property(nonatomic) long long scrollRegime;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) struct CGSize contentSize;
- (void)stopScrolling;
@end

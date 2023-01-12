//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/NSObject-Protocol.h>

@protocol PFParallaxLayoutConfiguration;

@protocol PFParallaxLayoutConfiguration <NSObject>
@property(readonly, nonatomic) struct CGSize parallaxPaddingPct;
@property(readonly, nonatomic) struct CGRect timeOverlapCheckBottom;
@property(readonly, nonatomic) struct CGRect timeOverlapCheckTop;
@property(readonly, nonatomic) struct CGRect unsafeRect;
@property(readonly, nonatomic) struct CGSize parallaxPadding;
@property(readonly, nonatomic) struct CGRect inactiveTimeRect;
@property(readonly, nonatomic) struct CGRect timeRect;
@property(readonly, nonatomic) struct CGSize screenSize;
- (_Bool)isEqualToLayoutConfiguration:(id <PFParallaxLayoutConfiguration>)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class UIView;

@protocol NTKDialMarkerView <NSObject>
@property(nonatomic) double alpha;
@property(nonatomic) struct CGPoint position;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (void)removeFromParent;
- (void)addToParentView:(UIView *)arg1;
@end


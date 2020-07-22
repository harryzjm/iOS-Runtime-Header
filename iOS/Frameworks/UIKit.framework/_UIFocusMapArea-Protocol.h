//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIFocusRegion;
@protocol UICoordinateSpace;

@protocol _UIFocusMapArea <NSObject>
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace;
- (_UIFocusRegion *)intersectionWithRegion:(_UIFocusRegion *)arg1;
- (_Bool)intersectsRegion:(_UIFocusRegion *)arg1;
- (_Bool)intersectsRect:(struct CGRect)arg1;
@end


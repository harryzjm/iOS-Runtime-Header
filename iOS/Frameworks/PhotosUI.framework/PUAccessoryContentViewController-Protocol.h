//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@protocol PUAccessoryContentViewControllerDelegate, UICoordinateSpace;

@protocol PUAccessoryContentViewController <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property(nonatomic) __weak id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
- (struct CGRect)contentBoundsInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;

@optional
@property(readonly, nonatomic) struct CGSize minimumContentSize;
@end


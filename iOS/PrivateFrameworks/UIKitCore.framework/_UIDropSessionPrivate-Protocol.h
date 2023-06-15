//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIDragItem, UIView;

@protocol _UIDropSessionPrivate <NSObject>
@property(readonly, nonatomic, getter=_drivenByPointer) _Bool drivenByPointer;
- (struct CGPoint)_previewCenterForVisibleItem:(UIDragItem *)arg1 inView:(UIView *)arg2;
- (struct CGSize)_previewSizeForVisibleItem:(UIDragItem *)arg1;
- (void)requestVisibleItems:(void (^)(NSArray *, NSArray *))arg1;
@end


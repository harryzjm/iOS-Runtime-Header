//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;
@protocol PXGadget;

@protocol PXNavigableGadgetViewController <NSObject>
- (_Bool)navigateToGadgetDeferIfNeeded:(id <PXGadget>)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(void (^)(id <PXGadget>))arg3;
- (_Bool)navigateToGadgetWithIdDeferIfNeeded:(NSString *)arg1 animated:(_Bool)arg2 nestingNavigationBlock:(void (^)(id <PXGadget>))arg3;
- (_Bool)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(void (^)(id <PXGadget>))arg3;
- (_Bool)navigateToGadget:(id <PXGadget>)arg1 animated:(_Bool)arg2;
- (_Bool)navigateToFirstGadgetWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
@end


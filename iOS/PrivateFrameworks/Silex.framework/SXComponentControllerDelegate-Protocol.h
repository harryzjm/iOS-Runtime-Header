//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentController, SXLayoutBlueprint, SXPresentationAttributes;

@protocol SXComponentControllerDelegate <NSObject>
- (void)componentController:(SXComponentController *)arg1 didInvalidateBlueprint:(SXLayoutBlueprint *)arg2 attributes:(SXPresentationAttributes *)arg3;

@optional
- (void)componentController:(SXComponentController *)arg1 didPresentBlueprint:(SXLayoutBlueprint *)arg2;
- (void)componentController:(SXComponentController *)arg1 willPresentBlueprint:(SXLayoutBlueprint *)arg2;
@end

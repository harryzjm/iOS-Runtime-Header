//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/NSObject-Protocol.h>

@class CRKCardSectionViewController, INInteraction, NSArray, NSSet, NSString;

@protocol CRKCardSectionViewControllerDataSource <NSObject>
- (INInteraction *)cardSectionViewController:(CRKCardSectionViewController *)arg1 interactionWithIdentifier:(NSString *)arg2;

@optional
- (NSArray *)cardSectionViewController:(CRKCardSectionViewController *)arg1 interfaceSectionsForInteraction:(INInteraction *)arg2;
- (NSSet *)cardSectionViewController:(CRKCardSectionViewController *)arg1 handledParametersForInteraction:(INInteraction *)arg2;
@end


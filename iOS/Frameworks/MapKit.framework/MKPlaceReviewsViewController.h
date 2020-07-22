//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceReviewAvatarGenerator, NSArray, NSMutableArray, NSString;
@protocol MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKMapItem *_mapItem;
    id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> _reviewsControllerDelegate;
    MKPlaceReviewAvatarGenerator *_avatarGenerator;
    NSArray *_userSnippets;
    NSMutableArray *_cells;
}

@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSArray *userSnippets; // @synthesize userSnippets=_userSnippets;
@property(retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator; // @synthesize avatarGenerator=_avatarGenerator;
@property(nonatomic) __weak id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> reviewsControllerDelegate; // @synthesize reviewsControllerDelegate=_reviewsControllerDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_showReview:(id)arg1 index:(unsigned long long)arg2;
- (void)_viewAllReviews;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewsCount;
- (void)loadCells;
- (void)_updateAttribution;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


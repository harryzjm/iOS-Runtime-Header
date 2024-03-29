//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class EKEventDetailAttendeesListView, NSArray, NSLayoutConstraint, NSObject, UIImageView, UILabel, UIViewController;
@protocol EKEventDetailAttendeeCellDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
    NSObject<OS_dispatch_queue> *_sortAttendeesQueue;
    _Bool _loadingAttendees;
    UIViewController *_viewController;
    NSObject<EKEventDetailAttendeeCellDelegate> *_attendeeCellDelegate;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool loadingAttendees; // @synthesize loadingAttendees=_loadingAttendees;
@property __weak NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate; // @synthesize attendeeCellDelegate=_attendeeCellDelegate;
@property __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_attendeesListView;
- (void)_setAttendees:(id)arg1;
- (void)_attendeesDidFinishLoadingForTest;
- (id)_attendeesWithoutOrganizerAndLocations;
- (_Bool)update;
- (double)displayHeight;
- (double)footerInset;
- (double)listToTitle;
- (double)headerInset;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end


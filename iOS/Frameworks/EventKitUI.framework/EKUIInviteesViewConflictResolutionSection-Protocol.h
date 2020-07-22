//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIInviteesViewSection-Protocol.h>

@class EKInviteeAlternativeTimeSearcher;

@protocol EKUIInviteesViewConflictResolutionSection <EKUIInviteesViewSection>
- (void)availabilitySearcherChangedState:(long long)arg1;
- (EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
- (void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)refreshCellsAfterStateChange;
- (void)clearCheckmark;
- (void)setNewTimeChosen:(void (^)(NSDate *, NSDate *))arg1;
- (void)setShowPreviewOfEventAtTime:(void (^)(NSDate *, NSDate *))arg1;
@end


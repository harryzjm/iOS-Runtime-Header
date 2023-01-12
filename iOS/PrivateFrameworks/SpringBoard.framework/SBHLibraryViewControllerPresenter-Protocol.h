//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBHLibraryViewController;
@protocol BSInvalidatable;

@protocol SBHLibraryViewControllerPresenter <NSObject>
@property(readonly, nonatomic, getter=isLibraryPresentationModal) _Bool libraryPresentationModal;
- (id <BSInvalidatable>)acquireUseSnapshotAsBackgroundViewAssertionForReason:(NSString *)arg1;
- (_Bool)isPresentingLibraryInMostForegroundState:(SBHLibraryViewController *)arg1;
@end


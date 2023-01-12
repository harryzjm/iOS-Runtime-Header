//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUActivityViewController, MUShareSheetPresenter, NSArray, NSString;

@protocol MUShareSheetPresenterDelegate <NSObject>
- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;

@optional
- (NSArray *)footerActivitiesForShareSheetPresenter:(MUShareSheetPresenter *)arg1;
- (MUActivityViewController *)shareSheetPresenterRequestsOverridenActivityViewController:(MUShareSheetPresenter *)arg1;
@end


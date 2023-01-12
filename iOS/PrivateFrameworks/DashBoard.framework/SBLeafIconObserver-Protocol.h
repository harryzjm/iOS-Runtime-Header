//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/SBIconObserver-Protocol.h>

@class SBLeafIcon;
@protocol SBLeafIconDataSource;

@protocol SBLeafIconObserver <SBIconObserver>

@optional
- (void)leafIcon:(SBLeafIcon *)arg1 didChangeActiveDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didRemoveIconDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didAddIconDataSource:(id <SBLeafIconDataSource>)arg2;
@end


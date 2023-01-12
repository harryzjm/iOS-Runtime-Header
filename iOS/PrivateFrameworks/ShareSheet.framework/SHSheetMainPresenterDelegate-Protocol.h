//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, NSError, UIActivity;
@protocol SHSheetMainPresenterInterface;

@protocol SHSheetMainPresenterDelegate <NSObject>
- (void)mainPresenter:(id <SHSheetMainPresenterInterface>)arg1 didCompleteActivity:(UIActivity *)arg2 withSuccess:(_Bool)arg3 returnedItems:(NSArray *)arg4 error:(NSError *)arg5;
- (void)mainPresenter:(id <SHSheetMainPresenterInterface>)arg1 willCompleteActivity:(UIActivity *)arg2 withSuccess:(_Bool)arg3;
- (void)mainPresenterIsReadyToInteract:(id <SHSheetMainPresenterInterface>)arg1;
@end

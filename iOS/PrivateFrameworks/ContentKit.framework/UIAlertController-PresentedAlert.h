//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

#import <ContentKit/WFPresentedAlert-Protocol.h>

@class NSString;

@interface UIAlertController (PresentedAlert) <WFPresentedAlert>
- (id)actionForButton:(id)arg1;
- (void)setAlertButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setAlertButtons:(id)arg1;
- (void)dismissAlertWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

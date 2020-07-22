//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class CNContact, CNContactProperty, CNContactViewController;

@protocol CNContactViewControllerDelegate <NSObject>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (_Bool)contactViewController:(CNContactViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactHeaderView, CNContactViewCache, UIViewController;

@protocol CNContactHeaderViewDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (UIViewController *)viewControllerForHeaderView:(CNContactHeaderView *)arg1;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerViewDidUpdateLabelSizes;
- (void)headerPhotoDidUpdate;
@end

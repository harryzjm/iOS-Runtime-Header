//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class ICQUICloudStorageOffersManager, NSError, UIViewController;

@protocol ICQUICloudStorageOffersManagerDelegate <NSObject>

@optional
- (void)manager:(ICQUICloudStorageOffersManager *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)managerDidCancel:(ICQUICloudStorageOffersManager *)arg1;
- (void)manager:(ICQUICloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(ICQUICloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
@end


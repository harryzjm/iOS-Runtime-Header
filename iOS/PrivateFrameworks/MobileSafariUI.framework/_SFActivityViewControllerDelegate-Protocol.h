//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSString, UIActivity, _SFActivityViewController;

@protocol _SFActivityViewControllerDelegate <NSObject>

@optional
- (_Bool)activityViewControllerSupportsDownloads:(_SFActivityViewController *)arg1;
- (long long)browserPersonaForActivityViewController:(_SFActivityViewController *)arg1;
- (void)activityViewController:(_SFActivityViewController *)arg1 didCompleteActivity:(NSString *)arg2 success:(_Bool)arg3;
- (void)activityViewController:(_SFActivityViewController *)arg1 prepareActivity:(UIActivity *)arg2 completion:(void (^)(void))arg3;
@end


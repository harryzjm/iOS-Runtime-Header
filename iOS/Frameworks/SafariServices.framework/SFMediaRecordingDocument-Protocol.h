//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString;

@protocol SFMediaRecordingDocument <NSObject>
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, nonatomic) _Bool audioOnly;
@property(readonly, nonatomic) _Bool canOverrideStatusBar;
- (void)muteMediaCapture;
- (void)statusBarIndicatorTappedWithCompletionHandler:(void (^)(void))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol EFListStateCapturerDelegate <NSObject>
- (NSString *)descriptionForItem:(id)arg1;
- (NSArray *)itemsForStateCaptureWithErrorString:(id *)arg1;
- (NSString *)labelForStateCapture;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError;

@protocol VCAudioIOControllerDelegate <NSObject>
- (void)didResume;
- (void)didSuspend;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(_Bool)arg1 error:(NSError *)arg2;
- (void)didStart:(_Bool)arg1 error:(NSError *)arg2;
@end


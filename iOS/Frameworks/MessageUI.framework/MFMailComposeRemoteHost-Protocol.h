//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSString;

@protocol MFMailComposeRemoteHost
- (void)bodyFinishedDrawing;
- (void)serviceCompositionFinishedWithResult:(long long)arg1 error:(NSError *)arg2;
- (void)serviceCompositionRequestsSendWithBody:(NSString *)arg1 recipients:(NSArray *)arg2 completion:(void (^)(_Bool))arg3;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MMCS/NSObject-Protocol.h>

@class C2Session, C2SessionTask, NSError;

@protocol C2SessionTaskDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 task:(C2SessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVTaskGroup, NSError;

@protocol CoreDAVTaskGroupDelegate <NSObject>

@optional
- (void)taskGroup:(CoreDAVTaskGroup *)arg1 didFinishWithError:(NSError *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookmarkDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVDeleteTask, NSError;

@protocol CoreDAVDeleteTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)deleteTask:(CoreDAVDeleteTask *)arg1 completedWithError:(NSError *)arg2;
@end


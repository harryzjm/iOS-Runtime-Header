//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface NSPipe : NSObject
{
}

+ (id)pipe;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_closeOnDealloc;
@property(readonly, retain) NSFileHandle *fileHandleForWriting;
@property(readonly, retain) NSFileHandle *fileHandleForReading;
- (id)init;

@end


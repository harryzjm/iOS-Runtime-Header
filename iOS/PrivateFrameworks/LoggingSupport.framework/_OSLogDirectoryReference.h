//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogDirectoryReference : NSObject
{
    int _fd;
    long long _etk;
}

@property(readonly, nonatomic) int fileDescriptor;
- (void)dealloc;
- (void)close;
- (id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char *)arg2;
- (id)initWithDescriptor:(int)arg1;

@end


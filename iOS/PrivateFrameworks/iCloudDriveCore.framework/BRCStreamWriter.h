//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface BRCStreamWriter : NSObject
{
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)appendString:(id)arg1;
- (id)initWithOutputStream:(id)arg1;

@end


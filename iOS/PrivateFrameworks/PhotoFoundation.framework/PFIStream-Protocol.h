//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/NSObject-Protocol.h>
#import <PhotoFoundation/PFStream-Protocol.h>

@protocol PFIStream <NSObject, PFStream>
- (const char *)streamData:(unsigned long long *)arg1;
- (_Bool)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long *)arg3;
@end


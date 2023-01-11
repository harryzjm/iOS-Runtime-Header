//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/NSObject-Protocol.h>
#import <PhotoFoundation/PFStream-Protocol.h>

@protocol PFIStream;

@protocol PFOStream <NSObject, PFStream>
- (_Bool)truncateLength:(long long)arg1;
- (_Bool)writeStream:(id <PFIStream>)arg1 blockSize:(unsigned long long)arg2;
- (_Bool)writeStream:(id <PFIStream>)arg1;
- (_Bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;
- (_Bool)reserveLength:(long long)arg1;
@end


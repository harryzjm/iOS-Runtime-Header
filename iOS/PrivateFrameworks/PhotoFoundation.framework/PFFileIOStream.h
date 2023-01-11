//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFOStream-Protocol.h>

@class NSString;

@interface PFFileIOStream <PFOStream>
{
}

- (_Bool)truncateLength:(long long)arg1;
- (_Bool)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
- (_Bool)writeStream:(id)arg1;
- (_Bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;
- (_Bool)reserveLength:(long long)arg1;
- (_Bool)openStream;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


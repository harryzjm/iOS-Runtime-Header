//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface TKDataSource : NSObject
{
    NSData *_data;
    const char *_ptr;
}

- (void).cxx_destruct;
@property(readonly) const char *ptr; // @synthesize ptr=_ptr;
- (id)dataFromPtr:(const char *)arg1;
@property(readonly) NSData *data;
- (id)fetchDataWithLength:(long long)arg1;
- (unsigned char)fetchByte;
- (_Bool)bytesSafeToRead:(long long)arg1;
@property(readonly) const char *end;
- (id)initWithData:(id)arg1;

@end


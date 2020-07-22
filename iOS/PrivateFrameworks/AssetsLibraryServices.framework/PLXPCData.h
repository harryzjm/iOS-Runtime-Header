//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSObject;
@protocol OS_xpc_object;

@interface PLXPCData : NSData
{
    NSObject<OS_xpc_object> *_data;
}

- (unsigned long long)length;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (const void *)bytes;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithXPCData:(id)arg1;

@end


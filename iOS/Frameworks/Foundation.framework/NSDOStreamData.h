//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface NSDOStreamData : NSMutableData
{
    id refObject;
    struct {
        id data;
        char *datap;
        char *limitp;
        char *startp;
        id callback;
        _Bool datapVM;
    } stream;
}

- (unsigned long long)length;
- (void *)mutableBytes;
- (const void *)bytes;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


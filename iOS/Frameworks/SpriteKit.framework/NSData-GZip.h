//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GZip)
+ (id)makeArchive:(const void *)arg1 length:(unsigned long long)arg2 level:(float)arg3;
- (id)gzipInflate;
- (id)gzipDeflate:(float)arg1;
@end


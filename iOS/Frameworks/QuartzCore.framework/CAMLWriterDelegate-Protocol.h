//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/NSObject-Protocol.h>

@class CAMLWriter, NSString, NSURL;

@protocol CAMLWriterDelegate <NSObject>

@optional
- (NSURL *)CAMLWriter:(CAMLWriter *)arg1 URLForResource:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 IDForObject:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 typeForObject:(id)arg2;
@end


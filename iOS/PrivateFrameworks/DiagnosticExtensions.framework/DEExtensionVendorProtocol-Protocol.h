//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensions/NSObject-Protocol.h>

@class NSDictionary;

@protocol DEExtensionVendorProtocol <NSObject>
- (void)attachmentsForParameters:(NSDictionary *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)attachmentListWithHandler:(void (^)(NSArray *))arg1;
@end

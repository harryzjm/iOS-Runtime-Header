//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/NSObject-Protocol.h>

@protocol WBSFormsMetadataProvider <NSObject>
@property(readonly, nonatomic) unsigned long long formCount;
- (void)enumerateFormsUsingBlock:(void (^)(struct OpaqueFormAutoFillFrame *, WBSFormMetadata *, _Bool *))arg1;
@end

